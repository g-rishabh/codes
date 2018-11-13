#include<stdio.h>
int main()
{
	int i,n,k,f;
	scanf("%d",&n);
	int d=(2*n)-1;
	for(i=0;i<d;i++)
	{
		if(n-i>0)
		{
			f=n;
			for(f=n;f>(n-i);f--)
			{
				printf("%2d ",f);
			}
			for(k=0;k<((2*f)-1);k++)
				printf("%2d ",f);
			for(k=f+1;k<=n;k++)
				printf("%2d ",k);
		}
		else
		{
			f=n;
			for(f=n;f>(i-n+2);f--)
				printf("%2d ",f);
			for(k=0;k<((2*f)-1);k++)
				printf("%2d ",f);
			for(k=f+1;k<=n;k++)
				printf("%2d ",k);
		}
		
		printf("\n");
	}
	return 0;
}
			
