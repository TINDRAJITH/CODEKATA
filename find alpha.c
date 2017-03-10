#include <stdio.h>

int main(void) {
	// your code goes here
	char a;
	scanf("%c",&a);
	if((('A'<=a)&&(a<='Z'))||(('a'<=a)&&(a<='z')))
	printf("alphabet");
	else
	printf("not");
	return 0;
}
