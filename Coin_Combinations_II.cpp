#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> coins(n);
        for(int i = 0; i < n; i++) {
            cin >> coins[i];
        }
        
        // vector<vector<int>>dp(n + 1, vector<int>(x + 1));
        //todo: dp[i][k] = no of ways to get sum k by picking coins ->[i,n-1] , skipping coins ->[0,i-1]
        vector<int>nextstate(x+1,0);
        nextstate[0] = 1;
        // for(int i = 0; i < n; i++){
        //     dp[i][0] = 1; 
        // }

        for(int i = n-1; i >= 0; i--){
            vector<int>currentstate(x+1,0);
            currentstate[0] = 1;
            for(int j = 1; j <= x; j++) {
                int skip = nextstate[j];
                int pick = 0;
                if(coins[i] <= j){
                    pick = currentstate[j- coins[i]]; 
                }
                currentstate[j] = (skip + pick) % 1000000007;
            }
            nextstate = currentstate;
        }
        cout << nextstate[x] << endl;
    }
    
    return 0;
}
