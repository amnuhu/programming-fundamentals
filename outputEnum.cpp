#include<iostream>
using namespace std;

/*Unnamed plain enums*/
enum  {RED, YELLOW, AMBER=YELLOW, GREEN};

/*Named plain enums ==> Warning*/
enum Warning { green, yellow, orange, red };

void printColor(Warning c) {
    cout << "Colour is " << c << endl;
}

int main() {
    printColor(Warning::green);
    printColor(Warning::yellow);
    printColor(Warning::orange);
    printColor(Warning::red);

    cout << "Colour for unnamed enums "<< endl;
    cout << "Colour is " << RED << endl;
    cout << "Colour is " << YELLOW << endl;
    cout << "Colour is " << red << endl;
    cout << "Colour is " << AMBER << endl;
    cout << "Colour is " << GREEN << endl;
}

