
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

    ll t,mod = 1e9+7;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],sum = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        for(ll i=0;i<n;i++)
        {
            ll temp = max(0ll,(a[i] - i));
            sum = (sum+(temp%mod))%mod;
        }
        cout<<sum<<"\n";
    }
    return 0;
}