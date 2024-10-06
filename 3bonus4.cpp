// Задача №343. Сумма чисел K
#include <iostream>
using namespace std;

int main() {
    int N, num, sum = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
    
    return 0;
}

