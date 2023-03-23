#include<iostream>
using namespace std;

void reverseElements(char buffer[], int size) {
    int leftIndex = 0;
    int rightIndex = size;

    while (leftIndex < rightIndex) {
        char temp = buffer[leftIndex];
        buffer[leftIndex] = buffer[rightIndex];
        buffer[rightIndex] = temp;
        leftIndex += 1;
        rightIndex -= 1;
    }
}

int count(char buffer[]) {
    int count = 0;
    int i = 0;

    while (true) {
        if (buffer[i] == '\0')
            break;
        count++;
        i++;
    }
    return count;
}

int main() {

    const int SIZE = 256;
    char buffer[SIZE]{'\0'};
    
    cout << "Enter characters: " << endl;
    cin.get(buffer, SIZE);  

    int bufSize = count(buffer);

    cout << "Reversed characters: "<< buffer << endl;
    reverseElements(buffer, bufSize-1);

    cout << "Reverse characters: "<< buffer << endl;  
}





// using namespace std;

// void reverseElements(char buffer[]) {
//     int leftIndex = 0;
//     int rightIndex = 3;

//     while (leftIndex < rightIndex) {
//         char temp = buffer[leftIndex];
//         buffer[leftIndex] = buffer[rightIndex];
//         buffer[rightIndex] = temp;
//         leftIndex += 1;
//         rightIndex -= 1;
//     }
// }


// int main() {

//     const int SIZE = 256;
//     char buffer[SIZE];
    
//     cout << "Enter characters: " << endl;
//     cin.get(buffer, SIZE);  

//     cout << "characters: "<< buffer << endl;
//     reverseElements(buffer);

//     cout << "Reverse characters: "<< buffer << endl;
    
// }

