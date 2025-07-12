#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int n;
    cin>>n;
    vector<int>dp(n+1, 0);
    dp[0] = 1;
    //dp[k] = number of ways to get sum k
    for(int i=1; i<=n; i++){
        for(int j = 1; j <= 6; j++){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i - j]) % 1000000007;
            }
        }
    }
    cout<<dp[n]<<endl;
    
    return 0;
}