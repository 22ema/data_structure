#include <iostream>
using namespace std;

void Swap(char* arr, int& a, int& b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;

}


void RecurPermutations(char* arr, int left, int right){
    // arr[k], ..., arr[m]
    if (left == right){
        for (int i=0; i <=right; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else{
        for(int i = left; i <=right; i++){
            Swap(arr, left, i);
            RecurPermutations(arr, left+1, right);
            Swap(arr, i, left);
            
        }
    }
}

int main(){
    char arr[] = "abcd";
    int size = sizeof(arr)-1;
    RecurPermutations(arr, 0, size-1);

}