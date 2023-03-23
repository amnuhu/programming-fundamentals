#include <iostream>
using namespace std;

int main()
{
    cout << "Please input two operands: " << endl;
    int integer1, integer2;
    cin >> integer1 >>  integer2;

    cout << "please input an operator: " << endl;
    char operator_action;
    cin >> operator_action;

    int answer;

    switch (operator_action)
    {
    case '*':
        answer = integer1 * integer2;
        cout << "Multiplying " << integer1 << " and " << integer2 << " = " << answer << endl;
        break;
    case '+':
        answer = integer1 + integer2;
        cout << "Adding " << integer1 << " and " << integer2 << " = " << answer << endl;
        break;
    case '-':
        answer = integer1 - integer2;
        cout << "Subtracting " << integer1 << " and " << integer2 << " = " << answer << endl;
        break;
    case '/':
        double divAns;

        divAns = (double) integer1 / (double) integer2;
        cout << "Dividing " << integer1 << " and " << integer2 << " = " << divAns << endl;
        break;
    default:
        cout << "Action interger1 integer2:   10  12  operand (+ - * /) ";
        break;
    }
}