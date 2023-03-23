#include<iostream>
using namespace std;


int main()
{
    int max_length = 0;
    int count = 0;
    char input_line[10];

    cin >> input_line;

    while (max_length < 10)
    {
    if (input_line[max_length] == '?')
            count++;
        max_length++;
    }
}