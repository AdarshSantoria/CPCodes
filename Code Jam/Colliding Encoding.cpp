#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,r,c,n;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>t;
    for(ll a=0;a<t;a++){
        map<char,char> m;
        for(ll i=0;i<26;i++){
            cin>>m['A'+i];
        }
        map<string,bool> m1;
        cin>>n;
        bool b1=1;
        while(n--){
            string s,s1="";
            cin>>s;
            for(ll i=0;i<s.size();i++){
                s1+=m[s[i]];
            }
            if(m1[s1]) b1=0;
            else m1[s1]=1;
        }
        if (b1) cout<<"Case #"<<a+1<<": NO\n";
        else cout<<"Case #"<<a+1<<": YES\n";
    }
}