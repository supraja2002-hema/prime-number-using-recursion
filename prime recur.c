#include<stdio.h>
int prime(int n,int i)
{
	if(i==1)
	return 1;
	else
	{
		if(n%i==0)
		return 0;
		else
		return prime(n,i-1);
	}
}
int main()
{
	int p,n;
	printf("Enter a number");
	scanf("%d",&n);
	p=prime(n,n/2);
	if(p==1)
	printf("It is a prime number");
	else
	printf("It is a composite number");
	return 0;
}
