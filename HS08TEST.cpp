#include<stdio.h>
 
int main()
{
    int trans;
    float bal,total,charge;
    charge = 0.50;
 
    scanf("%d %f",&trans,&bal);
    if(trans%5 == 0)
    {
        if(trans<(int)bal)
        {
            total = bal-(trans+charge);
            printf("%.2f",total);
        }
        else
            printf("%.2f",bal);
    }
    else
        printf("%.2f",bal);
 
    return 0;
}