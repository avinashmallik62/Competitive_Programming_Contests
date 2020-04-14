/*Author : Silent Knight
Institution : Birla Institute Of Technology, Mesra
Motive : Stay Grounded brah!!!
*/

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll calculate(ll n)
{
    ll count = 0;
    while (n % 2 == 0)  
    {  
        count += 1;  
        n = n/2;  
    }  
    
    for (ll i=3;i<=sqrt(n);i+=2)  
    {    
        while (n%i == 0)  
        {  
            count += 1;
            n /= i;  
        }  
    }  
    if (n > 2)  
        count += 1;
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll x,k,ans;
        cin>>x>>k;
        ll ans1 = log2(x);
        if(ans1 < k)
        {
            ans = 0;
        }
        else
        {
            ll number_of_prime_factors = calculate(x);
            if(number_of_prime_factors >= k)
                ans = 1;
            else
            {
                ans = 0;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}