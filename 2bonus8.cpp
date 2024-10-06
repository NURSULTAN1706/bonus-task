#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int tickets1 = 15, tickets5 = 70, tickets10 = 125, tickets20 = 230, tickets60 = 440;
    int num1 = 0, num5 = 0, num10 = 0, num20 = 0, num60 = 0;
    
    
    num60 = n / 60;
    n %= 60;
    
    num20 = n / 20;
    n %= 20;
    
    num10 = n / 10;
    n %= 10;
    
    num5 = n / 5;
    n %= 5;
    
    num1 = n;
    
    cout << num1 << " " << num5 << " " << num10 << " " << num20 << " " << num60 << endl;
    
    return 0;
}
