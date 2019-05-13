#include <iostream>
#include <algorithm>
using namespace std;

class Card
{
    friend ostream & operator << (ostream &os, const Card &rhs);
    friend bool operator < (const Card &lhs, const Card &rhs);
public:
    void Set(char s, char d);
private:
    char suit_ = ' ', digit_ = ' ';
    int num_ = 0;
};
// ------------------------------------------------------------------
void Card::Set(char s, char d)
{
    // TODO
    digit_ = d;
    suit_ = s;
    num_+=1;
}
// ------------------------------------------------------------------
bool operator < (const Card &lhs, const Card &rhs)
{
    // TODO
    int l=0, r=0;
    //l = (lhs.suit_-'0')*100 + lhs.num_;
    //r = (rhs.suit_-'0')*100 + rhs.num_;
    if(isdigit(lhs.digit_))
    {
        l+= lhs.digit_-'0';
    }
    else if(lhs.digit_=='T')
    {
        l+=10;
    }
    else if(lhs.digit_=='J')
    {
        l+=11;
    }
    else if(lhs.digit_=='Q')
    {
        l+=12;
    }
    else if(lhs.digit_ == 'K')
    {
        l+=13;
    }
    else if(lhs.digit_ == 'A')
    {
        l+=14;
    }
    if(isdigit(rhs.digit_))
    {
        r+= rhs.digit_-'0';
    }
    else if(rhs.digit_=='T')
    {
        r+=10;
    }
    else if(rhs.digit_=='J')
    {
        r+=11;
    }
    else if(rhs.digit_=='Q')
    {
        r+=12;
    }
    else if(rhs.digit_ == 'K')
    {
        r+=13;
    }
    else if(rhs.digit_ == 'A')
    {
        r+=14;
    }
    if(lhs.suit_ == 'C')
    {
        l+=100;
    }
    else if(lhs.suit_ == 'D')
    {
        l+=200;
    }
    else if(lhs.suit_== 'S')
    {
        l+=300;
    }
    else if(lhs.suit_ =='H')
    {
        l+=400;
    }
    if(rhs.suit_ == 'C')
    {
        r+=100;
    }
    else if(rhs.suit_ == 'D')
    {
        r+=200;
    }
    else if(rhs.suit_== 'S')
    {
        r+=300;
    }
    else if(rhs.suit_ =='H')
    {
        r+=400;
    }
    return l<r;
}
// ------------------------------------------------------------------
ostream & operator << (ostream &os, const Card &card)
{
    os << card.suit_ << card.digit_;
    return os;
}
// ------------------------------------------------------------------
int main()
{
    char start = ' ';
    while (cin >> start && start!='#')
    {
        constexpr char position[] = "NESW";
        constexpr size_t NumPeople = sizeof(position)-1;

        // determine the first player to get cards
        int j = 0;
        for (size_t i=0; i<NumPeople; i+=1)
        {
            if (position[i]==start)
            {
                j = (i+1)%NumPeople;
                break;
            }
        }

        // read in and distribute cards
        constexpr size_t NumCards = 13;
        Card cards[NumPeople][NumCards];
        for (size_t i=0; i<NumPeople*NumCards; i+=1)
        {
            char s, n;
            cin >> s >> n;
            cards[j][i/NumPeople].Set(s, n);
            j = (j+1)%NumPeople;
        }

        // sort cards of every player
        for (size_t j=0; j<NumPeople; j+=1)
        {
            sort(cards[j], cards[j]+NumCards);
        }

        // find the first player to display
        for (size_t i=0; i<NumPeople; i+=1)
        {
            if (position[i]=='S')
            {
                j = i;
                break;
            }
        }

        // display cards of every player
        for (size_t t=0; t<NumPeople; t+=1, j=(j+1)%NumPeople)
        {
            cout << position[j] << ':';
            for (size_t i=0; i<NumCards; i+=1)
            {
                cout << ' ' << cards[j][i];
            }
            cout << endl;
        }
    }
}
