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
    vector<int>dp(x+1,1e8);
    //dp[i] = minimum number of coins to get sum i
    dp[0] = 0;
    for(int i = 1; i<=x; i++){
        for(int j = 0; j < n; j++) {
            if(i>= coins[j]) {
                dp[i] = min(dp[i],dp[i-coins[j]]+1);
            }   
        }
    }
    cout<<((dp[x]<1e8)?dp[x]:-1)<<endl;
    
    return 0;
}