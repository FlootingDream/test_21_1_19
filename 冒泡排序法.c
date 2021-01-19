#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) 
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int arr[3] = { a,b,c };
	int i, j, tmp;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	return 0;
}
