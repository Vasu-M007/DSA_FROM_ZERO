#include <iostream>
#include <cmath>
using namespace std;

// multiplication table till 10/20/30

int main(){
    int N;
    int x;
    int i;
    int z;
    cout << "Enter the number to get multiplication table for : ";
    cin >> N;
    cout << "Enter till where multiplication stops : ";
    cin >> x;

    for (i=1 ; i<=x; i++){
        z = N * i;    
        cout << N << "*" << i << "=" << z << endl;
    }
    return 0;
}

// amstrong number check ( number = sum of cube of digits)

int main(){
    int N;
    int cube_sum = 0;
    cout << "Enter the number for amstrong number check : ";
    cin >> N;
    bool isArmstrong = true;
    int temp = N;

    while (N > 0){
        int lastdigit = N % 10;
        int cube = pow(lastdigit,3);
        cube_sum = cube_sum + cube;
        N /= 10;
    }

        if (temp != cube_sum){
            isArmstrong = false;
        }
    if (isArmstrong){
        cout << "The number entered is armstrong";
    } else {
        cout << "THe number is not armstrong";
    }
}

// PRIME NUMBERS TILL N

int main(){
    int N;
    int i;
    int j;
    cout << "Enter the positive N : ";
    cin >> N;

    if (N<=1){
        cout << "Not prime";
    } else {
        for (i = 2; i <= (N-1); i++){
            bool isPrime = true;
            for (j = 2; j <= (i-1) ; j++){
                 if ( i % j == 0) {
                 isPrime = false;
                 break;
                 }
            }
            if (isPrime){
                cout << i << endl;
            }
        }
    }

    return 0;
}

// fabionacci numbers till a positive N

int main(){
    int N;
    int i;
    int j;
    int t1 = 0;
    int t2 = 1;
    int nextterm;
    cout << "Enter the positive N : ";
    cin >> N;

    cout << t1 << "," << t2 << ",";

    for (i=2; i<=N; i++){
        nextterm = t1 + t2;
        cout << nextterm;
        t1 = t2;
        t2 = nextterm;
        }

    return 0;   
} 

