#include <iostream>

using namespace std;

int main()
{
    srand(time(0)); 
    int size;
    cout << "Input size of masiv: ";
    cin >> size;

    int* arr = new int[size];  
    int* pos = new int[size]; 
    int* neg = new int[size]; 
    int* zer = new int[size]; 
    int posCount = 0, negCount = 0, zeroCount = 0; 

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 201 - 100;  

        if (arr[i] > 0) {
            pos[posCount++] = arr[i];
        }
        else if (arr[i] < 0) {
            neg[negCount++] = arr[i];
        }
        else {
            zer[zeroCount++] = arr[i];
        }
    }
    cout << "First masiv: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Positive numbers: ";
    for (int i = 0; i < posCount; ++i)
        cout << pos[i] << " ";
    cout << endl;
    cout << "Negativ number: ";
    for (int i = 0; i < negCount; ++i)
        cout << neg[i] << " ";
    cout << endl;
    cout << "Zeros: ";
    for (int i = 0; i < zeroCount; ++i)
        cout << zer[i] << " ";
    cout << endl;
    delete[] arr;
    delete[] pos;
    delete[] neg;
    delete[] zer;

    return 0;
}

