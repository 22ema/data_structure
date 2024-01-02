#include<iostream>
using namespace std;

int RecursionSum(int* arr, int size){
    if (size <= 0) return 0;
    else return RecursionSum(arr, size-1) + arr[size-1];
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    int result = RecursionSum(arr, size);
    cout << result << endl;
    
}