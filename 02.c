#include<stdio.h>
int main()
{
	int out;
	int a, b;
	
	out = printf("Hello C world");
	printf("%d\n",out);
	
	printf("두 개의 정수 입력: ");
	scanf("%d,%d", &a,&b);
	printf("%d %d", a,b); 
	
	return 0;
}
