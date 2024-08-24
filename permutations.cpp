#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>odd;
    vector<int>even;
    if(n>3){
        for(int i = 1; i<=n; i++){
            if(i%2==0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        int m = odd.size();
        for(int i = 0; i<m; i++){
            even.push_back(odd[i]);
        }
        int k = even.size();
        for(int i = 0; i<k; i++){
            cout<<even[i]<<" ";
        }
        cout<<endl;
    }
    else if(n==1){
        cout<<1<<endl;
    }
    else{
        cout<<"NO SOLUTION"<<endl;
    }

    return 0;
}