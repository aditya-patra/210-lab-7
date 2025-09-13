#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string* str,int SIZE);
void displayArray(string* str,int SIZE);

int main() {
    const int SIZE = 5;
    string *reversed;
    string* str = new string[SIZE];
    *(str) = "josh";
    *(str+1) = "joe";
    *(str+2) = "joey";
    *(str+3) = "joshoey";
    *(str+4) = "joosh";
    reversed = reverseArray(str, SIZE);
    displayArray(reversed, size);
}

string* reverseArray(string* str, int SIZE) {
    string* newArr = new string[SIZE];
    for(int i = 0; i < SIZE; i++) {
        *(newArr + i) = *(str - i - 1);
    }
    return newArr;
}

void displayArray(string *str, int SIZE) {
    for(int i = 0; i < SIZE; i++) {
        cout << *(str + i) << " ";
    }
}