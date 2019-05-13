#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    int data_num=0;
    scanf("%d",&data_num);
    for(int i=0;i<data_num;i+=1)
    {
        int case_num=0;
        scanf("%d",&case_num);
        int score[case_num]={};
        double sum=0;
        double average=0;
        for(int j=0;j<case_num;j+=1)
        {
            scanf("%d",&score[j]);
        }
        sum = accumulate(score, score+case_num,sum);
        average = sum/case_num;
        int above=0;
        above= count_if(score, score+case_num, [average](int score_arr){return score_arr>average;});
        double above_per=(static_cast<double>(above))/(static_cast<double>(case_num));
        printf("%.3f%\n",above_per*100);
    }
    return 0;
}
