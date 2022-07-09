#include <iostream>
#include <string>

using namespace std;


int main() {

    //basic conditional
    int money = 35;
    if (money >= 25){
        cout << "Since when are you rich?" << endl;
    }
    else if (money <= 10) {
        cout << "You're broke? I'm not surprised." << endl;
    }
    else {
        cout << "I guess that'll suffice." << endl;
    }

    // switch statement conditional
    int vacation_choice = 3;
    switch (vacation_choice) {
        case 1:
          cout << "You're going to New Orleans!" << endl;
          break;
        case 2:
          cout << "You're going to Seattle!" << endl;
          break;
        case 3:
          cout << "You're going to Vegas!" << endl;
          break;
        case 4:
          cout << "You're going to Los Angeles!" << endl;
          break;
        case 5:
          cout << "You're going to Houston!" << endl;
          break;
        default:
          cout << "That's not an elligable vacation spot" << endl;

    }

    //another way to organize if else statements
    string result;
    result = (money >= 25) ? "I have more than 25 dollars" : "I have less than 25 dollars";
    cout << result << endl;


    //determining a character identity
    char character = 'N';
    if (character >= 65 && character <= 90) {
    cout << "in the upper-case alphabet" << endl;
    }
    else if (character >= 97 && character <= 122) {
    cout << "in the lower-case alphabet" << endl;
    }
    else{
    cout << "not in an alphabet" << endl;
    }

    // relating numbers to days of the week
    int day_of_week = 5;
    switch(day_of_week) {
    case 1:
    cout << "It is Monday" << endl;;
    break;
    case 2:
    cout << "It is Tuesday" << endl;;
    break;
    case 3:
    cout << "It is Wednesday" << endl;
    break;
    case 4:
    cout << "It is Thursday" << endl;
    break;
    case 5:
    cout << "It is Friday" << endl;
    break;
    case 6:
    cout << "It is Saturday" << endl;
    break;
    case 7:
    cout << "It is Sunday" << endl;
    break;
    default:
    cout << "Invalid input" << endl;
}

    //while loop
    while (day_of_week > 2) {
        cout << "grr" << endl;
        --day_of_week;
    }

    //do while loop
    do {
        cout << "I'm gonna buy a textbook. I sure hope I don't go into debt" << endl;
        money = money - 80;
    } while(money >= 80);

    cout << "I now have " << money << " dollars to my name. god why is college so expensive???" << endl;

    // for loop in c++
    int possum_bus;
    for (possum_bus = 100; possum_bus > 0; possum_bus -= 3) {
        cout << "Possum bus";
        if (possum_bus == 10) {
            cout << "POSSUM BUS";
            continue;
        }
    }
  return 0;
}