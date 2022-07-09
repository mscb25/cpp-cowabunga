#include <iostream>
#include <string>

using namespace std;

//basic usage of c++

int main() {
    cout << "Hey I think I remember this!" << endl;
    //cout << "Will this work?";

    int num1, num2;
    num1 = 22;
    int num3 = 33;
    // arithmetic operator examples

    cout << "adding=" << num1 + num3 << endl;
    cout << "dividing=" << num3 / num1 << endl;
    cout << "modulus=" << num3 % num1 << endl;
    cout << "Is num1 bigger than num3? " << (num1 > num3) << endl;

    // creating a constant, which holds data like a variable (but the data cannnot be updated)
    const int const_num = 100;

    //swapping variables
    int var1 = 5;
    int var2 = 3;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 <<endl;
    cout << "Swap vals:" << endl;

    int place1 = var1;
    var1 = var2;
    var2 = place1;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 <<endl;

    int integer_num = 100; // variable of type int is allocated 4 bytes of memory
    float float_num = 100.0; // variable of type float is allocated 4 bytes of memory
    double double_num = 100.093857; // var of type double is allocated 8 bytes of mem --> can store up to 15 dig after decimal 
    char character = 'f'; // var of type char is allocated 1 byte of mem
    bool boolean = true; // var of type boolean allocated 1 byte of mem
    // type void is an entity without a value --> no memory is allocated

    long int long_num = 20948502085; // long data modifier allocates more than just 4 bytes, allowing for larger numbers
    short int short_num = 2899; // short data modifier allocates only 2 bytes --> can be used for nums up to 32767
    unsigned int positive_num = 459; // unsigned only allows you to store positive values
    unsigned char positive_char = 'b'; // unsigned char can store any value from 0 to 255
    signed int normal_num = -89; // signed allows for negative nums. this is the default for ints and chars

    //type cast example --> getting the ASCII val of a character
    cout << "character: " << character << endl;
    int ASCII;
    ASCII = (int)character;
    cout << "ASCII value: " << ASCII << endl;

    string text = "lol this is a string\nwow look at that tab"; //not allocated a specific amount of mem at the beginning
    cout << text << endl;

    // cin is the method of getting input from the user
    int testnum;
    cout << "Please enter a number:" << endl;
    cin >> testnum;
    cout << "You entered: " << testnum << endl;

    // logical operators
    bool truth = true;
    bool falsth = false;


    cout << "truth and falsth: " << (truth && falsth) << endl;
    cout << "truth or falsth: " << (truth || falsth) << endl;
    cout << "not truth: " << (!truth) << endl;

    // working with bitwise operators

    int operand1 = 5;
    int operand2 = 6;
    cout << "bitwise and: " << (operand1 & operand2) << endl;
    cout << "bitwise or: " << (operand1 | operand2) << endl;
    cout << "bitwise xor: " << (operand1 ^ operand2) << endl;

    cout << "rightshift 5 >> 6: " << (operand1 >> operand2) << endl; //rightshift makes the number significantly smaller
    cout << "leftshift 5 << 6: " << (operand1 << operand2) << endl; //leftshift makes the number much larger

    // 2's complement of a number using ~ operator, which inverts all the bits
    cout << "2's complement of 5: " << ~operand1 + 1 << endl;

    // to store a previous letter of the alphabet
    char character_before = character - 1;




}

