#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <elf.h>


void print_error(const char *mssg);
int op_file(const char *filename);
void rd_header(int file_des, Elf64_Ehdr *header);
void print_version(Elf64_Ehdr *header);
void print_magic(Elf64_Ehdr *header);
void print_class(Elf64_Ehdr *header);
void print_data(Elf64_Ehdr *header);
void print_os0abi(Elf64_Ehdr *header);

/**
 *print_error - prints an error message to standard error
 *@mssg: the mesage to be printed
 */
void print_error(const char *mssg)
{
	fprintf(stderr, "Error: %s\n", mssg);
}

/**
 *op_file - function that opens the file in read-only mode
 *@filename: name of file
 *Return: the file descriptor
 */

int op_file(const char *filename)
{
	int file_des = open(filename, O_RDONLY);

	if (file_des < 0)
	{
		print_error("Failed to open file");
		exit(98);
	}
	return (file_des);
}

/**
 *rd_header - reads the header in the input file
 *@header: pointer to an Elf64_Ehdr struct
 *@file_des: file descriptor
 */

void rd_header(int file_des, Elf64_Ehdr *header)
{
	if (lseek(file_des, 0, SEEK_SET) < 0)
	{
		print_error("Failed to seek to start of file");
		exit(98);
	}
	if (read(file_des, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Failed to read ELF header");
		exit(98);
	}
}

/**
 *print_class - prints the class of a Elf header
 *@header: pointer to an array containing the Elf class
 */

void print_class(Elf64_Ehdr *header)
{
	printf("Class: ");
	if (header->e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("Invalid class\n");
	}
	else if (header->e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (header->e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
}

/**
 *print_magic - prints magic num of an Elf header
 *@header: pointer to an array containing the Elf magic num
 */

void print_magic(Elf64_Ehdr *header)
{
	int j;

	printf("Magic: ");
	for (j = 0; j < EI_NIDENT; j++)
	{
		printf("%02x ", header->e_ident[j]);
	}
	printf("\n");
}

/**
 *print_data - prints data of an Elf header
 *@header: pointer to an array containing the Elf data
 */

void print_data(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_DATA] == ELFDATANONE)
	{
		printf("Invalid data encoding\n");
	}
	else if (header->e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
}

/**
 *print_version - prints the version of an Elf header
 *@header: pointer to an array containing the Elf version
 */

void print_version(Elf64_Ehdr *header)
{
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
}

/**
 *print_os0abi - prints the OS\ABI of an Elf header
 *@header: pointer to an array containing the Elf
 */

void print_os0abi(Elf64_Ehdr *header)
{
	printf("OS/ABI: ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX System V ABI\n");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX ABI\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("Solaris ABI\n");
		break;
	case ELFOSABI_IRIX:
		printf("IRIX ABI\n");
		break;
	case ELFOSABI_LINUX:
		printf("LINUX ABI\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD ABI\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("FreeBSD ABI\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_ARM_AEABI:
		printf("ARM EABI\n");
		break;
	case ELFOSABI_TRU64:
		printf("Tru64 UNIX ABI\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("unknown: %x>\n", header->e_ident[EI_OSABI]);
	}
}

/**
 *main -  displays the information contained in 
 *	the ELF header at the start of an ELF file
 *@argc: argument count
 *@argv: array of pointer to the arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{

	Elf64_Ehdr header;
	int file_des;
	const char *filename = argv[1];

	if (argc != 2)
	{
		print_error("Usage: ./rdelf <filename>");
		exit(98);
	}

	file_des = op_file(filename);

	rd_header(file_des, &header);

	print_class(&header);
	print_magic(&header);
	print_data(&header);
	print_version(&header);
	print_os0abi(&header);


	close(file_des);
	return (0);
}
