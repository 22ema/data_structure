#include <iostream>
using namespace std;

int BinarySearch(int* arr, int size, int target){
    int left = 0;
    int right = size-1;
    int middle = (left + right) / 2;

    while(left <= right){
        if (target == arr[middle]){
            return middle;
        }
        else if (target > arr[middle]){
            left = middle+1;
            middle = (left + right) / 2;
        }
        else if (target < arr[middle]){
            right = middle-1;
            middle = (left + right) / 2;
        }
    }
    return -1;
}

int RecursionBinarySearch(int* arr, int left, int right, int target){
    int middle = (left + right) / 2;
    if(left <= right){
        if(target == arr[middle]){
            return middle;
        }
        else if(target > arr[middle]){
            return RecursionBinarySearch(arr, middle+1, right, target);
        }
        else if(target < arr[middle]){
            return RecursionBinarySearch(arr, left, right-1, target);
        }
    }
    return -1;
}


int main(){

    int arr[] = {1, 3, 5, 9, 13, 15, 39, 100, 143};
    int size = sizeof(arr) / sizeof(int);
    int target = -10;
    int result = -1;
    int recu_result = -1;
    // 이진 탐색
    result = BinarySearch(arr, size, target);

    // 출력문
    cout << result << endl;

    // 이진 탐색(재귀 호출)
    recu_result = RecursionBinarySearch(arr, 0, size, target);

    // 출력문
    cout << recu_result << endl;

}