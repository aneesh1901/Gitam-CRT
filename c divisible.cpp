#include<stdio.h>
int main()
{
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	if(n%5==0&&n%11==0)
	printf("it is divisible");
	else
	printf("it is not divisible");
	return 0;
}
