// Задача №346. Подсчет чисел N
#include <iostream>
using namespace std;

int main() {
    int N, number, zeroCount = 0,possCount = 0, negCount = 0;
    cin >> N;
   for (int i = 0; i < N; i++) {
        cin >> number;
        
        if (number == 0) {
            zeroCount++; 
        } else if (number > 0) {
            possCount++; 
        } else {
            negCount++; 
        }
    }
    cout << zeroCount << " " << possCount << " " << negCount;
    return 0;
}
