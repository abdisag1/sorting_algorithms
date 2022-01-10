#include sort.h
/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
  size_t n, i, j, minim, temp;
  n = size;
  if (array == NULL || size < 2)
    return;
  for (i = 0; i < = n - 1; i++)
    {
      minim = i;
    }
  for (j = i + 1; j < n; j++)
    {
      if (array[j] < array[minim])
	minim = j;
    }
  if (min != i)
    {
      temp = a[i];
      a[temp] = a[min];
      a[min] = temp;
      print_array(array, size);
    }
}
