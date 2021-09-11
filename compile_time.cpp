#include<iostream>

template<int a, int b>
struct max_template {
    static constexpr int value = a > b ? a : b;
};

constexpr int max_fun(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int x = 2;
    int y = 3;
    int foo = max_fun(3, 12); // can be evaluated at compile time
    int bar = max_template<3, 2>::value; // is surely evaluated at compile time
//  won't compile without compile-time arguments  
//  int bar2 = max_template<x, y>::value; // is surely evaluated at compile time
    foo = max_fun(x, y); // will be evaluated at runtime
    return 0;
}
