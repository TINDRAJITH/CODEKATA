#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	char a[100],n;
	scanf("%s",&a);
	n=strlen(a);
	 for(int i = 0;i<n;i++)
	    {
	    	for(int j =i+1;j<n;j++)
	    	{
	    		if(a[i]==a[j])
	    		{
	    			for(int k=j;k<n;k++)
	    			a[k]=a[k+1];
	    			n=n-1;
	    		}
	    	}
	    }
	    for(int i = 0;i<n;i++)
	    printf("%c",a[i]);
	return 0;
}
