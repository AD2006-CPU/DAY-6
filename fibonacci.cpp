#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,t3;
printf("ENTER THE NUMBER OF TERMS");
scanf("%d",&n);
printf("FIBONACCI SERIES:");
for(i=1;i<=n;++i)
{
	printf("%d",t1);
	t3=t1+t2;
	t1=t2;
	t2=t3;
}
return 0;
}
