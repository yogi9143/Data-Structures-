#include<stdio.h>
int main()
{
	int i,n;
	int a = 0,b = 1;
	int c=a + b;
	printf("enter the no.of terms:");
	scanf("%d",&n);
	printf("fibanooci series :%d, %d,",a,b);
	for(i = 3;i <= n; ++i)
	{
		printf("%d", c);
		a = b;
		b = c;
		c = a+b;
	}
	return 0;
}
