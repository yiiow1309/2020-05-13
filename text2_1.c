#include<stdio.h>
#include<string.h>
int main()
{
	char s[] = "swimming";
	char t[5] = "�߱�";
	char v[10] = {'a','b','c','\0','d','e'};
	
	printf("�迭 s�� ũ��� %d �Դϴ�.\n",sizeof(s));
	printf("�迭 t�� ũ��� %d �Դϴ�.\n",sizeof(t));
	printf("�迭 v�� ũ��� %d �Դϴ�.\n",sizeof(v));
	printf("�迭�� ���̴� %d�Դϴ�.\n",strlen(s));
	printf("�迭�� ���̴� %d�Դϴ�.\n",strlen(v));
	
	printf("�迭 v�� ����: %s\n",v);
	
	printf("s : %s\n",s);
	printf("s[2] : %c\n",s[2]);
	printf("t : %s\n",t);
	printf("t : %c%c\n",t[2], t[3]);
		
	return 0;
}
