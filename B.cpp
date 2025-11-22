#include <iostream>
using namespace std;
 
int main(){
    int n; cin>>n;
 
    long long result = 0;
 
    for(int i = 1; i <= n; i++){
        int a; cin>>a;
        result += (1LL * a * i * (n-i+1));
    }
 
    cout<<result<<endl;
}
