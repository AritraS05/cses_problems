#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int n,x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    vector<int> dp(x + 1, 0);
    //todo: dp[k]= no of ways to get sum k
    dp[0] = 1;
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j<n; j++){
            if(i >= coins[j]){
                dp[i] = (dp[i] + dp[i - coins[j]]) % 1000000007;
            }
        }
    }

    cout<<dp[x] << endl;
    
    return 0;
}