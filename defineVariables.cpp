#include<iostream>
using namespace std;

int main() {
    int integer;
    int* ptr;
    // int *ptr2;
    int  &integerRef = integer;
    const int constInteger = 20;
    

    // Assign 5 to the integer
    integer = 5;
    cout << "Initial Value of the integer: " << integer << endl;

    // Increment integer through a pointer
    ptr = &integer;
    *ptr += 1;
    cout << "New Integer after increment by pointer: " << integer << endl;

    // Increment integer through the reference
    integerRef += 1;
    cout << "New Integer after increment by reference: " << integer << endl;

    //expression must be a modifiable lvalue
    // constInteger = 21;

    // Convert hex literal to decimal
    int hexLitral = 0xf3f2;
    cout << "The decimal for '0xf3f2' is : "<<  int{hexLitral} << endl;

    // Convert char literal to decimal
    char a = 'a';
    cout << "The decimal for 'a' is : "<<  int{a} << endl;

    // Convert hex literal to decimal
    int octalLiteral = 0437;
    cout << "The decimal for '0437' is : "<<  int{octalLiteral} << endl;
    
    
}