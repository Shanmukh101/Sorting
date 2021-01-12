void insertion(int arr[],int n)
{
	int i=0,j=0,temp=0,p=0;
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
