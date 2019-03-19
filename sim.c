#include<time.h>
#include<stdlib.h>
#include "array.c"
#include "testlogic.c"

void AlgSimC(int from,int to,int interval)
{
	//Create a static array to prevent time consumed in populating array every time function is called ;
	//PopRandArray is function which deos the above job
	int *arr = PopRandArray(to);
	int temp;
	int tempy;//temporay for loop variable for array for y axis
	float res;//temporay varaible to store time taken for every iteration
	//clock_t struct variables to record time
	clock_t start,end;
	//Create X{Number of elements} Y{Time Taken} array to Plot
	int *x = PopArray(from,to,interval);
	float y[to/interval];// to/interval will give number of iterations
	float *z =y;
	printf("Done Populating Array With random number !\n");
	printf("Starting to Test Algorithm\n");
	//starting for loop
	for(temp=from,tempy=0;temp<=to,tempy<(to/interval);temp+=interval,tempy++)
	{
		printf("Testing testlogic With %d elements.\n",temp);
		start = clock();
		logic(arr,temp);
		end = clock();
		res = (float)(end-start)/CLOCKS_PER_SEC;
		printf("Test %d Complete with Duration of %f\n",tempy+1,res);
		y[tempy]=res;

	}
	printf("Test Complete . Plotting Graph : \n");
	printf("Given Cordinates:\n");
	PrintArrayInt(x,ArraySizeInt(x));//passing array to PrintArray() in array.c
	PrintArrayFloat(z,ArraySizeFloat(z));

}
