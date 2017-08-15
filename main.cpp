#include <iostream>
#include "Stack.h"



int main() {

    Stack<double> s1;

    s1.push(23.45);
    s1.push(5633.45);
    s1.push(78.45);

    std::cout << s1.pop() << '\n';
    std::cout << s1.pop() << '\n';
    std::cout << s1.pop() << '\n';

    Stack<long> s2;

    s2.push(234567890);
    s2.push(8947239473289);
    s2.push(9478932472389);

    std::cout << s2.pop() << '\n';
    std::cout << s2.pop() << '\n';
    std::cout << s2.pop() << '\n';


    return 0;
}