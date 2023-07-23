#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"my.h"


void Bubble(int arr[], int a, int sz)
{
	int b = a + 1;
	int c = a - 1;
	if (a != 0)
	{
		if (arr[a] > arr[a - 1])
		{
			Exchange(arr, a);
			Bubble(arr, c, sz);
		}
	}
	else
	{
		Bubble(arr, b, sz);
	}
	if (a < sz-1)
	{
		Bubble(arr, b, sz);
	}
}