#include "main.h"

/**
 * error_exit - Prints an error message and exits with a specified code
 * @code: The exit code
 * @format: The format string for the error message
 * @...: Additional arguments for the format
 */

void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, "Error: ");
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);

	exit(code);
}

/**
 * copy_file - Copies the content of one file to another
 * @src_filename: The source filename
 * @dest_filename: The destination filename
 */

void copy_file(const char *src_filename, const char *dest_filename)
{
	int fd_src, fd_dest, bytes_read, bytes_written;
	char buffer[1024];

	fd_src = open(src_filename, O_RDONLY);
	if (fd_src == -1)
		error_exit(98, "Can't read from file %s\n", src_filename);

	fd_dest = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_dest == -1)
	{
		close(fd_src);
		error_exit(99, "Can't write to %s\n", dest_filename);
	}

	while ((bytes_read = read(fd_src, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_src);
			close(fd_dest);
			error_exit(99, "Can't write to %s\n", dest_filename);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_src);
		close(fd_dest);
		error_exit(98, "Can't read from file %s\n", src_filename);
	}

	if (close(fd_src) == -1)
		error_exit(100, "Can't close fd %d\n", fd_src);

	if (close(fd_dest) == -1)
		error_exit(100, "Can't close fd %d\n", fd_dest);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, or the specified error codes on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);

	copy_file(argv[1], argv[2]);

	return (EXIT_SUCCESS);
}

