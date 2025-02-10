#include <stdio.h>
#include <stdlib.h>
#include "data_process.h"
#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"

int main()
{
    double *data;
    int n;
    scanf("%d", &n);
    data = (double *)malloc(n * sizeof(double));
    //Don`t forget to allocate memory !

    input(data, n);

    if (normalization(data, n))
        output(data, n);
    else
        printf("ERROR");  
    free(data);
}
