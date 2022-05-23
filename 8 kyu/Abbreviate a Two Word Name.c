/*
					DESCRIPTION

Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F
*/

char *get_initials (const char *full_name, char initials[4])
{
  initials[0] = full_name[0] >= 'A' && full_name[0] <= 'Z' ? full_name[0] : full_name[0] - 32;
  initials[1] = '.';
    for (int i = 1; full_name[i - 1] != 32; i++)
  initials[2] = full_name[i + 1] >= 'A' && full_name[i + 1] <= 'Z' ? full_name[i + 1] : full_name[i + 1] - 32;
  initials[3] = '\0';
  return initials;
}