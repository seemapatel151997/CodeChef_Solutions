#include <stdio.h>
#include <math.h>
 
int main()
{
    int m,t,N;
    long long n,s;
    scanf("%d",&t);
    while(t--)
    {
        n=5;
        m=0;
        scanf("%d",&N);
        while(N >= n)
        {
            s = N/n;
            m = m + s;
            n = n*5;
        }
        printf("%d\n",m);
    }
    return 0;
}