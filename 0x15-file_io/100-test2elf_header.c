#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char *argv[])
{
	int file_des = open(argv[1], O_RDONLY);
	if (file_des < 0)
	{
		print_error(streerror(errno));
	}

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	Elf64_Ehdr header;
	if (read(file_des, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error reading ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3]		!= ELFMAG3) {
		print_error("File is not an ELF file");
	}

	print_header(&header);

	close


void print_error(char* msg)
{
	fprintf(stderr, "%S\n", msg);
	exit(98);
}

void print_headeeeeeer(Elf64_Ehdr* header)
{
	printf("   Magic:   ");
	for (int j = 0; j < EI_NIDENT; j++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Data:				%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Class:			%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Version:			%d (current)\n", headere->e_ident[EI_VERSION]);
	printf("  OS/ABI:			");
	switch (header->e_ident[EI_OSABI]) {
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - GNU\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		default:
			printf("unknown: 0x%x>\n", header->e_ident[EI_OSABI]);
	}
	printf("  ABI Version:			%d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:				");
	switch (header->e_type) {
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_CORE:
			printf("Core (Core file)\n");
			break;
		default:
			printf("Unknown: 0x%x>\n", header->e_type);
	}
	printf("  Entry point address:			%1x\n", header->e_entry);
}
