#include<iostream>
using namespace std;

void Print(int* arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int Count(int* arr, int size, int target){
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            count += 1;
        }
    }
    return count;
}

int SequentialSearch(int* arr, int size, int target){
    int index = -1;
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    return index;
}

int InsertionSort(int* arr, int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int count = i;
        while(temp < arr[count-1]){
            arr[count] = arr[count-1];
            count -= 1;
            if(count==0){
                break;
            }
        }
        arr[count] = temp;
    }
}

int SortedCountHelper(int* arr, int size, int target, int start){
    int count = 0;
    for(int i=start; i<size; i++){
        if (arr[i] != target) break;
        count+=1;
    }
    return count;
}

int SortedCount(int* arr, int size, int target){
    int i = SequentialSearch(arr, size, target);

    if (i >= 0) return SortedCountHelper(arr, size, target, i+1)+1;
    else return 0; 
}

int main(int){
    int arr[] = {8, 1, 1, 3, 2, 5, 1, 2, 1, 1};
    int size = sizeof(arr) / sizeof(int);

    cout << "Count 9 = " << Count(arr, size, 9) <<endl;
    cout << "Count 2 = " << Count(arr, size, 2) <<endl;
    cout << "Count 8 = " << Count(arr, size, 8) <<endl;
    cout << "Count 1 = " << Count(arr, size, 1) <<endl;
    cout << endl;

    cout << "Search 2 = " << SequentialSearch(arr, size, 2) << endl;
    cout << "Search 5 = " << SequentialSearch(arr, size, 5) << endl;
    cout << "Search 9 = " << SequentialSearch(arr, size, 9) << endl;
    cout << endl;

    InsertionSort(arr, size);
    Print(arr, size);

    cout << "Sorted Count 9 = " << SortedCount(arr, size, 9) <<endl;
    cout << "Sorted Count 2 = " << SortedCount(arr, size, 2) <<endl;
    cout << "Sorted Count 8 = " << SortedCount(arr, size, 8) <<endl;
    cout << "Sorted Count 1 = " << SortedCount(arr, size, 1) <<endl;

    
    return 0;
}