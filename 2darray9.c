#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Enter Row Size = ");
	scanf("%d",&r);
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int a[r][c] , sum = 0 ,sumc=0;
	
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
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}
	}


    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==((c+1)-2))
			{
				sumc = sumc + a[i][j];
			}
		}
	}
	printf("\n Sum Of cross Diagonal Element = %d",sum+sumc
	);

}