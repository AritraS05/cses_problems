#include<bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using pii = pair<int, int>;

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    vector<int> ns(x+1, 0);
    ns[0] = 1;  
    
    for(int i = n-1; i >= 0; i--) {
        vector<int> cs(x+1, 0);
        cs[0] = 1;  
        
        for(int j = 1; j <= x; j++) {a
            int skip = ns[j];
            int pick = 0;
            if(j >= c[i]) {  
                pick = cs[j - c[i]];
            }
            cs[j] = (skip + pick) % 1000000007;
        }
        ns = cs;
    }
    
    cout << ns[x] << endl;
    return 0;
}
