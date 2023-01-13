//find if a given nunmber is divisible by 3 & 5both or not using UDF.

#include<stdio.h>
void div(int a)
{
	int div;
	if(a%3==0||a%5==0)
	{
		printf("value is divisible");
	}
	else
	{
	printf("value is not divisible");
	}
	
}

main()
{
	int a;
	printf("enter number:");
	scanf("%d",&a);
	div(a);
	
}
