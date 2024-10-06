// Задача №335. Квадраты C
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int start = ceil(sqrt(a));  
    int end = floor(sqrt(b));  
    if (start <= end) {
        for (int i = start; i <= end; ++i) {
            cout << i * i << endl;
        }
    }
    
    return 0;
}
