#include <iostream>
#include <functional>

int main(){

// test

  [out = std::ref(std::cout << "Hello ")](){ out.get() << "World\n"; }();

}
