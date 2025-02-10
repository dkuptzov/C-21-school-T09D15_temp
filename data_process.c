#include "data_process.h"
#include <math.h>
#include <stdio.h>
#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"

int normalization(double *data, int n)
{
    int result = 1;
    double max_value = max(data, n);
    double min_value = min(data, n);
    double size = max_value - min_value;

    if(fabs(size) < EPS)
    {
	printf("TUT");
        for (int i = 0; i < n; i++)
        {
            data[i] = data[i] / size - min_value / size;
        }
    }
    else
    {
        result = 0;
    }
//    printf("%d***", result);
    return result;
}
