#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers using binary search.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not present or the array is NULL.
 *
 * Description: This function implements the binary search algorithm to find a value in a sorted array of integers.
 *              It divides the array into halves and compares the middle element with the target value.
 *              If the middle element is equal to the value, it returns the index of the middle element.
 *              If the middle element is greater than the value, it searches the left half of the array.
 *              If the middle element is less than the value, it searches the right half of the array.
 *              The function prints the [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, left, right;

    if (array == NULL)
        return (-1);

    for (left = 0, right = size - 1; right >= left;)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = left + (right - left) / 2;
        if (array[i] == value)
            return (i);
        if (array[i] > value)
            right = i - 1;
        else
            left = i + 1;
    }

    return (-1);
}
