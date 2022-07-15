#include <iostream>
#include <string>

using namespace std;

// this covers recursion and working with arrays (array = elements of same data type)

int find_factorial(int n);
int find_power(int base, int exponent);
int count_num_digits(int n);
int edit_array(int num[], int size);
double grade_average(double grades[], int num_grades);
void sort_decending(int num_array[], int num_of_nums);

int main() {
    int desired_num = 7;
    int fact = find_factorial(desired_num);
    cout << "Factorial of " << desired_num << " = " << fact << endl;
    
    int my_power = find_power(7, 3);
    cout << "7 to power of 3 = " << my_power << endl;

    int longer_num = 48596;
    cout << "Number of digits in " << longer_num << " = " << count_num_digits(longer_num) << endl;

    // methods of creating array
    int sample_array[5]; //can hold 5 elements of type int
    sample_array[0] = 74;

    int another_array[ ] = {65, 69, 74, 78, 82, 86, 91};
    int another_array_size = 7;
    //printing array
    cout << "Values before edits: ";
    for (int j = 0; j < another_array_size; j++) {
        cout << another_array[j] << " ";
    }
    cout << endl;
    // editing elements in array
    another_array[4] = 333;
    int modified_array = edit_array(another_array, another_array_size);
    cout << "Vals outside the function: ";
    for (int j = 0; j < another_array_size; j++) {
        cout << another_array[j] << " ";
    }
    cout << endl;
    
    int twod_array[10][5]; //type int with 50 elements * 4 bytes each = this 2d array reserves 200 bytes
    int another_2d_array[2][3] = {{11, 22, 33}, {18, 21, 24}};
    cout << "Elements of 2d array: " << endl;
    int row = 2, col = 3;

    for (int i =0; i < row; i++){
        for (int j = 0; j < col; j++) {
            cout << another_2d_array[i][j] << " ";
        }
        cout << endl;
    }

    double grade_list[ ] = {100.0, 78.0, 51.0, 89.0, 100.0};
    int numgrade = 5;
    double the_avg = grade_average(grade_list, numgrade);
    cout << "Average grade for class: " << the_avg << endl;

    return 0;

}

int find_factorial(int n) {
    if (n < 0) {
        return -1;
    }
    // the base case
    if (n == 1 || n == 0) {
        return 1;
    }
    // recursive case
    else {
        return n * find_factorial(n - 1);
    }
}

int find_power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else {
        return base * find_power(base, exponent - 1);
    }
}

int count_num_digits(int n) {

    if(abs(n)/10 == 0) {
        return 1;
    }
    // dividing by 10 to determine how many unique digits are in each number
    else {
        return 1 + count_num_digits(n/10);
    }
}

// arrays are passed by REFERENCE
int edit_array(int num[], int size) {
    for (int k = 0; k < size; k++) {
        if (num[k] < 83) {
            num[k] = -1;
        }
    }
    cout << "Values of array inside funct: ";
    for(int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}

double grade_average(double grades[], int num_grades) {
    double average = 0;
    for (int i = 0; i < num_grades; i++) {
        average += grades[i];
    }
    average = average / num_grades;
    return average;
}

void sort_decending(int num_array[], int num_of_nums) {
    for (int i = 0; i < num_of_nums; i++) {
        for (int j = i + 1; j < num_of_nums; j++) {
            if (num_array[i] < num_array[j]) {
                // swap
                int temp = num_array[j];
                num_array[j] = num_array[i];
                num_array[i] = temp;
            }
        }
    }

}