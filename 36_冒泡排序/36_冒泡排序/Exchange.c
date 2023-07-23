#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Exchange(int arr[], int n)
{
	int mid = 0;
	mid = arr[n];
	arr[n] = arr[n - 1];
	arr[n - 1] = mid;
}