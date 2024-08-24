#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    int count = 1;
    int maxim = 0;
    for(int i = 1; i<n; i++){
        if(s[i] == s[i-1]){
            count++;
            maxim = max(maxim, count);
        }
        else{
            maxim = max(maxim, count);
            count = 1;
        }
    }
    maxim = max(maxim, count);
    cout<<maxim<<endl;
    return 0;
}