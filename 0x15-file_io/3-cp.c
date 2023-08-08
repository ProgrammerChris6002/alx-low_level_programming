#include "main.h"

/**
 * print_usage_error - Prints usage error message
 * @program_name: Name of the program
 */
void print_usage_error(const char *program_name)
{
    dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
}

/**
 * print_read_error - Prints read error message
 * @filename: Name of the file
 */
void print_read_error(const char *filename)
{
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}

/**
 * print_write_error - Prints write error message
 * @filename: Name of the file
 */
void print_write_error(const char *filename)
{
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}

/**
 * print_close_error - Prints close error message
 * @fd: File descriptor
 */
void print_close_error(int fd)
{
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
    int fd_from, fd_to, bytes_read, bytes_written;
    char buffer[1024];

    if (argc != 3)
    {
        print_usage_error(argv[0]);
        return (EXIT_FAILURE);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        print_read_error(argv[1]);
        return (EXIT_FAILURE);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1)
    {
        print_write_error(argv[2]);
        close(fd_from);
        return (EXIT_FAILURE);
    }

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            print_write_error(argv[2]);
            close(fd_from);
            close(fd_to);
            return (EXIT_FAILURE);
        }
    }

    if (bytes_read == -1)
    {
        print_read_error(argv[1]);
        close(fd_from);
        close(fd_to);
        return (EXIT_FAILURE);
    }

    if (close(fd_from) == -1)
    {
        print_close_error(fd_from);
        close(fd_to);
        return (EXIT_FAILURE);
    }

    if (close(fd_to) == -1)
    {
        print_close_error(fd_to);
        return (EXIT_FAILURE);
    }

    return (EXIT_SUCCESS);
}
