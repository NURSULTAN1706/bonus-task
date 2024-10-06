//Задача №2939. Дележ яблок - 2 D
#include <iostream>
using namespace std;
int main(){
    int n, k, r = 0;
    cin >> n >> k;
    r = k % n;
    cout << r;
    return 0;
}