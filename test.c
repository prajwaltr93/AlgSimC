#include<unistd.h>
int * bubblesort(int a[1000],int n)
{
        int i,j,temp;
        for(j=1;j<n;j++)
        {
                for(i=0;i<n-j;i++)
                {
                        if(a[i]>a[j+1])
                        {
                                temp=a[i];
                                a[i]=a[i+1];
                                a[i+1]=temp;
                        }
                }
                //sleep(10);
        }
        return a;
}
