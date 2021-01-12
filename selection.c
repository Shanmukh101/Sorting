void selection(int arr[],int n)
{
	int i,j,temp,p;
	for(i=0;i<n;i++)
	{
		p=i;
	for(j=i+1;j<n;j++)
	{	if(arr[j]<arr[p])
			p=j;
	}
		temp=arr[p];
		arr[p]=arr[i];
		arr[i]=temp;
	}
}
