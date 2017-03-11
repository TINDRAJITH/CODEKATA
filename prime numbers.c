#include <stdio.h>

int main(void) {
	// your code goes here
	int a[1000],b,i,j;
	int k=0,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		b=1;
		for(j=2;j<=i/2;j++)
		if(i%j==0)
		{
			b=0;
			break;
		}
		if(b==1)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=0;i<=n;i++)
	for(j=i+1;j<=n;j++)
	if((a[i]+a[j])==n)
	printf("%d&%d",a[i],a[j]);
	return 0;
}
