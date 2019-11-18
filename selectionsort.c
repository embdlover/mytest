#include<stdio.h>
#include<stdlib.h>
void verify(int arr[],int n);
void selectionsort(int arr[],int size)
	
{
	int i,j,min,temp;

	for(i=0;i<size-1;i++)
		{
			min=i;
				for(j=i+1;j<size;j++)
				{
					if(arr[min]>arr[j])
						{
							min=j;
						}
				}
				
				if(i!=min)
				{
					temp=arr[i];
					arr[i]=arr[min];
					arr[min]=temp;
				}
		}

	for(i=0;i<size;i++)
	printf("%d\t",arr[i]);

	printf("\n");
	printf("Verifying Result....\n");
	verify(arr,size);



}
	
