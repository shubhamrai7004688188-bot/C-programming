#include<stdio.h>
void main()
{
	int x=10;
	int *p=&x;
	*p=20;
	printf("%d",x);
}
