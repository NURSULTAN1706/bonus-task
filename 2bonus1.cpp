// Задача №292. Максимум из двух чисел A
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a > b){
        cout << a;
    }
    else{
        cout << b;
    }
    return 0;
}