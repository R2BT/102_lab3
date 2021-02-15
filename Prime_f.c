#include<stdio.h>
int main()
{
    int x;
    long long num,i;
    scanf("%lld",&num);
    while(num>=0)
    {
        x=1;
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                x=0;
                break;
            }
            i++;
        }
        if(x==1)
        {
            printf("%lld",num);
            break;
        }
        num--;
    }
    return 0;
}
