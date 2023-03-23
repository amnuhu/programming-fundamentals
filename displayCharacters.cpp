#include<iostream>
#include<string>

using namespace std;



void printCharacters(const char word[]) {
    int i = 0;
    while (true) {
        if (word[i] == '\0')
            break;
        cout << "Character: " << i << " "<<  word[i] << endl;   
        i++;
    }
}



int main() {

    string word;
    cout << "Please Enter input: " << endl;
    cin >> word;

    const char* word_pointer;
    word_pointer =  word.c_str();

    printCharacters(word_pointer);
}