// Задача №2944. Сумма цифр I
#include <iostream>
using namespace std;
int main(){
    int n, f, s, t, sum = 0;
    cin >> n;
    f = n / 100;
    s = n / 10 % 10;
    t = n % 10;
    sum = f + s + t;
    cout <<sum;
    return 0;
}