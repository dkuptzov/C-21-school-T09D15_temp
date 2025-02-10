#include "data_stat.h"

double max(double *data, int n)
{
	double max1 = data[0];
	for (int i = 1; i < n; i++)
	{
		if (data[i] > max1)
		{
			max1 = data[i];
		}
	}
	return max1;
}

double min(double *data, int n)
{
        double min1 = data[0];
        for (int i = 1; i < n; i++)
        {
                if (data[i] < min1)
                {
                        min1 = data[i];
                }
        }
        return min1;
}

double mean(double *data, int n)
{
        double mean1 = 0;
        for (int i = 0; i < n; i++)
        {
		mean1 += data[i];
        }
        return mean1 / n;
}

double variance(double *data, int n)
{
        double variance1 = 0;
        for (int i = 0; i < n; i++)
        {
                variance1 += ((data[i] - mean(data, n)) * (data[i] - mean(data, n))) / n; 
        }
        return variance1;
}
