//gcc main.c -o sort
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubblesort.c"
#include "selectionsort.c"
#include "insertionsort.c"

void display(int a[],int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		printf("%3d",a[i]);
	}
    printf("\n");

}
void swap(int*x,int*y)
{
 int t;
  t=*y;
  *y=*x;
  *x=t;
}

int main(int argc, char **argv)
{

int count,N,*a;
 N=argc-1;
 a=(int*) malloc(sizeof(int)*N);

 printf("Argument= %d\n",argc);
    for(count=1;count<argc;count++)
    {
    a[count-1]=atoi(argv[count]);
 }
    if(strcmp(argv[1],"bubble")==0)
        {
        bubblesort(a,N);
    }
    else if(strcmp(argv[1],"selection")==0)
        {
        selectionsort(a,N);
    }
    else if(strcmp(argv[1],"insertion")==0)
    {
        insertionsort(a,N);
    }
  

 for(count=1;count<argc;count++)
    {
    printf("%d ",a[count-1]);
 }
}