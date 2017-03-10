#include <stdio.h>
int main(void) {
	// your code goes here
	int a[100],i,n,j,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
				b=1;
				break;
			}
		}
		if(b==1)
		break;
	}
	return 0;
}
