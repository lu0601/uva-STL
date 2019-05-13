#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
using namespace std;
struct Check_struct
{
    int n;
    bool check;
};
int main()
{
    int data_num=0;
    while(scanf("%d",&data_num)==1)
    {
        int data[data_num]= {};
        int result[data_num-1]= {};
        for(int i=0; i<data_num; i+=1)
        {
            scanf("%d",&data[i]);
            adjacent_difference(data, data+data_num, result);
        }
        Check_struct check_struct[data_num-1];
        for(int i=0; i<data_num-1; i+=1)
        {
            result[i] = abs(result[i+1]);
            check_struct[i].check=false;
            check_struct[i].n=i+1;
        }
        for(int i=0; i<data_num-1; i+=1)
        {
            for(int j=0; j<data_num-1; j+=1)
            {
                if(result[i]== check_struct[j].n)
                {
                    check_struct[check_struct[j].n-1].check=true;
                }
            }
        }

        if(all_of(check_struct, check_struct+data_num-1,[] (Check_struct checks){return checks.check;}))
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}
