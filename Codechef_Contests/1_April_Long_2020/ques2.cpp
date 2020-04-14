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
        ll temp;
        set <ll> s;
        for(ll i=0;i<n;i++)
            {
                cin>>temp;
                if(temp == 1)
                    s.insert(i);
            }
        ll h = 0,last,flag = 0;
        for(auto it : s)
        {
            if(h != 0)
            {
                ll diff = (it - last);
                last = it;
                if(diff < 6)
                {
                    flag = 1;
                    break;
                }
            }
            else
            last = it;
        h += 1;
        }
        if(flag)
            cout<<"NO";
        else
            cout<<"YES";
    cout<<"\n";
    }
    return 0;
}