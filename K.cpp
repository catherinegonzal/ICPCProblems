#include <iostream>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
 
    for(int i = 1; i <= n; i++){
        long long a,b,c,d; cin>>a>>b>>c>>d;
 
        long long l = max(a,c);
 
        long long r = min(b,d);
 
        long long intervalo = r - l;
 
        if(intervalo <= 0) cout<<0<<endl;
        else cout<<intervalo<<endl;
    }
 
}
 
/**
 6
3 7 1 5
0 0 0 0
-5 -1 2 8
1 10 3 6
-1 4 4 10
-10 -2 -7 0
 
 
2
0
0
3
0
5
 
 */