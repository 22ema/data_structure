#include<iostream>
using namespace std;

void RecurFunc(int count){
    if (count == 0) return;
    

    RecurFunc(count - 1);
    cout << count <<endl;
}

int main(){
    RecurFunc(5);
    return 0;
}