#include<bits/stdc++.h>
using namespace std;
 
#define int ll
using ll = long long;
using pii = pair<int, int>;
 
int32_t main(){
    int n;
    cin >> n;
    int count = 0;
    while(n != 0){
        int max_digit = 0;
        int temp = n;
        while(temp != 0){
            max_digit = max(max_digit, temp % 10);
            temp /= 10;
        }
        n -= max_digit;
        count++;
    }
    cout<<count<<endl;
    return 0;
}