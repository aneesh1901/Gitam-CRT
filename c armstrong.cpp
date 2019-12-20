#include<stdio.h>
int main()
{
	int n,r,sum=0,num;
	printf("enter the num");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(num==sum)
	printf("%d is armstrong",num);
	else
	printf("%d is not",num);
	return 0;
}
