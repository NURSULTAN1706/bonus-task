// Задача №113. Список квадратов A

#include <iostream>
using namespace std;

int main() {
    int N, i = 1;
    cin >> N;
    while (i * i <= N) {
        cout << i * i << endl;
        i++; 
    }

    return 0;
}
