#include <iostream>
#include <cmath>

int main(){
    int a, b;
    float c;
    std::cin >> a >> b;
    c = pow(a * a + b * b, 0.5);
    std::cout << c << std::endl;
    return 0;
}
