/*
https://cses.fi/problemset/task/1622
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long takat(long long a,long long b){
    long long c=a;
    if(b==0){
        a=1;
    }
    for(long long i=0;i<b-1;i++){
        a=(a*c)%(ll)(1e9+7);
    }
    return a;
}
string s;
ll arr[10];
map<string,bool> m;
void per(string s1){
    if(s1.size()==s.size()){
        m[s1]=1;
        return;
    }
    for(ll i=0;i<s.size();i++){
        if(!arr[i]){
            s1+=s[i];
            arr[i]=1;
            per(s1);
            s1.pop_back();
            arr[i]=0;
        }
    }
    return;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>s;
    per("");
    cout<<m.size()<<'\n';
    for(auto it=m.begin();it!=m.end();it++) cout<<(*it).first<<'\n';
}