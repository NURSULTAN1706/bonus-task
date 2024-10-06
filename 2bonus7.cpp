//Задача №303. Коровы x
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << n << " " << "korova";
    }
    else if(n == 2 || n == 3 || n == 4){
        cout << n << " " << "korovy";
    }
    else{
        cout << n << " " << "korov";
    }
    return 0;
}