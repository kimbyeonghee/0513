#include<stdio.h>
int main(int argc, char *argv[])
{
	int out1,out2;
	int a, b;
	
	out1 = printf("Hello C world");
	printf("%d\n",out1);
	 
	out2 = scanf("%d,%d", &a,&b);
	printf("%d,%d",out2);
	printf("scanf �Լ��� �Է¹��� �������� ������ %d�Դϴ�.",out2);
	
	return 0;
}
