#include <iostream>
#include <string>

using namespace std;

// declaring it outside of the functions allows it to be used by any function in the program
// global var is also updated by these functions (unless it is declared as const)
int global_var = 9;

// function declaration with formal parameter
int summing_nums(int num1, int num2);
//int preset_sum(int numba1 = 4, int numba2 = 7);
void pass_by_ref(int &the_num);
double calculate(double number1, char operation, double number2);


int main() {

    int number1 = 5;
    int number2 = 9;
    int my_sum;
    //int my_preset_sum;

    // calling function with arugments/actual parameter
    my_sum = summing_nums(number1, number2);
    //my_preset_sum = preset_sum(numba1, numba2);
    cout << my_sum << endl;
    //cout << my_preset_sum << endl;
    cout << "Num before calling function: " << number1 << endl;
    pass_by_ref(number1);
    cout << "Num after calling function: " << number1 << endl;

    double num1 = 8;
    double num2 = 13;
    char operate1 = '/';
    char operate2 = '+';

    cout << num1 << operate1 << num2 << " = ";
    double result1 = calculate(num1, operate1, num2);
    cout << result1 << endl;

    
    cout << num1 << operate2 << num2 << " = ";
    double result2 = calculate(num1, operate2, num2);
    cout << result2 << endl;
    
    return 0;  
}

int summing_nums(int num1, int num2) {
    int the_sum = num1 + num2;
    return the_sum;
}

// using the & symbols allows you to "pass by reference", meaning the value will be updated in main AND the funct, not just a temp variable
void pass_by_ref(int &the_num){
    the_num *= 10;
    cout << "Value of num inside the function: " << the_num << endl;
}

double calculate(double number1, char operation, double number2) {
    double result;

    switch (operation) {
        case '+':
        result = number1 + number2;
        break;
        case '-':
        result = number1 - number2;
        break;
        case '*':
        result = number1 * number2;
        break;
        case '/':
        result = number1 / number2;
        break;
        default:
        result = -1;
        break;

    }
    return result;
}

//int preset_sum(int numba1 = 4, int numba2 = 7) {
//    int the_sum = numba1 + numba2;
//    return the_sum;
//}

