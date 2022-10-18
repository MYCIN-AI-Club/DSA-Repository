#include <stdio.h>

int main(void) {
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n],f=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                f+=1;
            }
        }
    }
    int k=0;
    int c[3][f];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                c[0][k]=i;
                c[1][k]=j;
                c[2][k]=a[i][j];
                k++;
            }
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<f;j++)
        {
            printf("%d",c[i][j]);
        }printf("\n");
    }
	// your code goes here
	return 0;
}