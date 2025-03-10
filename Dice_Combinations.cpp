#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int n;
    cin>>n;
    vector<int>dp(n+1);
    dp[n] = 1;
    // for(int i=1;i<=n;i++){
    //     int count = 0;
    //     for(int j = 1; j<=6 ;j++){
    //         if(j <= i){
    //             dp[i] = (dp[i] + dp[i-j])%1000000007;
    //         }
    //     }
    // }
    //todo: another way ->
    for(int i = n-1; i>=0; i--){
        for(int j = 1; j<=6; j++){
            if(j <= n-i){
                dp[i] = (dp[i] + dp[i+j])%1000000007;
            }
        }
    }
    cout<<dp[0]<<endl;
    return 0;
} 