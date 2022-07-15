#include <iostream>
#include <string>

using namespace std;

void pass_the_pointer(int *a_number);
void calculate_area(double *length, double *width, double *result);
void print_array(int *array, int size);
void delete_array_element(int *&array, int size, int index);

int main() {
    // address is where in memory a value is stored
    int funny_num = 37;
    cout << "Funny num's address: " << &funny_num << endl; //& operator gives "address of"
    cout << "Funny num's value: " << funny_num << endl;

    // a pointer is a variable that stores the ADDRESS of another variable
    int *example_point = nullptr;
    example_point = &funny_num;
    // example_point is pointing to funny_num
    cout << "Now, a pointer is holding the memory address of funny num: " << example_point << endl;

    // * can also be used to dereference a pointer -> gives value of variable to which the pointer is pointing

    cout << "Now if we dereference example point, aka " << example_point << " , we can obtain the value AT that address, which is funny num: " << *example_point << endl;

    int number = 7;
    cout << "Inital number: " << number << endl;
    pass_the_pointer(&number);
    cout << "Number after funct call: " << number << endl;

    double len = 7.9, wid = 3.2;
    double result = 0;
    calculate_area(&len, &wid, &result);
    cout << "Area of rect with length 7.9 and width 3.2 is: " << result << endl;

    int *dynam_ptr = nullptr;
    // store starting location of the new int allocated
    dynam_ptr = new int;
    // deref to store value in the dynamic space
    *dynam_ptr = 200;
    cout << *dynam_ptr << endl;

    delete dynam_ptr; // to free up the space dynamically allocated

    int the_size = 10;
    int *dynamic_array = new int[the_size];
    for (int i =0; i < 10; i++) {
        dynamic_array[i] = i;
    }

    for (int i =0; i < the_size; i++) {
        cout << dynamic_array[i] << " ";
    }
    cout << endl;

    // we can resize the array "dynamic_array" now
    int *resized_array = new int[the_size + 4];

    for (int i = 0; i < the_size; i++) {
        resized_array[i] = dynamic_array[i];
    }

    delete[] dynamic_array;
    dynamic_array = resized_array;

    int del_array_size = 5;
    int index = 2;
    
    int *del_array = new int[del_array_size];
    for (int i = 0; i < del_array_size; i++) {
        del_array[i] = i;
    }
    print_array(del_array, del_array_size);
    delete_array_element(del_array, del_array_size, index);
    print_array(del_array, del_array_size - 1);


    return 0;
}

// function takes in the address of a number // it then multiplies the number a_number is pointing to by 20 // stores multiplied num in the location pointed by a_number
void pass_the_pointer(int *a_number) {

    *a_number = *a_number * 20;
    cout << "Value of number inside funct: " << *a_number << endl;
}

// takes in three pointers of type double
// use deref operator (*) to access the value of var pointer is pointing to
void calculate_area(double *length, double *width, double *result) {
    *result = *length * *width;
}

// to avoid rewriting the same loops over and over
void print_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// deleting element at a given index in array
void delete_array_element(int *&array, int size, int index) {
    int *new_array = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        if (i >= index) {
            new_array[i] = array[i + 1];
        }
        else {
            new_array[i] = array[i];
        }
    }
    delete[] array;
    array = new_array;
}