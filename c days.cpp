#include<stdio.h>
int main()
{
	int a;
	printf("enter number a");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("mon");
		break;
		case 2: printf("tue");
		break;
		case 3: printf("wed");
		break;
		case 4: printf("thurs");
	    break;
		case 5: printf("fri");
	    break;
		case 6:printf("sat");
	    break;
		case 7: printf("sun");
		break;
        default:			
	}
	return 0;
}
