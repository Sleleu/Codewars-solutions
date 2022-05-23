/*
					DESCRIPTION

Check to see if a string has the same amount of 'x's and 'o's.
The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false
*/

#include <stdbool.h>

bool xo (const char* str)
{
  int i;
  int x = 0;
  int o = 0;
  
  for (i = 0; str[i]; i++)
    if (str[i] == 'x' || str[i] == 'X')
      x++;
  for (i = 0; str[i]; i++)
    if (str[i] == 'o' || str[i] == 'O')
      o++; 
  if (x == o)
    return (true);
  return (false);
}