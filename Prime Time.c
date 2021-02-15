#include<stdio.h>
int main()
{
    int i,n,time,user,besttime=0,sum;
    int t[48]={0};
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        scanf("%d %d",&time,&user);
        t[time-1]+=user;
        i++;
    }
    i=0;
    while(i<48)
    {
        if(besttime<t[i])
        {
            besttime=t[i];
            sum=i;
        }
        i++;
    }
    printf("%d %d",sum+1,t[sum]);
    return 0;
}
