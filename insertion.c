#include<stdio.h>

int is(int arr[],int n)
{
   int i,j,temp=0;
   for(i=1;i<n;i++)
   {
	   temp=arr[i];
	   j=i-1;
	   while((temp<arr[j])&&(j>=0))
		{
			arr[j+1]=arr[j];
			j--;
		}
		
	   arr[j+1]=temp;
   }

}


void main()
{
	        int arr[10],n=10,i;
      printf("enter elements:\n");
      for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
     is(arr,n);//third push is ready
     
      printf("after sorting:\n");
           for(i=0;i<n;i++)
                printf("%d\t",arr[i]);
}
