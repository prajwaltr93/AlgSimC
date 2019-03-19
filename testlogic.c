/*
 * test logic for bubble sort, part of testing alg simulator
 * Author - Prajwal T R
 * Date 16/03/19
 *
 */
 #include<unistd.h>


void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void logic(int a[],int n)
{
	//temporay variable for For loop
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++) //remove last elements n-1-i
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}sleep(0.9);
	}
  //return a;

}
