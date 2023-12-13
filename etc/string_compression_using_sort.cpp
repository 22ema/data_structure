#include <iostream>
using namespace std;

void InsertionSort(char* arr, int size){
    int temp = 0;
    int count = 0;
    for(int i=1; i<size; i++){
        temp = arr[i];
        count = i;
        while(temp < arr[count-1]){
            arr[count] = arr[count-1];
            if(count == 0){
                break;
            }
            count--;
        }
        arr[count] = temp;
    }
}

int main(){
    char arr[] = "abagbcdfdceeedag";
    int size = sizeof(arr)-1;
    cout << arr <<endl;
    InsertionSort(arr, size);
    cout << arr << endl;
    char c = arr[0];
    int count = 1;

    for (int i=1; i<size; i++){
        if (arr[i] == c){
            count+=1;
        }
        else{
            cout << c << count;
            count = 1;
            c=arr[i];
        }
    }
    cout << c << count <<endl;
}