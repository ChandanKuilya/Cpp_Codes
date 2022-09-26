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
vector<ll>s;
for(ll i=0;i<n;i++){
    s.psb(i+1);
}
string tg;
cin>>tg;

vector<ll>tsg;

for(ll i=0;i<tg.size();i++){
    if(tg[i]=='1')tsg.psb(i+1);
}

ll ans=0;

if(tg.size()==0)ans=n;
else{
    unordered_map<ll,ll>ump;
    for(ll i=0;i<tsg.size();i++)ump[tsg[i]]++;
    vector<ll>nv;
    for(ll i=0;i<s.size();i++){
        if(ump.find(s[i])==ump.end())nv.psb(s[i]);
    }
    sort(nv.begin(),nv.end());
    ll sz=nv.size();
    
    for(ll i=0;i<sz;i++){
         ll cnnt=0;
        for(ll j=0;j<sz-1;j++){
        if(nv[sz-1-i]%nv[j]==0){
            ans+=nv[j];
            cnnt++;
            break;
        }
 
    }
    if(cnnt==0)ans+=nv[sz-1-i];
}

//for(ll i=0;i<sz;i++)cout<<nv[i]<<" ";
}

cout<<ans<<'\n'; 
}

return 0;
}