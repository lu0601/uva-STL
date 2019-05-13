#include <iostream>
#include <string.h>
#include <algorithm>
#include <cstdio>
using namespace std;
constexpr int str_max_len = 100000;
int main()
{
    char str1[str_max_len]= {'\0'};
    char str2[str_max_len]= {'\0'};
    while( scanf("%s%s",str1, str2)!=EOF)
    {
        int word= 0;
        int total_len=strlen(str2);
        int sub_len = strlen(str1);
        for( int i = 0 ; i < total_len ; i++ )
        {
            auto pos = find(str2+i, str2+total_len, str1[word]);
            if(pos!=str2+total_len)
            {
                i += pos - (str2+i);
                word+=1;
                if( word == sub_len)
                {
                    break;
                }
            }
        }
        if( word == sub_len)
        {
            printf( "Yes\n" );
        }
        else
        {
            printf( "No\n" );
        }
    }
    return 0;
}
