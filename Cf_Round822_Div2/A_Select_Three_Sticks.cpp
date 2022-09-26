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
ll a[n];
nf(i,0,n)cin>>a[i];
sort(a,a+n);
ll cnt=INT_MAX;

for(ll i=0;i<n-2;i++){
    /*
  unordered_map<ll,ll>ump;
  nf(zz,i,i+3)ump[a[zz]]++;
  ll mxcnt=0;
  ll mxelm=INT_MIN;

  for(auto lg: ump){
    if(lg.second>mxelm){
        mxelm=lg.second;
        mxcnt=lg.first;
  }

  }
  ll sum=0;
  for(ll j=i;j<i+3;j++){
    sum=abs(mxcnt-a[j]);
    cnt=min(cnt,sum);
}
*/
ll oprn=(a[i+1]-a[i])+(a[i+2]-a[i+1]);
cnt=min(cnt,oprn);
}

   cout<<cnt<<'\n';
}

return 0;
}