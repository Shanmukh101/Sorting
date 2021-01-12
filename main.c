#include<stdio.h>
#include<stdlib.h>
#include"header.h"


void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
void main(int argc,char *argv[])
{
	int n=argc-1,i=0;
	int arr[n],arr_b[n],arr_m[n],arr_q[n],arr_s[n],arr_i[n];
	
	for(i=1;i<n+1;i++)
	{
	        arr[i-1]=atoi(argv[i]);
		arr_b[i-1]=atoi(argv[i]);
		arr_m[i-1]=atoi(argv[i]);
		arr_q[i-1]=atoi(argv[i]);
		arr_s[i-1]=atoi(argv[i]);
                arr_i[i-1]=atoi(argv[i]);
            }    
          
	printf("unsorted array is");
	display(arr,n);
	printf("\n");
		
	bubble(arr_b,n);		
	printf("sorted array is ");
	display(arr_b,n);
        printf("\n");	
        
        selection(arr_s,n);
        printf("sorted array is");
        display(arr_s,n);
        printf("\n");
        
        insertion(arr_i,n);
        printf("sorted array is ");
        display(arr_i,n);
        printf("\n");
	
	quick(arr_q,0,n-1);
        printf("sorted array is ");
        display(arr_q,n);
        printf("\n");
        
        merge_sort(arr_m,0,n-1);
        printf("sorted array is ");
        display(arr_m,n);
        printf("\n");
	
}

