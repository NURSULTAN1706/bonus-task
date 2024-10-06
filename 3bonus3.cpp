// Задача №342. Сумма ста J
#include <iostream>
using namespace std;

int main() {
    int sum = 0, num;
    for (int i = 0; i < 100; ++i) {
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
    
    return 0;
}
