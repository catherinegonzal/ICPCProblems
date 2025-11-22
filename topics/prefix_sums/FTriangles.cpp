#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <map>
#include <iomanip>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
typedef vector<int> vi;
 
#define pb(x) push_back(x)
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define all(x) (x).begin(), (x).end()
 
bool binarySearch(vector<int> &arr, int x, int low) {
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
 
        if (arr[mid] == x)
            return true;
 
        if (arr[mid] < x)
            low = mid + 1;
 
        else
            high = mid - 1;
    }
 
    return false;
}
 
int main() {
    int n; cin>>n;
 
    vi distance(n + 1), prefixsum(n + 1,0);
    
    rep(i,1,n + 1){
        cin>>distance[i];
 
        prefixsum[i] = prefixsum[i-1] + distance[i];
    }
 
    int sum = prefixsum[n];
    int divide = sum/3;
    int cnt = 0;
 
    rep(i,1,n+1){
 
        bool first = binarySearch(prefixsum, prefixsum[i] + divide, i+1);
        bool second = binarySearch(prefixsum, prefixsum[i] + 2*divide, i+1);
 
        if(first && second) cnt++;
    }
 
    cout<<cnt<<endl;
}
 
/**
 8 2
4 2 4 2 2 6 2 2
 
6 1
3 4 2 1 5 3
 */
close
