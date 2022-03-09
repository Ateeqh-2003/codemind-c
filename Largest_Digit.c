#include<stdio.h>
int main()
{
    int N,remainder,Largest=0;
    scanf("%d",&N);
    while(N>0)
    {
        remainder=N%10;
        if(Largest<remainder)
        {
            Largest=remainder;
        }
        N=N/10;
    }
    printf("%d",Largest);
    return 0;
}