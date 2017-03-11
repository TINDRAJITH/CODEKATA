#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		printf("*");
		printf(" ");
		for(k=i;k<n;k++)
		printf("*");
		printf("\n");
	}
	return 0;
}
