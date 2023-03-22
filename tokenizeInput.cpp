#include<iostream>
#include<string>

using namespace std;


int countChar(int size) {
    int count = 0;
    for (int i = 0 ; i < size; ++i)
      count += 1;
    return count;
};

int main() {
    char buffer[256];

    // read - delimited word
    cin >> buffer;

    for (char c : buffer) {
      cout << c << endl;
    } 
}