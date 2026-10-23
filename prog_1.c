#include "len_constant.h"
int main(void)
{
	int capacity = 2, len = 0;
	char filename[50];
	double *arr;
	FILE *f;
	double current;
    
    arr = (double *)malloc(capacity*sizeof(double));
    
	printf("Enter filename: ");
    
    scanf("%s", filename);
    
    f = fopen(filename, "r");
    if (f == NULL)
    {
   	 printf("Can't open the file\n");
   	 return -2;
    }

	while (fscanf(f, "%lf", &current) == 1)
    {
   	 len++;
   	 if (len > capacity)
   	 {
   		 capacity *= 2;
   		 arr = (double *)realloc(arr, capacity*sizeof(double));
   	 }    
   	 arr[len - 1] = current;
    }
	printf("Количество элементов в постоянных участках посл-ти: %d", len_constant(arr, len));
	free(arr);
}
