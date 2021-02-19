#include <iostream>

int main(){
    int a = 2;
    int b = 5;
    int c = a;
    a = b;
    b = a;
    std::cout << a+b << std::endl;
    return 0;
}