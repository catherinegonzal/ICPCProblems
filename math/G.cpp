#include <iostream>
#include <cmath>
using namespace std;
 
void solve(){
    long long h1, h2, b;
    cin >> h1 >> h2 >> b;
    
    double n = log((double)h2 / h1) / log((double)(b - 1) / b);
    
    long long result = ceil(n);
    
    if (result < 0) result = 0;
 
    
    cout << result << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
 
    while(t--){
        solve();
    }
    return 0;
}