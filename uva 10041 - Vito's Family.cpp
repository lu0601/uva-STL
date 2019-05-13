#include <stdio.h>
#include <string.h>
#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;
int main()
{
    int case_num=0;
    scanf("%d",&case_num);
    for(int i=0;i<case_num;i+=1)
    {
        int data_num=0;
        scanf("%d",&data_num);
        int middle=0;
        int data[data_num]={};
        for(int j=0;j<data_num;j+=1)
        {
            scanf("%d",&data[j]);
        }
        if(data_num%2==0)
        {
            nth_element(data, data+(data_num/2-1),data+data_num);
            int n1 = data[data_num/2-1];
            nth_element(data, data+(data_num/2),data+data_num);
            int n2 = data[data_num/2];
            middle = (n1+n2)/2;
        }
        else if(data_num%2!=0)
        {
            nth_element(data, data+(data_num/2),data+data_num);
            middle = data[data_num/2];
        }
        int ans[data_num]={};
        int sum_dis=0;
        for(int j=0;j<data_num;j+=1)
        {
            if(data[j]-middle>=0)
            {
                ans[j] += data[j]-middle;
            }
            else if(data[j]-middle<0)
            {
                ans[j] += ((data[j]-middle)*(-1));
            }
        }
        printf("%d\n",accumulate(ans, ans+data_num, 0));
    }
    return 0;
}
