/*
                    DESCRIPTION

ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. 
ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. 
If there are numbers or special characters included in the string, they should be returned as they are.
Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".
*/

#include <stddef.h>
#include <stdlib.h>

int  my_strlen(const char *src)
  {
    int   i = 0;
    while (src[i])
      i++;
    return (i);
  }

char *rot13(const char *src)
{
  char  *dest;
  int   i = 0;
  
  dest = malloc(sizeof(char) * my_strlen(src) + 1);
      if (!dest)
        return (NULL);
  while (src[i])
    {
      if ((src[i] >= 'a' && src[i] <= 'm') || (src[i] >= 'A' && src[i] <= 'M'))
        dest[i] = src[i] + 13;
      else if ((src[i] >= 'n' && src[i] <= 'z') || (src[i] >= 'N' && src[i] <= 'Z'))
        dest[i] = src[i] - 13;
      else
        dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
    return (dest);
}