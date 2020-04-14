
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
        ll a[n],temp;
        vector <ll> v;
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            temp = abs(temp); /////this line costed me 3 to 4 wrong answers !!
            if(temp%4 == 2)
            {
                a[i] = 0;
                v.push_back(i);
            }
            else if(temp%4 == 0)
            {
                a[i] = 2;
            }
            else
                a[i] = 1;
        }
        ll ans = ((n+1)*n)/2;
        for(auto it : v)
        {
            ll index = it;
            //checking left of the array
            ll left = 0;
            for(ll j=index-1;j>=0;j--)
            {
                if((a[j] == 0) || (a[j] == 2))
                    break;
                else
                    left += 1;
            }
            //checking right of the array
            ll right = 0;
            for(ll j=index+1;j<n;j++)
            {
                if((a[j] == 0) || (a[j] == 2))
                    break;
                else
                    right += 1;
            }
            ll final = (right*left) + left + right;
            ans -= final;
        }
        ans -= v.size();
        cout<<ans<<"\n";
    }
    return 0;
}