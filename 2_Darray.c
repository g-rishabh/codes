#include<stdio.h>
int main()
{
	int m,n,,m1,n1,i,j;
	printf("Enter the size of a first matrix its row and column size\n");
	scanf("%d %d",&m,&n);
	printf("Enter the size of a second matrix its row and column size\n");
	scanf("%d %d",&m1,&n1);
	printf("enter the matrix of size %d X %d\n",m,n);
	int m1[m][n],m2[m1][n1];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&m1[i][j]);
	}
	printf("enter the matrix of size %d X %d\n",m1,n1);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
			scanf("%d",&m2[i][j]);
	}
	printf("Entered array is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",m1[i][j]);
		printf("\n");
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
			printf("%d ",m2[i][j]);
		printf("\n");
	}
	
	printf("Transposed array is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			m2[i][j]=m1[j][i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",m2[i][j]);
		printf("\n");
	}
	
	return 0;
}
