#include <stdio.h>

int main(void) {
	// your code goes here
		int a[1000],c[1000],b,i,j;
	int k=0,n,m;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		b=1;
		for(j=2;j<=i-1;j++)
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
	for(j=0;j<k;j++)
	printf("%d\t",a[j]);
	printf("\n");
	b=0;
	for(i=0;i<k;i++)
	{
		
			m=((a[i]/10)+(a[i]%10));
			for(j=2;j<m;j++)
			{
			if(m%j==0)
			break;
			}
			if(m==j)
			{
				c[b]=m;
				b++;
			}
	}
	for(j=0;j<b;j++)
	{
		for(i=j+1;i<b;i++)
		{
			if(c[j]==c[i])
			{
				for(k=i;k<b;k++)
				c[k]=c[k+1];
				b=b-1;
			}
		}
	}
	printf("\nrepeated prime no:");
	for(j=0;j<b;j++)
	printf("%d\t",c[j]);
	return 0;
}
