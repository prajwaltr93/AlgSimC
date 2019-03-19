#include<stdio.h>
#include"testlogic.c"


//extern int arr[];
int main()
{
	int arr[7] = {100,1,10,50,123,342,1232};
	int *t;
	int q;
	t = logic(arr,7);
	for(q=0;q<7;q++)printf("%d\n",t[q]);
	return 0;
}
