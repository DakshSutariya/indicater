#include<stdio.h>

main()
{
	int a[100]={42,10,9};
	
	int *p=&a[0];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(p+i));
	}
}
