/*
                    DESCRIPTION 

Finish the solution so that it sorts the passed in array of numbers. 
If the function passes in an empty array or null/nil value then it should return an empty array.

For example:

int array[5] = {1, 2, 10, 50, 5};
sort_ascending(5, array); // array is now {1, 2, 5, 10, 50}
sort_ascending(0, NULL); // nothing to do for empty array
*/

#include <stddef.h>

void sort_ascending (size_t length, int array[length])
{
  int i = 0;
  int j = 0;
  int swap = 0;

  while (i < length)
      {
    j = 0;
      while (j < length)
        {
          if (array[i] < array[j])
            {
              swap = array[i];
              array[i] = array[j];
              array[j] = swap;
            }
          j++;
        }
      i++;
    }
}