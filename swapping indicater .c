#include<stdio.h>

swap(int *n1,int *n2)
{
	int n;
	n=*n1;
	*n1=*n2;
	*n2=n;
	
	printf("A=%d \nB=%d",*n1,*n2);
	
}
main()
{
	int a,b;
	
	printf("value of A=");
	scanf("%d",&a);
	
	
	printf("value of B=");
	scanf("%d",&b);
	
	swap(&a,&b);
}
