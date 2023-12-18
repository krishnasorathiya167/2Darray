#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Enter Row Size = ");
	scanf("%d",&r);
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf ("Enter Value Of Element = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);		
		}
		printf("\n");
	}
	
	printf("Matrix Are = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
					
		}
		printf("\n");
	}
	
	printf("\n Sum OF All Row Element = \n");
	
	
	for(i=0;i<r;i++)
	{
	int sum = 0;
		for(j=0;j<c;j++)
		{
			sum = sum + a[i][j];	
		}
		printf("Row - [%d] = %d\n",i,sum);	
	}		
}