#include <iostream>
using namespace std;

void StringCompression(char* arr, int size, int* table){
    
    int index = 0;
    for (int i=0; i<size; i++){
        index = static_cast<int>(arr[i])-97;
        table[index]++;
    }
}


int main(){
    char arr[] = "ababcdfdceeedag";
    int table[26] = {0,};
    int size = sizeof(arr) - 1;
    StringCompression(arr, size, table);
    cout << arr << endl;
    for (int i=0; i<26; i++){
        if(table[i]!=0){
            cout << static_cast<char>(i+97) << table[i];
        }
    }
    cout << endl;
    
    return 0;
}