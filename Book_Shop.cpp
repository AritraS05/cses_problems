#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> h(n), s(n);
    for (int &i : h) cin >> i;
    for (int &i : s) cin >> i;
    
    vector<int> dp(x + 1, 0); 
    
    for (int i = 0; i < n; ++i) {
        for (int j = x; j >= h[i]; --j) { 
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }
    cout << dp[x] << endl;
    return 0;
}

//mle on large test cases:
/*
#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int n,x;
    cin>>n>>x;
    vector<int>h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    vector<int>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    for(int i =1 ; i<=n; i++){
        for(int j = 0; j<=x; j++){
            int w = h[i-1];
            int val = s[i-1];
            int pick = 0;
            if(j >= w){
                pick = dp[i-1][j-w] + val;
            }
            int skip = dp[i-1][j];
            dp[i][j] = max( skip, pick);
        }
    }
    cout<<dp[n][x]<<endl;   
    
    return 0;
}
*/
