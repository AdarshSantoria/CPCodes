/*
https://cses.fi/problemset/task/1755
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,a=0,b,x,y=0;
    string s,s1="",s2="",s3="",s4="";
    cin>>s;
    sort(s.begin(),s.end());
    for(ll i=0;i<s.length();){
        if(i<s.length()-1 && s[i]==s[i+1]){
            s1+=s[i];
            s2+=s[i];
            i+=2;
        }
        else{
            s3+=s[i];
            i++;
        }
    }
    reverse(s2.begin(),s2.end());
    if(s3.size()<2) cout<<s1<<s3<<s2;
    else cout<<"NO SOLUTION";
}