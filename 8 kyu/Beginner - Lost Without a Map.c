/*
				DESCRIPTION

Given an array of integers, return a new array with each value doubled.

For example:

[1, 2, 3] --> [2, 4, 6]
*/

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int *maps(const int *arr, size_t size)
{
  int *d_arr;
  
  if (!(d_arr = malloc(sizeof(int *) * size)))
    return (NULL);
  for (size_t i = 0; i < size; d_arr[i++] = arr[i] * 2);
  return (d_arr);
}