#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    if (number % 2 == 0)
        for (int i = 1; i < 21; ++i) {
            int answer = number * i;
            cout << i << " x " << number  << " = " << answer << endl;
    }
    if (number % 2 == 1 ) {
        int flag = 30;
        for (int i = 1; ; ++i) {
                if (i % number != 0) {
                    cout << i << endl;
                    flag -= 1;
                }
                if (flag <= 0) 
                    break;
        }
    } 
}