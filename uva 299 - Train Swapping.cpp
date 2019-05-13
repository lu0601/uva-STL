#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*void print(const int TrainId[], const int NumTrain)
{
    for(int i=0;i<NumTrain;i+=1)
    {
        printf("%d", TrainId[i]);
    }
    printf("\n");
}use to debug
*/
// TODO:
int CompId(const int l, const int r)
{
    const int lhs = (const int )l,
                    rhs = (const int )r;
    if(lhs > rhs)
    {
        return 1;
    }
    else if(lhs== rhs)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int Sort(int data[], int n)
{
    int swapcount=0;
    for(int i=n-1;i>=1;i-=1)
    {
        for(int j=0;j<i;j+=1)
        {
            if(CompId(data[j], data[j+1])==1)
            {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                swapcount+=1;
            }
        }
    }
    return swapcount;
}

// TODO: CompName()

int main()
{
    int TrainsNum = 0;
    scanf("%d",&TrainsNum);
    for (int i=0; i<TrainsNum; i+=1)
    {
        int NumTrain=0;
        scanf("%d",&NumTrain);
        int TrainId[NumTrain]= {};
        for(int j=0; j<NumTrain; j+=1)
        {
            scanf("%d",&TrainId[j]);
        }
        printf("Optimal train swapping takes %d swaps.\n",Sort(TrainId, NumTrain));
    }
    return 0;
}
