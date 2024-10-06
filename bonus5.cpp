//Задача №2941. Последняя цифра F
#include <iostream>
using namespace std;
int main(){
    int n, r = 0;
    cin >> n;
    r = n % 100;
    r = n % 10;
    cout << r;
    return 0;
}