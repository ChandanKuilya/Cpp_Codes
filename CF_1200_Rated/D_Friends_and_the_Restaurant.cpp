#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define pll pair<ll,ll>
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define nf(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=b-1;i>=a;i--)
#define psb push_back
#define ppb pop_back
#define mpr make_pair


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//vector<ll>v;
ll t;
cin>>t;
nf(ttc,0,t){
ll n;
cin>>n;
ll x[n];
ll y[n];

for(ll i=0;i<n;i++){
    cin>>x[i];
}
for(ll i=0;i<n;i++){
    cin>>y[i];
}

ll posbl[n];

for(ll i=0;i<n;i++){
    posbl[i]=(y[i]-x[i]);
}
sort(posbl,posbl+n);

ll lft=0,rgt=n-1;

ll cnt=0;

while(lft<rgt){
    ll sum=(posbl[lft]+posbl[rgt]);

    if(sum<0)lft++;
    else{
      cnt++;
      lft++;
      rgt--;
    }

}

cout<<cnt<<'\n';
   
}

return 0;
}