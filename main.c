#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<time.h>


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
	time_t start,end;
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
	printf("The time taken is %f seconds",difftime(end,start));
	
	start=time(NULL);	
	bubble(arr_b,n);
	end=time(NULL);		
	printf("sorted array is ");	
	display(arr_b,n);
        printf("\n");
        printf("The time taken is %f seconds",difftime(end,start));	
        
        start=time(NULL);
        selection(arr_s,n);
        end=time(NULL);
        printf("sorted array is");
        display(arr_s,n);        
        printf("\n");
        printf("The time taken is %f seconds",difftime(end,start));
        
        start=time(NULL);
        insertion(arr_i,n);
        end=time(NULL);
        printf("sorted array is ");
        display(arr_i,n);        
        printf("\n");
        printf("The time taken is %f seconds",difftime(end,start));
	
	start=time(NULL);
	quick(arr_q,0,n-1);
	end=time(NULL);
        printf("sorted array is ");
        display(arr_q,n);
        printf("\n");
        printf("The time taken is %f seconds",difftime(end,start));
        
        start=time(NULL);
        merge_sort(arr_m,0,n-1);
        end=time(NULL);
        printf("sorted array is ");
        display(arr_m,n);
        printf("\n");
	printf("The time taken is %f seconds",difftime(end,start));
}

