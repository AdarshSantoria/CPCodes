#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n;
long long takat(long long a,long long b){
    long long c=1;
    while(b>0){
        if(b&1) c=(c*a);
        a=(a*a);
        b/=2;
    }
    return c;
}
int main (){
    cin>>t;
    for(ll a=0;a<t;a++){
        ll n,ans=0;
        cin>>n;
        string arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(i){
                if(arr[i].size()>arr[i-1].size()) continue;
                ll sz=arr[i].size();
                for(ll j=0;j<arr[i].size();j++){
                    if(arr[i][j]>arr[i-1][j]){
                        while(arr[i].size()<arr[i-1].size()){
                            arr[i]+='0';
                            ans++;
                        }
                        break;
                    }
                    else if(arr[i][j]<arr[i-1][j]){
                        while(arr[i].size()<=arr[i-1].size()){
                            arr[i]+='0';
                            ans++;
                        }
                        break;
                    }
                    else if((j==arr[i].size()-1) && (j<arr[i-1].size()-1)){
                        arr[i]+=arr[i-1][j+1];
                        ans++;
                    }
                }
                if(arr[i]==arr[i-1]){
                    for(ll j=arr[i-1].size()-1;j>=sz;j--){
                        if(arr[i][j]!='9'){
                            arr[i][j]++;
                            while(j<arr[i].size()-1){
                                j++;
                                arr[i][j]='0';
                            }
                            break;
                        }
                    }
                }
                if(arr[i]==arr[i-1]){
                    for(ll j=arr[i-1].size()-1;j>=sz;j--){
                            arr[i][j]='0';
                    }
                    arr[i]+='0';
                    ans++;
                }
            }
        }
        cout<<"Case #"<<a+1<<": "<<ans<<'\n';
    }
}