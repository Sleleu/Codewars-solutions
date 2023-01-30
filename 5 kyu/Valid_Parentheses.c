/*
                    DESCRIPTION

Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid.
The function should return true if the string is valid, and false if it's invalid.

EXAMPLES

"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true

Constraints
0 <= input.length <= 100

Along with opening (() and closing ()) parenthesis, input may contain any valid ASCII characters. Furthermore, the input string may be empty and/or not contain any parentheses at all.
Do not treat other forms of brackets as parentheses (e.g. [], {}, <>).
*/

#include <stdbool.h>

bool validParentheses(const char *str_in)
{
  int count = 0;

  if (!str_in)
    return false;
  for (int i = 0; str_in[i]; i++)
  {
    if (str_in[i] == '(')
      count += 1;
    else if (str_in[i] == ')')
      count -= 1;
    if (count < 0)
      return false;
  }
  return count == 0 ? true : false;
}