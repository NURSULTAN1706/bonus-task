// Вводится число N, а затем N чисел.   M
#include <iostream>
using namespace std;

int main() {
    int N, number, zeroCount = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> number;
        if (number == 0) {
            zeroCount++; 
    }
    }
    cout << zeroCount << endl;

    return 0;
}
