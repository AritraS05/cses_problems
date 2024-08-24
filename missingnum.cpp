#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    map<long long,long long>f;
    for(long long i = 1; i<=n; i++){
        f[i]++;
    }
    for(long long i=0;i<n-1;i++){
        f[arr[i]]--;
    }
    for(const auto&x:f){
        if(x.second!=0){
            cout<<x.first<<endl;
        }
    }
    return 0;
}