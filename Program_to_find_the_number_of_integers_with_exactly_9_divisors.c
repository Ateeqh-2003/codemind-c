#include<stdio.h>
int main()
{
    int n,i,c=0,k=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            k=k+1;
        }
        c=0;
    }
    printf("
");
    printf("Total=%d",k);
}   