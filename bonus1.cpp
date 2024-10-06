
// Задача №2936. Гипотенуза A
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c = 0;
    cin >> a >> b;
    c = sqrt(a * a + b * b);
    cout << c;
    return 0;
}