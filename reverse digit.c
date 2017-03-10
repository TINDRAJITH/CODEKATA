#include <stdio.h>
int main(void) {
	// your code goes here
	int a,b,i,c=0;
	scanf("%d",&a);
	b=a;
	while(b)
	{
		i=b%10;
		c=c*10+i;
		b/=10;
	}
	printf("%d",c);
	return 0;
}
