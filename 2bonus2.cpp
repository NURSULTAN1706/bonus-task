




// Задача №253. Високосный год  B
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a % 4 == 0 || a % 400 == 0 ){
        cout << "YES";
    }
    else if(a % 100 == 0 ){
        cout << "NO";
    }
    else{
        cout << "NO";
    }
    return 0;
}