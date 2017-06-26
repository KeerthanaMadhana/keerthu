#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("\nEnter the number");
	scanf("%d",&num);
	for(int i=(num-1);i>=0;i--)
	no+=i;
	printf("\n%d",num);
	return 0;
}
