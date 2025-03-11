#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int n;
    cin >> n;
    //todo: greedy approach
    // int count = 0;
    // while(n != 0){
    //     int max_digit = 0;
    //     int temp = n;
    //     while(temp != 0){
    //         max_digit = max(max_digit, temp % 10);
    //         temp /= 10;
    //     }
    //     n -= max_digit;
    //     count++;
    // }
    // cout<<count<<endl;
    //todo: dynamic programming approach
    vector<int> dp(n+1, 1e8);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        string temp = to_string(i);
        for(char c: temp){
            int d = c - '0';
            dp[i] = min(dp[i],dp[i-d]+1);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}