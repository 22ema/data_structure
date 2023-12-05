
// 정렬 알고리즘을 분류할 때, 안정성도 중요함.

#include <iostream>
using namespace std;

void SelectionSort(int* arr, int size){
    int min = 0;
    int temp = 0;
    for(int i=0; i<size; i++){
        min = i;
        for(int j=i+1; j<size; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

bool CheckSort(int* arr, int size){
    for (int i=0; i<size-1; i++){
        if (arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(int){

    for (int k=0; k<3; k++){
        for (int j=0; j<3; j++){
            for (int i=0; i<3; i++){
                int arr[3] ={i, j, k};
                int size = sizeof(arr) / sizeof(arr[0]);

                for (int e=0; e<size; e++){
                    cout <<arr[e] << " " << flush;
                }
                cout << " -> " << flush;
                //TODO 정렬 해보기
                SelectionSort(arr, size);
                for (int e =0; e < size; e++){
                    cout << arr[e] << " " << flush;
                }
                cout << boolalpha;
                cout << CheckSort(arr, size);
                cout << endl;
            }
        }
    }
    return 0;
}