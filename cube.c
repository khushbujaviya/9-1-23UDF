//1 find cube of given no using UDF.

#include<stdio.h>
int cube(int a)
{
	int cube;
	cube=a*a*a;
	return cube;
}

main()
{
	int a;
	printf("enter number:");
	scanf("%d",&a);
	cube(a);
	printf("cube=%d",cube(a));
}
