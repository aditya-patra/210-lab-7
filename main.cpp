#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string* str,int SIZE);
void displayArray(string* str,int SIZE);

int main() {
    const int SIZE = 5;
    string* str = {"josh", "joe", "joey", "joshoey", "joosh"};
}

void outputArrayData(double* headptr,int SIZE) {
    cout << "Outputting Array Elements: ";
    for(int i = 0; i < SIZE; i++) {
        cout << *(headptr+i) << " ";
    }
    cout << endl;
}

double sumArray(double* headptr,int SIZE) {
    double total = 0.0;
    for (int i = 0; i < SIZE; i++) {
        total += *(headptr+i);
    }
    return total;
}