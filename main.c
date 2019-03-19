#include<stdio.h>
#include"sim.c"

int main(int argc,char *argv[])
{
	int from,to,interval;
	//call sim from sim.c
	//third argument iteratoins
	//second argument intervals
	//first argument starting interval
	if(argc<3)
	{
			printf("Algorithm Simulator Usage : a.out {starting interval} {end interval} {number of iterations}\n");
			return 0;
	}
	 from = atoi(argv[1]);
	 to = atoi(argv[2]);
	 interval =  atoi(argv[3]);
	 printf("%d\n",to/interval );
	printf("Given Arguments: From : %d To : %d Interval : %d \n",from,to,interval);
	printf("Running Algorithm Simulator...\n" );
	//call sim from sim.c
	AlgSimC(from,to,interval);// starting interval, interval , number of iteratoins
	return 0;
}
