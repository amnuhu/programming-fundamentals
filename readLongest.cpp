#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

// * Error fix the bug

// get longest word from input:     word-input-dghrekltkj-compiler

list<string> getString(char buffer[], list<string> words){
    int bufSize = sizeof(buffer);
    string newString;
    string *strPtrc = &newString;
    for (int i = 0; i < 256; ++i) {
      if (buffer[i] == '-'|| buffer[i] == '\0') {
        int strSize = strPtrc->size();
        if (strSize == 0) {
          break;
        }
        words.push_back(*strPtrc);  
        *strPtrc = "";
        continue;
      }
      *strPtrc += buffer[i];
    }
    return words;
};

struct output {
    int maxVal;
    string word;
};

output getMax(list<string> words) {
   int max = words.front().size();
   string word;  
   for (auto v : words){
        cout << "Max val: "  << endl;
        if (v.size() > max) {
            max = v.size();
            word = v;
        }
   }
    output retVal;
    retVal.maxVal = max;
    retVal.word = word;
    return retVal;
}


int main() {
    const int SIZE = 256;
    char buffer[SIZE]{'\0'};

    list<string> words{};
    
    cout << "Enter words: " << endl;
    cin.getline(buffer, SIZE);  

    words = getString(buffer, words);
    output ans;
    ans = getMax(words);

    cout << "Max words: " << ans.word << endl;
    cout << "Max val: " << ans.word << endl;
}