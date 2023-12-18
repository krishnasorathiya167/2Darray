#include<stdio.h>

main()
{
	int r,c,n;
	
	printf("Enter Row Size = ");
	scanf("%d",&r);
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int i,j,a[r][c];
	
	printf("Enter Value OF Element = \n");
	
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
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	int len;
	
	len = sizeof(a)/sizeof(n);
	
	printf("Length Of = %d",len);
	
	
}