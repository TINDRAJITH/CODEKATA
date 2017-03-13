#include <stdio.h>
int least(int a, int n) {
int c,d;
  if (n <= 0) {
    return num;  // Success
  }
  if (a == 0) {
    return 10;  // Fail
  }
   c = least(a/10, n);
   c=c*10 + a%10;
   d = least(a/10, n-1);
  if(c < d)
    return c ;
    else
    return d;
}

int main(void)
 {
	int a,n;
	scanf("%d",&a);
	scanf("%d",&n);
  printf("%d\n", least(a, n));
 return 0;
}
