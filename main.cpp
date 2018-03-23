#include <iostream>
#include <functional>

int main(){

  // Overcomplicated std::cout << "Hello World\n";


  [out = std::ref(std::cout << "Hello ")](){ out.get() << "World\n"; }();


}
