/* Merge Sort */
#include<stdio.h>
//int arr[100];
//(int *)malloc((n+m)*sizeof(int));
//
void merge_sort(int *arr,int *a,int *b,int n1,int n2,int n)
{
	int i=0,j=0,x=0;
	while(n)
	{
		if(a[i]>=b[j])
		{
			arr[x]=b[j];
			x++;
			j++;
		}
		else if(a[i]<b[j])
		{
			arr[x]=a[i];
			i++;
			x++;
		}
		if(i==n1)
		{
			for(;j<n2;j++)
			{
				arr[x]=b[j];
				x++;
			}
			break;
		}
		if(j==n2)
		{
			for(;i<n1;i++)
			{
				arr[x]=a[i];
				x++;
			}
			break;
		}
		n--;
	}
}
void main()
{
	int n1,n2,n;
	scanf("%d%d",&n1,&n2);
	n=n1+n2;
	int a[n1],i,b[n2],arr[n];
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	merge_sort(arr,a,b,n1,n2,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

/*

	a=[2,6,10,15]
	
	b=[1,3,5,12,100,200,300]

*/
