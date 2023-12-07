#include<iostream>
using namespace std;

void Print(int* arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void Swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

void InsertionSort(int* arr, int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int count = i;
        while(temp<arr[count-1]){
            arr[count] = arr[count-1];
            count -= 1;
            if(count==0){
                break;
            }
        }
        arr[count] = temp;
    }
}

int main(int){
    int arr[] = {0, 4, 3, 2, 10, 12, 1, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    InsertionSort(arr, size);
    Print(arr, size);
    return 0;
}