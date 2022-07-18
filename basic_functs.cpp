#include <iostream>
#include <algorithm> //for min and max functions
#include <utility>


using std::cout;
using std::endl;

void move_and_copy();

int main() {

    cout << "Minimum of (5, 9): " << std::min(5, 9) << endl;
    cout << "Minimum of list [7, -3, 4, 6, 9, 8]: " << std::min({7, -3, 4, 6, 9, 8}) << endl;
    cout << "Maximum of list [7, -3, 4, 6, 9, 8]: " << std::max({7, -3, 4, 6, 9, 8}) << endl;
    // calculate min and max at the same time
    auto pairSeq= std::minmax({6, 18, 9, -33, -9, 12});
    cout << "Min and Max of list [6, 18, 9, -33, -9, 12]: " << pairSeq.first << "," << pairSeq.second << endl;
    
    move_and_copy();
    
    return 0;
}

void move_and_copy() {
    std::string string1 = "1234";
    std::string string2 = "5678";
    cout << "String 1 = " << string1 << "  String 2 = " << string2 << endl;

    // copy semantic
    string2 = string1;
    cout << "After performing copy operation: " << endl;
    cout << "String 1 = " << string1 << "  String 2 = " << string2 << endl;

    // moving (via utility header)
    string2 = std::move(string1);
    cout << "After performing move operation: " << endl;
    cout << "String 1 = " << string1 << "  String 2 = " << string2 << endl;

}