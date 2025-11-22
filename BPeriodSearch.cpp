#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
bool prime(vector<int>& possible, int target){
    for(auto num : possible){
        if(num%target == 0) return true;
    }
    return false;
}
 
int main(){
    int n; cin>>n;
    vector<int> possible;
 
 
    for(int i = n/2 ; i >= 2; i--){
        if(n%i == 0) {
            if(!prime(possible, i))
                possible.push_back(i);
        }
    }
 
    if(possible.size() == 0){
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
 
    cout<<possible.size()<<endl;
 
    for(int i = 0; i < possible.size(); i ++){
        cout<<1<<" "<<possible[i]<<endl;
 
    }
 
    return 0;
}