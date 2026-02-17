
#include<stdio.h>
void main()
{
	int num,revnum=0,rem,rem2;
	printf("Enter the number\n");
	scanf("%d",&num);
     while(num>0)
	{
		rem=num%10;
		revnum=revnum*10+rem;
		num=num/10;
	}
	while(revnum>0)
	{
		rem2=revnum%10;
		printf("%d\n",rem2);
		revnum=revnum/10;
	}
}
