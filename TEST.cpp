#include<stdio.h>
 
int main()
{
    int a;
    while(true)
    {
        scanf("%d",&a);
        if(a==42)
            break;
        else
            printf("%d\n",a);
    }
    return 0;
}
 
