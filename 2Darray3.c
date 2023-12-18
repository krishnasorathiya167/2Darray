#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter Row Size = ");
	scanf("%d",&r);
	
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int i , j, n,a[r][c];
	
	printf("Enter Value OF element = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix Of = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	int len, ave, sum = 0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum = sum + a[i][j];
		}
	}
	
	len = sizeof(a)/sizeof(n);
	printf("\n Sum OF Array = %d",sum);
	
	printf("\n Average Of Sum = %d",sum/len);

	
	
}