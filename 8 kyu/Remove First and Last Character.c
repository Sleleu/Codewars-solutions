/*
                    DESCRIPTION

It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string.
You're given one parameter, the original string.
You don't have to worry with strings with less than two characters.
*/

char* remove_char(char* dst, const char* src)
{
  int i;
  
  src++;
  for (i = 0; src[i + 1]; i++)
      dst[i] = src[i];
    dst[i] = '\0';
  return (dst);
}