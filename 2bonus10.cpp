// Задача №1445. Координаты соседей AA
#include <iostream>

int main() {
    int M, N, x, y;
    std::cin >> M >> N >> x >> y;
    if (x > 1) {
        std::cout << x - 1 << " " << y << std::endl;
    }
    
    if (x < M) {
        std::cout << x + 1 << " " << y << std::endl;
    }
    
    if (y > 1) {
        std::cout << x << " " << y - 1 << std::endl;
    }
    

    if (y < N) {
        std::cout << x << " " << y + 1 << std::endl;
    }
    
    return 0;
}
