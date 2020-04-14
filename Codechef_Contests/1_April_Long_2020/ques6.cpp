
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
        ll n,m,k;
        cin>>n>>m>>k;
        ll board[n][k];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<k;j++)
                cin>>board[i][j];
        }
        ll ans[n];
        for(ll i=0;i<n;i++)
        {
            ans[i] = board[i][0];
        }
        for(ll j=1;j<k;j++)
        {
            for(ll i=0;i<n;i++)
            {
                if(ans[i] != board[i][j])
                    ans[i]=  -1;
            }
        }
        
        for(ll i=0;i<n;i++)
        {
            if(ans[i] == -1)
            {
                ll a[m+1] = {0};
                ll maxi = INT_MIN;
                ll soln = 1;
                for(ll j=0;j<k;j++)
                {
                    a[board[i][j]] += 1;
                    if(a[board[i][j]] >= maxi)
                    {
                        maxi = a[board[i][j]];
                        soln = board[i][j];
                    }
                }
                ans[i] = soln;
            }
        }
        for(ll i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
    cout<<"\n";
    }
    return 0;
}