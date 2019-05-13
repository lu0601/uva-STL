#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
    int data[10] = {};
    data[6] = 11;
    int data_set=0;
    scanf("%d",&data_set);
    for(int i=0;i<data_set;i+=1)
    {
        int data_num=0;
        scanf("%d",&data_num);
        int data[data_num]={};
        for(int j=0;j<data_num;j+=1)
        {
            scanf("%d",&data[j]);
        }
        printf("Case %d: %d\n",i+1,*max_element(data,data+data_num));
    }
    return 0;
}
