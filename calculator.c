#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("enter 1 for addition\n");
	printf("enter 2 for substraction\n");
	printf("enter 3 for multiplication\n");
	printf("enter 4 for division\n");
	printf("enter your choice\n");
	scanf("%d",&c);
	
	if(c==1)
	printf("addition is %d", a+b);
	else if(c==2)
	printf("substraction is %d",a-b);
	else if(c==3)
	printf("multiplication is %d",a*b);
	else if(c==4)
	printf("division is %d",a/b);
	else
	printf("you have entered the wrong choice\n");
	
}
