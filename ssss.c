#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	char a[1000];
	int i,j=0,n;
	scanf("%s",&a);
	n=strlen(a);
	printf("%d",n);
	for(i=0;i<n;i++)
	{
		j=j+'a[i]';
	}
	printf("%d",j);
	return 0;
}
