#include <stdio.h>

int main(void) {
	int temp,c=0,N;
	scanf("%d",&N);
while(N!=0)
{
	c++;
	 N=N/10;
}
printf("%d",c);
	return 0;
}
