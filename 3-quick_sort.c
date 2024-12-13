#include "sort.h"
#include <stdio.h>
/**
 * lomuto_partition - Partitions the array using Lomuto scheme.
 * @array: The array to be partitioned.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array (for printing).
 *
 * Return: The index of the pivot after partitioning.
 */
int Lomuto(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int temp;
int j;
for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
temp = array[i];
array[j] = array[i];
array[j] = temp;
print_array(array, size);
}
}
}
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size);
return(i+1);
}
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int pivot;
if (low < high)
{
pivot = Lomuto(array, low, high, size);
quick_sort_recursive(array, low, pivot - 1, size);
quick_sort_recursive(array, pivot + 1, high, size);
}
}
/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_recursive(array, 0, size - 1, size);
}

