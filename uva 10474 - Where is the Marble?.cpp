#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int data_num=0, que_num=0;
    int case_num=0;
    while(scanf("%d%d",&data_num, &que_num)==2 && (data_num!=0 && que_num!=0))
    {
        case_num+=1;
        int data[data_num]= {};
        for(int i=0; i<data_num; i++)
        {
            scanf("%d",&data[i]);
        }
        int que[que_num]= {};
        for(int i=0; i<que_num; i+=1)
        {
            scanf("%d",&que[i]);
        }
        sort(data, data+data_num);
        int ans[que_num]= {};
        for(int i=0;i<que_num;i+=1)
        {
            int *low=nullptr;
            low = lower_bound(data,data+data_num,que[i]);
            ans[i] = low-data+1;
        }
        printf("CASE# %d:\n",case_num);
        for(int i=0; i<que_num; i+=1)
        {
            if(data[ans[i]-1]==que[i])
            {
                printf("%d found at %d\n",que[i],ans[i]);
            }
            else
            {
                printf("%d not found\n",que[i]);
            }
        }
    }
    return 0;
}
