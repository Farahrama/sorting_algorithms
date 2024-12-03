#include "sort.h"
/**
 * bubble_sort - sorts an array of integers using Bubble sort algorithm
 *
 * @array: array of elements
 *
 */
void bubble_sort(int *array, size_t size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}