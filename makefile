#include "max_dev.h"

int main(void)

{
    	FILE *f = fopen("input_data.txt", "r");
	if (f == NULL)
	{
    	printf("File error");
    	return -1;
	}
	else
	{
    	double result = max_dev(f);
    	printf("Наибольшее отклонение : %lf", result);
    	return 0;
	}
}