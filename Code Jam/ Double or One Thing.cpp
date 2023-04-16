#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
map<pair<ll, ll>, ll> m;
set<ll> s[(ll)(100002)];
bool arr[(ll)(100002)];
void dfs(ll i){
    if(s[i].size()==1 && m[{i,*(s[i].begin())}]==1){
        ll a=*(s[i].begin());
        auto it=s[a].find(i);
        s[a].erase(it);
        s[i].erase(s[i].begin());
        dfs(a);
    }
    return;
}
void dfs1(ll i){
    arr[i]=1;
    for(auto it:s[i]) if(!arr[it] && it<i) dfs1(it);
    return;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    for(ll j=0;j<n;j++){
        string s,s1="";
        cin>>s;
        ll arr[s.size()];
        for(ll i=s.size()-1;i>0;i--){
            if(s[i]>s[i-1]) arr[i]=1;
            else arr[i]=0;
            arr[i]=max(arr[i],arr[i+1]);
        }
        for(ll i=0;i<s.size();i++){
            s1+=s[i];
            if(i!=s.size()-1 && s[i]<s[i+1]){
                ll t=i;
                while(t>-1 && s[t]==s[i]){
                    s1+=s[t];
                    t--;
                }
            }
        }
        cout<<"Case #"<<j+1<<": "<<s1<<'\n';
    }
}
