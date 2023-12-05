#include<iostream>
using namespace std;

void Swap(int& a, int& b, bool& swapped){
    int temp = a;
    a = b;
    b = temp;
    swapped = true;
}

void BubbleSort(int* arr, int size){
    for(int j=size-1; j>0; j--)
    {
        bool swapped = false;
        for(int i=0; i<j; i++)
        {
            if(arr[i] > arr[i+1])
            {
                Swap(arr[i], arr[i+1], swapped);
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(int){
    int arr[5] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    BubbleSort(arr, size);
    for(int i =0; i<size; i++){
        cout << arr[i];
    }
    cout << endl;
    return 0;
}