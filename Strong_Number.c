#include<stdio.h>
int main()
{
    int n,q,r,i,sum=1,total=0;
    scanf("%d",&n);
    q=n;
    while(q)
    {
        sum=1;
        r=q%10;
        q=q/10;
        for(i=1;i<=r;i++)
        {
            sum=sum*i;
        }
        total=total+sum;
    }
    if(total==n)
    {
        printf("The number %d is a strong number",n);
    }
    else 
    {
        printf("The number %d is not a strong number",n);
    }
}