#include <stdio.h>
int main()
{
  int n,count=0;
  printf("Enter the integer: ");
  scanf("%d", &n);
  while(n!=0)
  {
      n/=10;      
      count+=1;
  }
  printf("Number of digits is: %d",count);
return 0;
}
