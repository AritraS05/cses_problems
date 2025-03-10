#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int n,x;
    cin>>n>>x;
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(x+1));
    for(int i = 0; i<n; i++){
        dp[i][0] = 1;
    }
    for(int i = n-1; i>= 0; i--){
        for(int k = 1; k<=x; k++){
            int skip = dp[i+1][k];
            int pick = 0;
            if(k >= c[i]){
                pick = dp[i][k-c[i]];
            }
            dp[i][k] = (skip + pick)%1000000007;
        }
    }
    cout<<dp[0][x]<<endl;
    return 0;
}