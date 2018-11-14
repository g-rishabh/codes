#include<stdio.h>
int main()
{
	int l,r,temp,temp2,even=0,odd=0,count=0,check;
	scanf("%d %d",&l,&r);
	for(int i=l;i<=r;i++)
	{
		temp=i;
		odd=0;
		even=0;
		while(temp!=0)
		{
			temp2=temp%10;
			if(temp2%2==0)
				even++;
			else
				odd++;
			temp/=10;
			if(temp==0)
			{
				check=odd-even;
				if(check<=1)
					count++;
			}
			
		}
	}
	printf("%d",count);
	return 0;
}
