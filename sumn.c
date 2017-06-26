#include <stdio.h>
int main()
{
int n, sum = 0, c, val;
scanf("%d", &n);
printf("Enter %d integers\n",n);
for (c = 1; c <= n; c++)
{
scanf("%d", &val);
sum = sum + val;
}
printf("the sum of entered integers = %d\n",sum);
return 0;
