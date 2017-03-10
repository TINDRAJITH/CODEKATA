#include <stdio.h>
int main(void) {
	// your code goes here
	long int a,b=1,i;
	scanf("%ld",&a);
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	if(a!=0)
	printf("%ld",b);
	else
	printf("1");
	return 0;
}
