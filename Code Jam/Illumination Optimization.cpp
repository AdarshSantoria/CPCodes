#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,r,c,n,m;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>t;
    for(ll a=0;a<t;a++){
        cin>>m>>r>>n;
        ll lo=0,ans=0;;
        bool b1=1;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            if(arr[i]-r<lo){
                ans++;
            }
            else if(arr[i]-r==lo){
                lo=arr[i]+r;
            }
            else if(i && arr[i]-arr[i-1]<=2*r){
                lo=arr[i-1]+r;
            }
            else b1=0;
        }
        if(lo<m && arr[n-1]+r>=m){
            ans--;
        }
        else if(lo<m){
            b1=0;
        }
        if (b1) cout<<"Case #"<<a+1<<": "<<n-ans<<"\n";
        else cout<<"Case #"<<a+1<<": IMPOSSIBLE\n";
    }
}