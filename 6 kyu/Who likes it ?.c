/*
				DESCRIPTION

You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items.
We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item.
It must return the display text as shown in the examples:

[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
return must be an allocated string
do not mutate input
Note: For 4 or more names, the number in "and 2 others" simply increases.
*/

#include <stdio.h>

char *likes(size_t n, const char *const names[n]) {
 
  char *str;

  switch (n) {
      case 0: return asprintf(&str, "no one likes this"), str;
      case 1: return asprintf(&str, "%s likes this", names[0]), str;
      case 2: return asprintf(&str, "%s and %s like this", names[0], names[1]), str;
      case 3: return asprintf(&str, "%s, %s and %s like this", names[0], names[1], names[2]), str;
      default: return asprintf(&str, "%s, %s and %d others like this", names[0], names[1], n - 2), str;
  }
}