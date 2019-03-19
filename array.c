/* Header file to Print array
 * to print Both 1d/2d Arrays
 * Date 16/03/19
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define Number 1000
static int arr[Number];
int * PopRandArray(int number)//populate array with random numbers
{
    int temp;
    //arr[number];
    for(temp = 0;temp<number;temp++)
    {
      arr[temp] = rand();
    }
    return arr;
}
int * PopArray(int from,int to,int interval)//populate array
{
    int temp,temp1;
    //arr[to/interval];
    for(temp = from,temp1 = 0;temp<=to,temp1<(to/interval);temp+=interval,temp1++)
    {
      arr[temp1] = temp;
    }
    return arr;
}
//function to print array of dimension 1D
void PrintArrayInt(int *a,int n)
{
    int i;//temporary variable to for For loop
    for(i=0;i<n;i++) printf("%d\t",a[i]);
    printf("\n");
    return;
}
void PrintArrayFloat(float *a,int n)
{
    int i;//temporary variable to for For loop
    for(i=0;i<n;i++) printf("%f\t",a[i]);
    printf("\n");
    return;
}
void PrintArray2(int a[][10000],int n)
{
    int i,j;//temporary variable to for For loop
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return;
}
int ArraySizeInt(int *a)
{
    static int size;
    int *p[]= a;
    size = (int)(sizeof(a)/sizeof(a[0]));
    return size;
}
int ArraySizeFloat(float *a)
{
    static int size;
    size = (float)(sizeof(a)/sizeof(a[0]));
    return size;
}
