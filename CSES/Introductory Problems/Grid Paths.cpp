/*
https://cses.fi/problemset/task/1625
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long takat(long long a,long long b){
    long long c=1;
    while(b>0){
        if(b&1) c=(c*a);
        a=(a*a);
        b/=2;
    }
    return c;
}
string s;
ll ans=0,par=0;
ll arr[8][8];
void func(ll i,ll j){
    if(i==0 && j==6){
        if(par==48) ans++;
        return;
    }
    if(par==48) return;
    if((i==6 || i==0 || (arr[i-1][j] && arr[i+1][j])) && j && j<6 && !arr[i][j-1] && !arr[i][j+1]) return;
    if((j==6 || j==0 || (arr[i][j-1] && arr[i+1][j+1])) && i && i<6 && !arr[i-1][j] && !arr[i+1][j]) return;
    if(j && !arr[i][j-1] && (s[par]=='?' || s[par]=='U')){
        arr[i][j-1]=1;
        par++;
        func(i,j-1);
        par--;
        arr[i][j-1]=0;
    }
    if(i && !arr[i-1][j] && (s[par]=='?' || s[par]=='L')){
        arr[i-1][j]=1;
        par++;
        func(i-1,j);
        par--;
        arr[i-1][j]=0;
    }
    if(i!=6 && !arr[i+1][j] && (s[par]=='?' || s[par]=='R')){
        arr[i+1][j]=1;
        par++;
        func(i+1,j);
        par--;
        arr[i+1][j]=0;
    }
    if(j!=6 && !arr[i][j+1] && (s[par]=='?' || s[par]=='D')){
        arr[i][j+1]=1;
        par++;
        func(i,j+1);
        par--;
        arr[i][j+1]=0;
    }
    return;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>s;
    arr[0][0]=1;
    func(0,0);
    cout<<ans;
}