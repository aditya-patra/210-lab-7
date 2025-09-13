#include <iostream>
using namespace std;

void enterArrayData(double* headptr,int SIZE);
void outputArrayData(double* headptr,int SIZE);
double sumArray(double* headptr,int SIZE);

int main() {
    const int SIZE = 5;
    double* headptr = new double[SIZE];
    double sum;
    enterArrayData(headptr, SIZE);
    outputArrayData(headptr, SIZE);
    cout << "Sum of values: " << sumArray(headptr, SIZE);
    delete [] headptr;
}

void enterArrayData(double* headptr,int SIZE) {
    cout << "Data entry for the array: \n";
    for(int i = 0; i < SIZE; i++) {
        cout << "Element " << (i+1) << ": ";
        cin >> *(headptr+i);
    }
    cout << "Data entry complete\n";
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