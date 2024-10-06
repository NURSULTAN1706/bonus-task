// Задача №3061. Двоичный логарифм E
#include <iostream>
using namespace std;

int main() {
    unsigned int N;
    cin >> N;
    
    int k = 0;
    
   
    while ((1U << k) < N) {
        k++;
    }

    cout << k << endl;

    return 0;
}
