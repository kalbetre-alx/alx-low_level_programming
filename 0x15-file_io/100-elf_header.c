#include "main.h"
#include <stdio.h>
#include <elf.h>

#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif

/**
 * check_open - checks open operation
 * @file_name: the file descriptor
 * @result: the return of a call to write
 *
 * Return: Nothing
 */
void check_open(char *file_name, int result)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", file_name);
		exit(98);
	}
}

/**
 * check_read - checks read operation
 * @file_name: the file descriptor
 * @result: the return of a call to write
 *
 * Return: Nothing
 */
void check_read(char *file_name, int result)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}
}

/**
 * check_elf_file - checks if the file is and ELF file
 * @file_name: the file descriptor
 * @result: the return of a call to write
 *
 * Return: Nothing
 */
void check_elf_file(char *file_name, int result)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}
}

/**
 * print_magic - prints the magic bytes of an ELF file
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_magic(ElfW(Ehdr) header)
{
	int n = 0;

	printf("  Magic:   ");
	while (n < EI_NIDENT)
	{
		printf("%2.2x", header.e_ident[n]);
		if (n == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		n++;
	}
}

/**
 * print_class - prints the architecture for this binary
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_class(ElfW(Ehdr) header)
{
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
		break;
		case ELFCLASS32:
			printf("ELF32\n");
		break;
		case ELFCLASS64:
			printf("ELF64\n");
		break;
	}
}

/**
 * print_data - prints the data encoding of the ELF
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_data(ElfW(Ehdr) header)
{
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
		break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
		break;
	}
}

/**
 * print_version - prints the version number of ELF spec
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_version(ElfW(Ehdr) header)
{
	printf("  Version:                           %d", header.e_ident[EI_VERSION]);
	if (header.e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");
	printf("\n");
}

/**
 * print_osabi_2 - prints the the OS & ABI
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_osabi_2(ElfW(Ehdr) header)
{
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", header.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_osabi - prints the the OS & ABI
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_osabi(ElfW(Ehdr) header)
{
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		default:
			print_osabi_2(header);
			break;
	}
	printf("\n");
}

/**
 * print_abi_version - prints the version of the abi
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_abi_version(ElfW(Ehdr) header)
{
	printf("  ABI Version:                       ");
	printf("%d\n", header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the the OS & ABI
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_type(ElfW(Ehdr) header)
{
	char *type = (char *)&header.e_type;

	if (header.e_ident[EI_DATA] == ELFDATA2MSB)
		type++;

	printf("  Type:                              ");
	switch (*type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", *type);
			break;
	}
}

/**
 * print_entry - prints entry point of the memory
 * @header: the ELF header
 *
 * Return: Nothing
 */
void print_entry(ElfW(Ehdr) header)
{
	printf("  Entry point address:               0x");
	printf("%lx\n", header.e_entry);
}

/**
 * main - check the code
 * @argc: the number of arguments passed to the program
 * @argv: the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	ElfW(Ehdr) header;
	int fd_elf;
	ssize_t elf_count;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd_elf = open(argv[1], O_RDONLY);
	check_open(argv[1], fd_elf);

	elf_count = read(fd_elf, &header, sizeof(header));
	check_read(argv[1], elf_count);

	if (header.e_ident[EI_MAG0] != 0x7f &&
		header.e_ident[EI_MAG1] != 'E' &&
		header.e_ident[EI_MAG2] != 'L' &&
		header.e_ident[EI_MAG2] != 'F')
	{
		dprintf(STDERR_FILENO, "Invalid ELF file.\n");
		exit(98);
	}

	printf("ELF Header:\n");
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_osabi(header);
	print_abi_version(header);
	print_type(header);
	print_entry(header);

	return (0);
}
