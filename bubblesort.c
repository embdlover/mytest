#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = {50,70,90,10,40,30,10,5};
	int i,j,n,temp;

	n = sizeof(arr)/sizeof(arr[0]);
//	n= *(&arr+1)-arr;
	printf("%d\n",n);
	getchar();

	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++)
	{
	if(arr[i] > arr[j]){
		temp   = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	}
	}
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	
}
			
