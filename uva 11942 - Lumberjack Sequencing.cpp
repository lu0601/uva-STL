#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int data_set=0;
    scanf("%d",&data_set);
    int data[data_set][10]={};
    int data_rev[data_set][10]={};
    for(int i=0;i<data_set;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d",&data[i][j]);
            data_rev[i][j] = data[i][j];
        }
    }
    printf("Lumberjacks:\n");
    for(int i=0;i<data_set;i++)
    {
        reverse(data_rev[i],data_rev[i]+10);
        if((is_sorted(data[i],data[i]+10) || is_sorted(data_rev[i],data_rev[i]+10)))
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }
    return 0;
}
