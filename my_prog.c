#include "max_dev.h"

double max_dev(FILE *f)
{
	double max_devin = 0., ave_val = 0., first_n = 0.,cur = 0.,val =0., count_n = 0., min = 0., max = 0.;
	if (fscanf(f, "%lf", &first_n) != 1)
	{
    	printf("File is empty");
    	return 0.;
	}
	count_n += 1;
	val += first_n;
	min = first_n;
	max = first_n;
	while (fscanf(f, "%lf", &cur) == 1)
	{
    	count_n += 1;
    	val += cur;
    	if (cur > max) max = cur;
    	if (cur < min) min = cur;
	}
	ave_val = (double)(val/count_n);
	if (fabs(ave_val - min) > fabs(ave_val - max))
    	return fabs(ave_val - min);
	else
    	return fabs(ave_val - max);
	return max_devin;
}
