#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
bool isPowTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
 
int main() {
    int n, q; 
    cin >> n >> q;
 
    vector<long long> prefixOdd(n + 1, 0);
    vector<long long> prefixTwo(n + 1, 0);
    vector<long long> prefixOne(n + 1,0);
 
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
 
        prefixOdd[i] = prefixOdd[i - 1];
        prefixTwo[i] = prefixTwo[i - 1];
        prefixOne[i] = prefixOne[i - 1];
 
        if(x == 1) prefixOne[i]++;
        else if (x % 2 == 1) prefixOdd[i] += x;
        else if (isPowTwo(x)) prefixTwo[i] += x;
    }
 
    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
 
        long long A = prefixTwo[b] - prefixTwo[a - 1];
        long long B = prefixOdd[b] - prefixOdd[a - 1];
        long long O = prefixOne[b] - prefixOne[a - 1];
 
        if(O%2 == 0){ //Par
            A += O/2;
            B += O/2;
        }else{
            A += floor(O/2) + 1;
            B += floor(O/2);
        }
 
        //cout<<A<<" "<<B<<" "<<O<<endl;
 
        if (A == B) cout << "E\n";
        else if (A < B) cout << "B\n";
        else cout << "A\n";
    }
 
    return 0;
}
