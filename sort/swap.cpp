#include <stdio.h>
#include <iostream>
using namespace std;

void MySwap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main ()
{
    // Swap
    // {
    //     int a = 3;
    //     int b = 2;
    //     cout << a << " " << b << endl;
        
    //     // TODO:
    //     MySwap(a, b);
    //     cout << a << " " << b << endl;

        
    // }
    // {
    //     int arr[] = {3, 2};
        
    //     cout << arr[0] << " " << arr[1] << endl;

    //     // TODO:
    //     if (arr[0] > arr[1]) MySwap(arr[0], arr[1]);
    //     cout << arr[0] << " " << arr[1] << endl;
    // }
    {
        for (int i=0; i<5; i++){
            for (int j=0; j<5; j++){
                int x = i;
                int y = j;
                if (y > x) {MySwap(x, y);}
                cout << y << " " << x << " ";
                if(y<=x) cout << "true" << endl;
                else cout << "false" << endl;
            }
        }
    }

    return 0;
}