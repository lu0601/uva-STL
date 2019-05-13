#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;
int main()
{
    int data_count=0;
    int data_num=0;
    while(scanf("%d",&data_num)==1 && data_num!=0)
    {
        data_count+=1;
        int data[data_num]= {};
        for(int i=0; i<data_num; i+=1)
        {
            scanf("%d",&data[i]);
        }
        int sum=accumulate(data, data+data_num,0);
        int avg = sum/data_num;
        int need_move=0;
        for(int i=0;i<data_num;i+=1)
        {
            if(data[i]>avg)
            {
                need_move+=data[i]-avg;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",data_count,need_move);
    }
    return 0;
}
