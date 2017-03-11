#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b[100],c,d,k=-1,i,j=0,l;
	scanf("%d",&a);
	c=a;
	while(c)
	{
	d=c%10;
	k=k+1;
	b[k]=d;
	c=c/10;
	}
	for(i=k;i>=0;i--)
	{
		for(l=i;l>=0;l--)
		j=j+b[i];	
	}
	printf("%d",j);
	return 0;
}
