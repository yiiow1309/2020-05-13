#include<stdio.h>
int main()
{
	char a,b;
	
	printf("대문자 입력:");
	scanf("%c",&a);
	printf("대문자를 소문자로 %c\n",a+32); 
	
	printf("소문자 입력:");
	scanf("%c",&b);
	printf("대문자를 소문자로 %c\n",b-32); 
	
	
	return 0;
}
