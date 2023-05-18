#include<stdio.h>

	int stringlength(char* str)
	{
		int length = 0l;
		
		while (*str != '0')
		{
			length++;
			str++;
		}
		return length;
	}
main()
{
   char str[100];

   printf("enter the string=");
   scanf("%s",str);
   
   int length=stringlength(str);
   
    printf("length of the string =%d\n",length);
}
