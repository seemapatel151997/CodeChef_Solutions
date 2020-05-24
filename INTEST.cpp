#include<stdio.h>
 
int main()
{
    int n,k,ti,cnt=0;
    scanf("%d %d",&n,&k);
    while(n--)
    {
        scanf("%d",&ti);
        if(ti%k == 0)
            cnt++;
    }
    printf("%d\n",cnt);
	return 0;
}
 
