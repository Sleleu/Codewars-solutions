/*
                    DESCRIPTION

Simple, remove the spaces from the string, then return the resultant string.

For C, you must return a new dynamically allocated string.
*/

#include <stdlib.h>

char *no_space(const char *str_in) {

    int size = 0;
    int i = 0;
    int j = 0;
    char *array;
    
    while (str_in[i])
    {
      if (str_in[i] != 32)
        size++;
      i++;
    }
  array = malloc(sizeof(char) * size + 1);
    if (!array)
      return (NULL);
  i = 0;
  while (str_in[i])
    {
      if (str_in[i] != 32)
        {
          array[j] = str_in[i];
          i++;
          j++;
        }
      else
        i++;
      }
    array[j] = '\0';
    return (array);
    }