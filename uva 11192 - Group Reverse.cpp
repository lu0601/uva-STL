#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int data_count=0;
    int ch_per_part=0;
    while(scanf("%d",&ch_per_part)==1 && ch_per_part!=0)
    {
        char str[150]={};
        scanf("%s",str);
        //printf("%s\n",str);
        ch_per_part = strlen(str)/ch_per_part;
        char *b = &str[0], *e = &str[ch_per_part];
        for(int i=0;i<strlen(str);i+=ch_per_part)
        {
            reverse(b,e);
            b+=ch_per_part;
            e+=ch_per_part;
        }
        printf("%s\n",str);
    }
    return 0;
}
