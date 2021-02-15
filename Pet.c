#include<stdio.h>
int main()
{
    int score[5][4],i,j,max=0,player=0;
    int sum[5]={0,0,0,0,0};
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&score[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            sum[i]+=score[i][j];
        }
    }
    i=0;
     while(i<5)
     {
        if(max<sum[i])
        {
            max=sum[i];
            player=i+1;
        }
        i++;
     }
    printf("%d %d",player,max);

    return 0;
}
