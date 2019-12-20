#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0&&n%100!=0)
	printf("it is leap");
	else
	printf("it is not");
	return 0;
}
