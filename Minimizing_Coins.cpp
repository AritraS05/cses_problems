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
    vector<int>dp(x+1,1e8);
    dp[0] = 0;
    for(int i=1;i<=x;i++){
        for(int j = 0; j<n; j++){
            if(i >= c[j]){
                dp[i] = min(dp[i], dp[i-c[j]]+1);
            }
        }
    }
    if(dp[x]< 1e8){
        cout<<dp[x]<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
    return 0;
}