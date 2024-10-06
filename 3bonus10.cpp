//Задача №3063. Банковские проценты G

#include <iostream>
using namespace std;

int main() {
    int x, r, y;
    cin >> x >> r >> y;
    
    int years = 0;
    
    while (x < y) {
        x += (x * r) / 100;  
        years++;              
    }
    cout << years << endl;

    return 0;

}