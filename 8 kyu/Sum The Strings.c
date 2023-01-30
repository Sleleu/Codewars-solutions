/*
				DESCRIPTION
Create a function that takes 2 integers in form of a string as an input,
and outputs the sum (also as a string):

Example: (Input1, Input2 -->Output)

"4",  "5" --> "9"
"34", "5" --> "39"
"", "" --> "0"
"2", "" --> "2"
"-5", "3" --> "-2"
Notes:

If either input is an empty string, consider it as zero.

Inputs and the expected output will never exceed the signed 32-bit integer limit (2^31 - 1)
*/

#include <string.h>
#include <stdlib.h>

char *sum_strings (char *sum, const char *a, const char *b)
{
  int res = (atoi(a) + atoi(b));
  int size = 0;

  if (res == 0)
    return (strcpy(sum, "0"));
  else if (res < 0)
  {
    res *= -1;
    sum[size++] = '-';
  }
  int tmp = res;
  while (tmp > 0)
  {
    tmp /= 10;
    size++;
  }
  sum[size--] = '\0';
  while (res > 0)
  {
    sum[size--] = (res % 10) + 48;
    res /= 10;
  }
	return (sum);
}