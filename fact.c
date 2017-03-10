#include <stdio.h>
int main(void) {
	// your code goes here
	long int a,b=1,i;
	scanf("%ld",&a);
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	printf("%ld",b);
	return 0;
}
