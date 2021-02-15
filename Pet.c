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
        printf("%d\n",sum[i]);
    }
    i=0;
    j=1;
     while(j<5)
     {
        if(sum[i]>sum[j])
        {
            j++;
        }
        else
        {
            i++;
            j=i+1;
        }
     }
    printf("%d %d",i+1,sum[i]);

    return 0;
}
