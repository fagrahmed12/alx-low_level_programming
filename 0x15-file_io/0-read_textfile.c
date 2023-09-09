#include "main.h"

/**
 * read_textfile : reads text file, prints it to the POSIX std-output.
 * @filename: to open the file.
 * @letters: number of letters it should read and print.
 * Return: number of letters it could read and print, or 0 if:
 * - filename  NULL.
 * - file can not be opened or read.
 * - write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des = -1;
	ssize_t output = 0;
	char *buffer;

	if (!filename)
		return (0);

	file_des = open(filename, O_RDONLY);
	if (file_des < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_des);
		return (0);
	}

	output = read(file_des, buffer, letters);
	if (output < 0)
	{
		free(buffer);
		close(file_de);
		return (0);
	}

	output = write(STDOUT_FILENO, buffer, output);
	free(buffer);
	close(file_des);
	if (output < 0)
		return (0);
	return (output);
}
