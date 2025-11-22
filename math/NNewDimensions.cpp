#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n; cin>>n;
    vector<int> arr(n);
 
    int mini = 1e9;
    int maxi = 0;
 
    for(int i = 0; i < n; i++){
        int x; cin>>x;
 
        mini = min(mini, x);
        maxi = max(maxi, x);
    }
 
 
    long long int base = maxi - mini;
    long long int r = pow(base, 2);
 
    //cout<<mini<< " "<<maxi<<endl;
 
    cout<<r<<endl;
 
    return 0;
}