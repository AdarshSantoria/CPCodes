/*
https://cses.fi/problemset/task/1624
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
bool arr[9][9];
ll arr1[9],brr[20],crr[20];
ll arr2[9][9];
ll n=8;
ll ans;
void func(ll i){
    if(i==8){
        ans++;
        return;
    }
    for(ll k=0;k<8;k++){
        if(!arr1[k] && !arr[i][k] && !brr[i+k] && !crr[i-k+7]){
            arr1[k]=1;
            brr[i+k]=1;
            crr[i-k+7]=1;
            func(i+1);
            arr1[k]=0;
            brr[i+k]=0;
            crr[i-k+7]=0;
        }
    }
    return;
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    while(n--){
        string s;
        cin>>s;
        for(ll i=0;i<8;i++){
            if(s[i]=='*') arr[n][i]=1;
        }
    }
    func(0);
    cout<<ans;
}