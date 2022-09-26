//CK :: ALMIGHTY BHAROSE
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
#define el '\n'



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//vector<ll>v;
ll t;
cin>>t;
nf(ttc,0,t){
ll n,k;
cin>>n>>k;
vector<ll>a;
nf(i,0,n){
    int x;
    cin>>x;
    a.psb(x);
}
ll sum=0;
if(k==1){
    sort(a.begin(),a.end());
    sum+=a[n-1];
}
else{
vector<int>pos;
for(ll i=0;i<n;i++){
  if((i+1)%k==0)pos.psb(i);
}
if(pos.size()==0 || pos.size()==1){
    sort(a.begin(),a.end());
    for(ll i=n-1;i>=0;i--){
        if(k==0)break;
        sum+=a[i];
        k--;
    }
}
else{
    for(ll i=0;i<(pos.size())/2;i++){
        if(a[pos[pos.size()-1-i]]<a[pos[i]])swap(a[pos[pos.size()-1-i]], a[pos[i]]);
    }
    for(ll i=n-1;i>=0;i--){
        if(k==0)break;
        sum+=a[i];
        k--;
    }
}
}
cout<<sum<<'\n';

}

return 0;
}
