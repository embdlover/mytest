#include<stdio.h>
int main()
{
	int i,j,temp,n;
	int arr[] ={10,30,60,20,40,5};
	n=sizeof(arr)/sizeof(arr[0]);
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
	printf("%d",arr[i]);

}
