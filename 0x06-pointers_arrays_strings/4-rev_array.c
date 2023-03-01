#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n/2; i++)
	{
		int j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}	
