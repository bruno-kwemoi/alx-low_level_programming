#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_wrote;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	n_read = read(fd, buf, letters);
	n_wrote = write(1, buf, n_read);
	if (n_wrote == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	return (n_read);
}
