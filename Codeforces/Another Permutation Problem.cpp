#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
// ll arr1[10000000];
// void spf(){
//     for(ll i=2;i<10000001;i+=2){
//         arr1[i-1]=2;
//     }
//     for(ll i=2;i<10000000;i+=2){
//         arr1[i]=i+1;
//     }
//     for(ll i=2;i<10000000;i++){
//         for(ll j=(i+1)*(i+1);j<10000001;j+=i+1){
//             arr1[j-1]=min(arr1[j-1],i+1);
//         }
//     }
// }
ll ans,n,t,m,a,b,k,c;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++) arr[i]=1;
        ans=0;
        for(ll i=0;i<=n;i++){
            ll a=0,b=0;
            for(ll j=0;j<i;j++){
                a+=(j+1)*(j+1);
                b=max(b,(j+1)*(j+1));
            }
            for(ll j=i;j<n;j++){
                a+=(j+1)*(n-j+i);
                b=max(b,(j+1)*(n-j+i));
            }
            ans=max(a-b,ans);
        }
        cout<<ans<<'\n';
    }
}