#include <stdio.h>

int main(void) {
	// your code goes here
	char a[]="HELLO";
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		printf("%c",a[j]);
		printf("\n");
	}
	return 0;
}
