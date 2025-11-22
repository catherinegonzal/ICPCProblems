#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    int n; cin>>n;
    int sum = 0;
 
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        sum += a;
    }
 
    int cnt = 0;
 
    for(int i = n; i > 0; i--){
        float div = sum/i;
        //cout<<floor(div)<< " "<< div<<endl;
 
        if(sum%i == 0){
            break;
        }
 
        cnt++;
    }
 
    cout<<cnt<<endl;
}
