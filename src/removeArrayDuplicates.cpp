/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void * removeArrayDuplicates(int *Arr, int len)
{
	int *a, j = 0,i;
	if (Arr == NULL)
		return NULL;
	if (len>0)
	{
		a = (int*)calloc(10, sizeof(int));
		for (i = 0; i<len; i++)
		{
			a[Arr[i]]++;
			if (a[Arr[i]] == 1)
			{
				Arr[j] = Arr[i];
				j++;
			}
		}
		return Arr;
	}
	else if (len <= 0)
		return NULL;
}
