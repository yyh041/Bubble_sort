#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "my.h"

int main()
{
	int arr[] = {2,3,1,5,7,8,4,7,41,5,6};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble(arr,i,sz);
	for (i = 0; i <sz; i++)
	{
		printf("%d ", arr[i]);
	};
	return 0;
}