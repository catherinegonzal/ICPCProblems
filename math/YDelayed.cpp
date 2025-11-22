#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    float K, P , X; cin>>K>>P>>X;
 
    float mini = 0;
    int workers = 1;
 
    int n = 10;
 
    while(true && n --){
 
        float dias = K/workers;
        float cost = dias*P + workers*X;
 
        if(workers > 1 && cost > mini){
            break;
        }
        mini = cost;
        workers++;
 
    }
 
    cout << fixed << setprecision(3) << mini << endl;
}