#include <iostream>
#include <algorithm>
using namespace std;

class Compare
{
public:
    void SetDivisor(int d) { divisor_ = d; }
    // TODO: operator ()
    bool operator()(int rhs, int lhs)const;
private:
    int divisor_ = 1;
};
// ------------------------------------------------------------------
bool Compare::operator()(int lhs, int rhs) const
{
    // TODO
    if(lhs%divisor_ < rhs%divisor_)
    {
        return true;
    }
    else if(lhs%divisor_ == rhs%divisor_)
    {
        if(lhs%2!=0 && rhs%2==0)
        {
            return true;
        }
        else if(lhs%2!=0 && rhs%2!=0)
        {
            return lhs>rhs;
        }
        else if(lhs%2==0 && rhs%2==0)
        {
            return lhs<rhs;
        }
    }
    return false;
}
// ------------------------------------------------------------------
int main()
{
    constexpr size_t MaxDataSize = 10000;
    int M=0, N=0, data[MaxDataSize]={};
    while (cin >> N >> M)
    {
        cout << N << ' ' << M << endl;
        if (N==0 && M==0) break;

        Compare comp;
        comp.SetDivisor(M);

        for (int i=0; i<N; i+=1)
        {
            cin >> data[i];
        }
        sort(data, data+N, comp);
        for (int i=0; i<N; i+=1)
        {
            cout << data[i] << endl;
        }
    }

}
