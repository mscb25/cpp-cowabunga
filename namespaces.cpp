#include <iostream>
#include <chrono>

// there are different ways to use c++ elements
// mostly useful when creating source and header files

void qualified_name_example() {
    std::cout << "Testing " << std::endl;
    auto timeNow= std::chrono::system_clock::now();
    
}

void declaration_example() {
    using std::cout;
    using std::endl;
    using std::chrono::system_clock;

    cout << "How about USING using instead of include?" << endl;
    //auto timeNow= now();
}

int main () {
    qualified_name_example();
    declaration_example();
    return 0;
}