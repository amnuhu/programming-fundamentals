#include<iostream>
#include<string>

using namespace std;


int getString(char buffer[]){
    int bufSize = sizeof(buffer);
    
    string newString;
    string *strPtrc = &newString;
    for (int i = 0; i < 256; ++i) {
      if (buffer[i] == '-'|| buffer[i] == '\0') {
        int strSize = strPtrc->size();
        if (strSize == 0) {
          break;
        }
        cout <<  "["<< strSize << "]   " << *strPtrc <<endl;
        *strPtrc = "";
        continue;
      }
      *strPtrc += buffer[i];
      cout << *strPtrc << endl;
    }
};



int main() {
    const int SIZE = 256;
    char buffer[SIZE];

    cout << "Enter characters: " << endl;
    cin >> buffer;   

    cout << "\nThe string read with cin was:" << endl<< buffer << endl << endl;

    getString(buffer);
}