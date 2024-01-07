#include<iostream>
#include<vector>
using namespace std;

int Fibonacci(int number){
    if(number == 0){
        return 0;
    }
    if(number == 1){
        return 1;
    }
    return Fibonacci(number-1) + Fibonacci(number-2);
}

int FibonacciNotRecurs(int number){
    if (number == 0) return 0;
    else if (number == 1) return 1;
    else{
        int fn = 0;

        vector<int> save_arr(number+1);
        save_arr[0] = 0;
        save_arr[1] = 1;
        for (int i = 2; i<=number; i++){
            save_arr[i] = save_arr[i-1] + save_arr[i-2];
        }
        fn = save_arr[number];
        return fn;
    }
}

int main(){
    cout << "Input :\t";
    for(int i = 1; i <16; i++){
        cout << i << " ";
    }
    cout << endl;
    cout << "Fibonacci :\t";
    for (int i = 1; i < 16; i++){
        int result = Fibonacci(i);
        cout << result << " ";
    }
    cout << endl;
    cout << "Fibonacci :\t";
    for (int i = 1; i < 16; i++){
        int result = FibonacciNotRecurs(i);
        cout << result << " ";
    }
    cout << endl;

}