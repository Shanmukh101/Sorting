#include<stdio.h>

void bs(int arr[],int n)
{
   int i,j,temp;
   for(i=0;i<n;i++)
   {  for(j=0;j<n-i-1;j++)
	{
	    if(arr[j]>arr[j+1])
	    {
		temp=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=temp;
            }
	}
   }
   
}

void main()
{
	int arr[10],n=10,i;
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
	bs(arr,n);
	printf("after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	
}
