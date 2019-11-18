#include<stdio.h>
#include<stdlib.h>
void bubblesort(int arr[],int);
void insertionsort(int arr[],int);
void selectionsort(int arr[],int);
int main()
{	
	int choice,n;

	int arr[] = {10,5,90,40,30,2,5,7};
	n = sizeof(arr)/sizeof(arr[0]);

	while(1)
	{
	
	printf("\nPress 1.bubble sort 2.insertion sort 3.selection sort 0.exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case  1:
			bubblesort(arr,n);
			break;
		
		case 2:
			insertionsort(arr,n);
			break;
		
		case 3:
			selectionsort(arr,n);
			break;
		case 0:
			exit(0);
		
		default:
			printf("invalid choice");
	}	

		


}
}
