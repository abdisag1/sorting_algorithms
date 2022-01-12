#include "sort.h"
#include <stdio.h>
/**
 * partition - finds the partition for the quicksort using the Lomuto scheme
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @hi: highest index of the partition to sort
 * @size: size of the array
 *
 * Return: index of the partition
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
ssize_t start, end;
int temp, pivot;
pivot = array[lo];
start = lo;
end = hi;
while (start < end)
{
while (array[start] <= pivot)
{
start++;
}
while (array[end] > pivot)
{
end--;
}
if (start < end)
{
temp = array[start];
array[start] = array[end];
array[end] = temp;
}
}
temp = array[lo];
array[lo] = array[end];
array[end] = temp;
print_array(array, size);
return (end);
}
/**
 * quicksort - sorts a partition of an array of integers
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @hi: highest index of the partition to sort
 * @size: size of the array
 *
 * Return: void
 */
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size)
{
ssize_t pivot;
if (lo < hi)
{
pivot = partition(array, lo, hi, size);
quicksort(array, lo, pivot - 1, size);
quicksort(array, pivot + 1, hi, size);
}
}
/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort(array, 0, size - 1, size);
}
