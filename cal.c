#include<stdio.h>
int sum(int x,int y)
{
	int sum=0;
	sum=x+y;
	return sum;
}

int sub(int x,int y)
{
	int sub;
	sub=x-y;
	return sub;
}

int mul(int x,int y)
{
	int mul=1;
	mul=x*y;
	return mul;
}

int div(int x,int y)
{
	int div;
	div=x/y;
	return div;
}
main()
{
int a,x,y;
printf("1.sum\n");
printf("2.sub\n");
printf("3.mul\n");
printf("4.div\n\n");

printf("enter select number:");
scanf("%d",&a);
printf("\n");

switch (a)
	{
		case 1:
			    printf("enter number of x:");
				scanf("%d",&x);
				printf("enter number of y:");
				scanf("%d",&y);
				sum(x,y);
				printf("sum=%d",sum(x,y));
				break;
		case 2:
				printf("enter number of x:");
				scanf("%d",&x);
				printf("enter number of y:");
				scanf("%d",&y);
				sub(x,y);
				printf("sub=%d",sub(x,y));
				break;
		case 3:
				printf("enter number of x:");
				scanf("%d",&x);
				printf("enter number of y:");
				scanf("%d",&y);
				mul(x,y);
				printf("mul=%d",mul(x,y));
				break;
		case 4:
				printf("enter number of x:");
				scanf("%d",&x);
				printf("enter number of y:");
				scanf("%d",&y);
				div(x,y);
				printf("div=%d",div(x,y));
				break;
		default :
				printf("invalide input");
				break;
	}

}
