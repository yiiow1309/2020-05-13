#include<stdio.h>
int main()
{
	char str[90];
	int i;
	
	printf("���ڿ� �Է�:");
	scanf("%s",str);
	
	for(i=strlen(str); i >= 0; i--)
	    putchar(str[i]);

 
    return 0;
	
}
