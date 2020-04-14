
/*Author : Silent Knight
Institution : Birla Institute Of Technology, Mesra
Motive : Stay Grounded brah!!!
*/


#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n == 1)
        {
            cout<<1<<"\n"<<1<<" "<<1<<"\n";
        }
        else if(n == 2)
        {
            cout<<1<<"\n"<<2<<" "<<1<<" "<<2<<"\n";
        }
        else if(n == 3)
        {
            cout<<1<<"\n"<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
        }
        else if(n == 4)
        {
            cout<<2<<"\n"<<2<<" "<<1<<" "<<2<<"\n"<<2<<" "<<3<<" "<<4<<"\n";
        }
        else 
        {
            ll mini = n/2;
            cout<<mini<<"\n";
            if(n%2 == 0)
            {
                ll h = 1;
                for(ll i=1;i<=mini;i++)
                {
                    cout<<2<<" ";
                    cout<<h<<" "<<h+1<<"\n";
                    h += 2;
                }
            }
            else
            {
                ll h = 4;
                for(ll i=1;i<=mini;i++)
                {
                    if(i == 1)
                    {
                        cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
                    }
                    else
                    {
                        cout<<2<<" ";
                        cout<<h<<" "<<h+1<<"\n";
                        h += 2;
                    }
                }
            }
        }
    }
    return 0;
}