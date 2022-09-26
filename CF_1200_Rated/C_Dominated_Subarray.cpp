#include <bits/stdc++.h>
using namespace std;
#define ll int
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
ll a[n];
nf(i,0,n)cin>>a[i];
unordered_map<ll,ll>ump;
ll mn=INT_MAX;
for(ll i=0;i<n;i++){
  if(ump.find(a[i])==ump.end())ump[a[i]]=i;
  else{
      mn=min(mn,(i-ump[a[i]]+1));
      ump[a[i]]=i;
  }
}
  if(mn==INT_MAX)cout<<-1<<'\n';
  else{
    cout<<mn<<'\n';
  }
}

return 0;
}

