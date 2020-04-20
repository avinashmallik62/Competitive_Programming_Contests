#include<bits/stdc++.h>

/*Author - Silent Knight
Institution - Birla Institute Of Technology, Mesra
*/

using namespace std;
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define mod 1000000007

ll modInverse(ll n,ll p) 
{ 
    ll x = n;
    ll y = p-2;
    ll res = 1;   
    x = x % p;  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res;  
} 
  

ll nCrModPFermat(ll n,ll r,ll p)  //if mod value is prime 
{ 
   if (r == 0) 
      return 1; 
    
    ll fac[n+1]; 
    fac[0] = 1; 

    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]*modInverse(fac[r], p) % p*modInverse(fac[n-r], p) % p) % p; 
} 

ll nCrModP(ll n,ll r,ll p)          //normal iterative solution for all values of mod
{
    r = min(r,n-r);
    ll c[r+1];
    memset(c,0,sizeof(c));
    c[0] = 1;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=min(i,r);j>0;j--)
        {
            c[j] = (c[j] + c[j-1])%p;
        }
    }
    return c[r];
}

void PacalCombinations(ll size)
{
    ll a[size][size];
    for(ll i=0;i<size;i++)
    {
        for(ll j=0;j<size;j++)
            a[i][j] = 0;
    }
    a[0][0] = 1;
    for(ll i=1;i<size;i++)
    {
        for(ll j=0;j<=i;j++)
        {
            if(j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
}

ll power(ll x, ll y) 
{
    if(y == 0)
        return 1;
    if(y == 1)
        return x;
    ll res= power(x,y/2);
    res=(res%mod * res%mod)%mod;
    if(y & 1)
        res=(res%mod*x%mod)%mod; 
    return res;
}
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,sum = 0;
        cin>>n>>a;
        for(ll i=1;i<=n;i++)
        {
            ll temp = power(a,2*i-1);
            a=((a%mod) * (temp%mod))%mod;
            sum=(sum%mod + temp%mod)%mod;
        }
        cout<<sum<<"\n";
    }
 
}