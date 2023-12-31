#include "main.h"

/**
  * read_textfile - Starts to read a text file and prints it
  * @filename: Specifies the name of the file to read
  * @letters: Specifies the number of characters to print
  * Return: 0 on success (Ends)
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file, total, read_status;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1)
		return (0);
	total = 0;
	read_status = 1;
	while (letters > BUFSIZE && read_status != 0)
	{
		read_status = read(txt_file, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, read_status);
		total += read_status;
		letters -= BUFSIZE;
	}
	read_status = read(txt_file, buffer, letters);
	write(STDOUT_FILENO, buffer, read_status);
	total += read_status;
	close(txt_file);
	return (total);
}
