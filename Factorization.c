#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    if(num==1)
    {
        printf("1\n");
    }
    i=2;
    while(num>1)
    {
        if(num%i==0)
        {
            num/=i;
            printf("%d\n",i);
            i=1;
        }
        i++;
    }
    printf("0");
    return 0;
}
