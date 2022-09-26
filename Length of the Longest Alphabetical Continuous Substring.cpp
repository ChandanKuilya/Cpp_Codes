#include<bits/stdc++.h>
using namespace std;
/*
 int longestContinuousSubstring(string s) {
        int n=s.size();
        string tmp;
        string ans;
        for(int i=0;i<n-1;i++){
            if(tmp.size()>ans.size())ans=tmp;
            if(s[i+1]-s[i]==1){
                tmp.push_back(s[i]);
                }
            else
                tmp=" ";
                
        }
        return ans.size();
}
*/
int main(){
    string s;
    cin>>s;
    int n=s.size();
        string tmp;
        string ans;
        for(int i=0;i<n-1;i++){
            if(tmp.size()>ans.size())ans=tmp;
            if(s[i+1]-s[i]==1){
                tmp.push_back(s[i]);
                }
            else
                tmp=" ";
                
        }
    cout<<ans;
 return 0;   
}