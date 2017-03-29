#include <stdio.h>
#define R 4
#define C 4
void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            printf("%d ", a[k][i]);
        }
        k++;
        for (i = k; i < m; ++i)
        {
            printf("%d ", a[i][n-1]);
        }
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            m--;
        }
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;    
        }        
    }
}

int main(void) {
	// your code goes here
	int a[R][C];
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<R;i++)
	{
	for(int j=0;j<C;j++)
	printf("%d",a[i][j]);
	printf("\n");
	}
	spiralPrint(R, C, a);
	return 0;
}
