#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void verify(int arr[],int n);
void insertionsort(int arr[],int n)
{
	int i,j,temp;
//	int arr[] ={10,30,60,20,40,5};
//	n=sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<n;i++)
	{
		j=i;
	while(j>0 && arr[j-1] > arr[j] )
	{
		temp = arr[j];
		arr[j] =arr[j-1];
		arr[j-1] =temp;
		j--;
	}
	}
	for( i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\nVerifying result.");
	sleep(2);
	printf("..");
	sleep(1);
	printf(".\n");
	verify(arr,n);



}
