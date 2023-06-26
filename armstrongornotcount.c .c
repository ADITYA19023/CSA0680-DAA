#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	int count=0;
	printf("Enter the number:");
	count++;
	scanf("%d",&n);
	count++;
	for(temp=n;n!=l;n=n/10)
	{
		count++;
		count++;
		count++;
		r=n%10;
		sum=sum+(r*r*r);
		count++;
	}
	count++;
	if(sum==temp)
	{
		printf("The entered number is ARMSTRONG!\n");
		count++;
	}
	else
	{
		printf("The entered number is NOT ARMSTRONG!\n");
		count++;
	}
	count++;
	printf("Time Complexity is:%d\n",count);
	count++;
	return 0;
}
