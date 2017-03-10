#include <stdio.h>
int main(void) {
	// your code goes here
	int i;
	long int a,b,c=0;
	scanf("%ld",&a);
	b=a;
	while(b)
	{
		i=b%10;
		c=c*10+i;
		b=b/10;
	}
	if(a==c)
	printf("palindrome");
	else 
	printf("not");
	return 0;
}
