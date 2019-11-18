#include<stdio.h>
#include<stdlib.h>
void verify(int arr[],int n)
{	
	int size,i;
	int a[] = {2,5,5,7,10,30,40,90};
	size = sizeof(a) / sizeof(a[0]);
	if(n==size)
	{

	
		for(i=0;i<size;i++)
		{	
			if(arr[i]==a[i])
			continue;
			
			else{
				printf("FAIL");
				exit(0);
				}
		}
	

	}

	else
		{
			printf("\nSize Differs\n");
			exit(0);
		}


	printf("\nSUCCESS\n");

}
