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
	
	printf("\n Sum OF All Column Element = \n");
	
	
		for(j=0;j<c;j++)
	{
	    int sum = 0;
	    for(i=0;i<r;i++)
		{
			sum = sum + a[i][j];	
		}
		printf("Column - [%d] = %d\n",j,sum);	
	}		
}