/*
https://cses.fi/problemset/task/1639
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[6000][6000];
ll n;
string s,s1;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>s>>s1;
    for(ll i=0;i<=s.size();i++)
        for(ll j=0;j<=s1.size();j++)
            if(i || j) arr[i][j]=INT_MAX;
    for(ll i=0;i<=s.size();i++)
        for(ll j=0;j<=s1.size();j++){
            if(i) arr[i][j]=min(arr[i][j],1+arr[i-1][j]);
            if(j) arr[i][j]=min(arr[i][j],1+arr[i][j-1]);
            if(i && j) 
            {
                arr[i][j]=min(arr[i][j],arr[i-1][j-1]+(s[i-1]!=s1[j-1]));
            }
        }
    cout<<arr[s.size()][s1.size()];
}