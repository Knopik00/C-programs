#include "len_constant.h"

int len_constant(double * arr, int len)
{
	int i = 0, sum_len = 0;
	while (i < len)
	{
    	int j = i;
    	while ((j < len) && (fabs(arr[j] - arr[i]) < eps)) j++;
    	if (j - i >= 2) sum_len += (j-i);
    	i = j;
	}
	return sum_len;
}
