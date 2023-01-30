/*
				DESCRIPTION


Write an algorithm that takes an array and moves all of the zeros
to the end, preserving the order of the other elements.

move_zeros(10, int [] {1, 2, 0, 1, 0, 1, 0, 3, 0, 1}); // -> int [] {1, 2, 1, 1, 3, 1, 0, 0, 0, 0}
*/

#include <stddef.h>

void ft_swap(int *a, int *b)
{
  int tmp;
    
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void move_zeros(size_t len, int arr[len])
{
    for (size_t i = 0, j = i + 1; j < len; i++, j = i + 1)
      if (arr[i] == 0)
      {
        for (;j < len - 1 && arr[j] == 0; j++);
        ft_swap(&arr[i], &arr[j]);
      }
}