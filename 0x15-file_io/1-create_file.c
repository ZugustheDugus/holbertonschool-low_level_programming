#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: name of file to write to
 * @text_content: text to write to file
 * Return: 0 or text that is written to file
 */

int create_file(const char *filename, char *text_content)
{
int fw, writ, len;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

writ = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

if (writ == -1)
return (-1);

len = _strlen(text_content);

fw = write(writ, text_content, len);

if (writ == -1 || fw == -1)
return (-1);

close(writ);
return (1);
}
