#include<stdio.h>
main()
{
	int a[100][100],i,j,n,m,sum=0;
	printf("Enter the value of row=");
	scanf("%d",&n);
	printf("Enter the value of colum=");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);		
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				sum=sum+a[i];
			}
			
		}
	}
	printf("sum of diagonal elements=%d",sum);
	
}
