#include <stdio.h>
void printNos(unsigned int n)
{
  if(n > 0)
  {
    printNos(n-1);
    printf("%d",n);
  }
}
int main(void) {
	int a;
	scanf("%d",&a);
  printNos(a);
	return 0;
}
