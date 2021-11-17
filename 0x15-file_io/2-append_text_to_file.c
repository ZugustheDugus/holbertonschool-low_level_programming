#include "main.h"
#include "_strlen.c"

/**
 * append_text_to_file - appends text to a named file
 * @filename: name of the file to append
 * @text_content: text to append (nothing if NULL(
 * Return: Return -1 on failure, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
int ap, fw, len;

if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);

len = _strlen(text_content);

ap = open(filename, O_WRONLY | O_APPEND);

fw = write(ap, text_content, len);

if (ap == -1 || fw == -1)
return (-1);

close(ap);
return (1);
}
