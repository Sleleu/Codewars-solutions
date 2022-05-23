/*
                    DESCRIPTION

Complete the solution so that the function will break up camel casing, using a space between words.
*/

#include <stddef.h>
#include <stdlib.h>

int   my_strlen(char *camelCase)
  {
    int  i = 0;
    while (camelCase[i])
      i++;
    return (i);
  }

int   maj_number(char *camelCase)
  {
    int i = 0;
    int count = 0;

    while (camelCase[i])
      {
        if (camelCase[i] >= 'A' && camelCase[i] <= 'Z')
          count++;
        i++;
      }
    return (i);
  }
char* solution(const char *camelCase) 
{
  char  *tab;
  int   i = 0;
  int   j = 0;
  
  tab = malloc(sizeof(char) * my_strlen(camelCase) + (maj_number(camelCase) + 1));
      if (tab == NULL)
        return (NULL);
  while (camelCase[i])
    {
      if (camelCase[i] >= 'A' && camelCase[i] <= 'Z')
        {
          tab[j] = ' ';
          j++;
        }
        tab[j] = camelCase[i];
        i++;
        j++;
    }
  tab[j] = '\0';
  return (tab);
}