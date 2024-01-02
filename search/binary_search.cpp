#include<iostream>
using namespace std;

int BinarySearch(int* arr, int size, int n){
    int left = 0;
    int right = size - 1;
    int middle = int((right + left) / 2);

    while(left <= right){
        if(arr[middle] == n){
            return middle;
        }
        else if(arr[middle] < n){
            left = middle+1;
            middle = int((right + left) / 2);
        }
        else if (arr[middle] > n){
            right = middle-1;
            middle = int((right + left) / 2);
        }
    }
    return -1;
}

int main(){
    int found_number = 11;
    int arr[] = {1, 2, 2, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int result = 0;
    result = BinarySearch(arr, size, found_number);
    cout << result << endl;
    return 0;
}