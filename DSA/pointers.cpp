#include <iostream>
using namespace std;
#include <cmath>

// int main(){
//     int a = 10;
//     int *ptr = &a;
//     int **pptr = &ptr;

//     cout << *ptr << endl;
// }


//pass by reference

// void changeA(int *ptr){
//     *ptr = 39;
//     cout << *ptr << endl;
// }

// int main(){
//     int a = 33;
//     changeA(&a);

//     cout << a << endl;
// }

//q1
int main(){
    int x;
    int *ptr;
    x = 7;
    ptr = &x;
    cout << *ptr << endl;
}

