/*
                    DESCRIPTION

Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
*/

#include <stddef.h>

size_t get_count(const char *s)
{
  size_t  i = 0;
  size_t  count = 0;
  
  while (s[i])
    {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'  || s[i] == 'u')
        count++;
      i++;
    }
    return (count);
}