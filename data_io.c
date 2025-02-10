#include <stdio.h>
#include "data_io.h"

void input (double *data, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &data[i]);
	}
}

void output(double *data, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		printf("%lf ", data[i]);
	}
	printf("%lf", data[n - 1]);
}
