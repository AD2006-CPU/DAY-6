#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER n=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	printf("%d*%d=%d\n",i,n,n*i);
	}
	return 0;
}
