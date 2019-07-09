#include <iostream>

int main (){
    int *pointer = new int(5);
    int val = 5;
    std::cout << *pointer << ".\n";
 
    std::cout << &val << ".\n";
}