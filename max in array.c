#include <stdio.h>

int main(void) {
	// your code goes here
	int a[1000],b=0,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(b<a[i])
		b=a[i];
	}
	printf("%d",b);
	return 0;
}
