// Задача №2943. Число десятков H
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = 0;
    m = n % 100 / 10;
    cout << m;
    return 0;
}