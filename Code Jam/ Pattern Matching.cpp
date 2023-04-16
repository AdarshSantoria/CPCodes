#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll a=1;a<=t;a++){
        ll n,m,d=0;
        cin>>n;
        bool b1=0;
        string s1="",s2="",s3="",s;
        for(ll i=0;i<n;i++){
            cin>>s;
            for(ll j=0;j<s.size() && s[j]!='*';j++){
                if(j-(ll)s1.size()+1>0) s1+=s[j];
                else if(s1[j]!=s[j]) b1=1;
            }
            for(ll j=s.size()-1;j>-1 && s[j]!='*';j--){
                if((ll)s.size()-j-(ll)s2.size()>0) s2+=s[j];
                else if(s2[s.size()-1-j]!=s[j]) b1=1;
            }
            bool b2=0;
            for(ll i=0;i<s.size();i++){
                if(!b2 && s[i]=='*') b2=1;
                else if(b2 && s[i]!='*') s3+=s[i];
            }
            for(ll j=s.size()-1;j>-1 && s[j]!='*';j--){
                s3.pop_back();
            }
        }
        reverse(s2.begin(),s2.end());
        if(b1) cout<<"Case #"<<a<<": *"<<'\n';
        else cout<<"Case #"<<a<<": "<<s1+s3+s2<<'\n';
    }
}
