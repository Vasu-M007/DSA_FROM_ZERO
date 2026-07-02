#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// int main() {
//     // cout<<"Hello World\n";
//     std::cout<<"i am the best\n";
//     // std::cout<<"Delhi Technological University"<<endl;
//     return 0;

// }



// int main() {
//     int age = 20;
//     char grade = 'O';
//     bool isAdult = true;
//     int marks = 25;

//     float PI1 = 3.14159265359;
//     double PI2 = 3.14159265359;

//     cout<<setprecision(14)<<"PI1 is "<<PI1<<endl; //bad value is printed here
//     cout<<setprecision(14)<<"PI2 is "<<PI2<<endl;  /* this is
//     a very good thing */

//     cout<<age<<"\n"<<marks<<"\n"<<grade<<"\n"<<isAdult<<"\n";
//     return 0;
// }

//cin usage( sum and avg )

// int main() {
//     //sum of 2 nos
//     // int a,b;
//     // cout<<"Enter first number ";
//     // cin>>a;
//     // cout<<"Enter second number :";
//     // cin>>b;
//     // int sum = a + b;
//     // cout<<"sum is :"<<sum<<endl;

//     int a,b,c;
//     cout<<"Enter math marks out of 50 :";
//     cin>>a;
//     cout<<"Enter physics marks out of 50 : ";
//     cin>>b;
//     cout<<"Enter chemistry marks out of 50 : ";
//     cin>>c;
//     int avg = (a + b + c)/3;
//     cout<<"Avg of the marks is :"<<avg<<endl;

//     return 0;

     
// }

// #define i int
// int main(){
//     const float PI = 3.14; //a universal constant
//     const float g = 9.81; //must be initialized const int n not possible
//     float J = 2.3456;
//     i x = 25; //whenever i is used it means int
//     cout<<x;

//     //conversions
//     cout<<(10/4)<<"\n";
//     cout<<(10/4.0)<<"\n"; //int-float promotional type casting //implicit conversion
//     cout<<('A' + 1)<<"\n";
//     cout<<('d' + 1)<<"\n"; //ascii addition

//     //explicit conversion
//     cout<< (int)('A')<<endl;
//     cout<< (int)(J)<<endl;

//     //unary operators
//     int a = 5;
//     int b = 3;
//     int c = a++;
//     cout << "a is "<< c <<endl;
//     int d = ++a;
//     cout << "d is "<<d<<endl;
    

//     return 0;
// }

//conditional statements

// int main() {
//     // int a,b;
//     // cout<<"Enter the first number :";
//     // cin>>a;
//     // cout<<"Enter the second number :";
//     // cin>>b;
    
//     //larger of 2 nos

//     // if (a>b){
//     //     cout << " a is largest";
//     // } else if ( a == b ) {
//     //     cout << "alag number daal";
//     // } else {
//     //     cout << "b is larger";
//     // }
//     // return 0;

//     // number even or odd

//     // int num;
//     // cout<<"Enter the number :";
//     // cin>>num;

//     // if (num % 2 == 0){
//     //     cout<<"The number is even"<<endl;
//     // } else {
//     //     cout<<"The number is odd"<<endl;
//     // }

//     int income;
//     cout << "Enter your income earned : "<<endl;
//     cin>>income;

//     if (income < 12){
//         cout << " Tax applied -> 0%" << endl;
//     } else if (income >= 12 && income <= 15){
//         cout << " Tax applied -> 10%" << endl;
//     } else if (income >= 16 && income <= 20){
//         cout << " Tax applied -> 15%" << endl;
//     } else if (income >= 21 && income <= 30){
//         cout << " Tax applied -> 20%" << endl;
//     } else{
//         cout << " Tax applied -> 30%" << endl;
//     }

//     return 0;

// }

// int main() {
//     int day;
//     cout<<"Enter Your day"<<endl;
//     cin>>day;

//     switch(day) {
//         case 1 : cout << "Monday" << endl;
//                 break;
//         case 2 : cout << "Tuesday" << endl;
//                 break;
//         case 3 : cout << "Wednesday"<< endl;
//                 break;
//         case 4 : cout << "Thursday"<< endl;
//                 break;
//         case 5 : cout << "Friday"<< endl;
//                 break;
//         case 6 : cout << "Saturday"<< endl;
//                 break;
//         case 7 : cout << "SUnday"<< endl;
//                 break;
//     }

//      return 0;

// }

    
//loops
//for loop
// for(initialization ; condition ; updation); 

// int main() {
//     int N;
//     int j;
//     int k = 1;

//     //factorial logic

//     // cout<<"Enter the number : ";
//     // cin>>N;

//     // if (N == 0 || N == 1){
//     //     cout<< "Factorial is 1";
//     // } else {
//     //     for(j = N; j>=2; j--){
//     //         k = k*j;
            
//     //     }
//     //     cout<<"fac is"<<k<<endl;
//     // } 
    
//     // sum till first N naturals

//     cout<<"Enter the end number N : ";
//     cin>>N;
//     int sum = 0;

//     for(j = 1; j<=N; j++){
//         sum = sum + j;
//     }
//     cout<<"The sum till "<<N<<" Natural Numbers is "<<sum<<endl;

     
// }


//square asterisk pattern
// int main(){
//     int i;
//     int j;
//     int N;



//     // cout<<"Enter the star pattern dimension";
//     // cin>>N;

//     // for(i=1; i<=N; i++){
//     //     for (j=1; j<=N; j++) {
//     //         cout<<"* ";
//     //     } 
//     //     cout<<endl;
//     // }
    
     
//     //digits from n to 1

//     // cout<<"Enter N : ";
//     // cin>>N;

//     // for (i=N; i>=1; i--){
//     //     cout<<i<<endl;
//     // }

//     //sum of digits of a number

//     // cout<<"Enter 5 digit number";
//     // cin>>N;
//     // int digsum = 0;
//     // //odd digit sum in a number
//     // while (N>0){
//     //     int lastdig = N % 10;
//     //     if (lastdig % 2 != 0) {
//     //         digsum = digsum + lastdig;
//     //     }
//     //     N = N / 10;

    

//     // }
//     // cout<<"Sum is : "<<digsum << endl;
//     // return 0;

//     //reverse a given number

//     cout<<"Enter N : ";
//     cin>>N;
//     double base = 10.0;
//     int count = 0;
//     int sum = 0;
//     while (N>0){
//         int lastdig = N % 10;
//         cout << "while loop lastdig : " << lastdig << endl;
//         count = count + 1;
//         N = N/10;
//         cout<< "Count of digits of entered no. : "<<count<< endl;
//     } 
//     int n;
//     cout << "Enter N again : ";
//     cin >> n;
//     while (n>0){
//         for (i= (count-1); i>=0; i--){
//             int lstdig = n % 10;
//             cout<< "lstdig : "<< lstdig <<endl;
//             int expo = pow(base,i);
//             cout << "exponential is :"<<expo<<endl;
//             int rev = lstdig * expo;
//             cout << rev << endl;
//             sum = sum + rev;  
//             n = n/10;
//     }
// }
//     cout<< "The final rev number is : "<<sum<<endl;
//     return 0;
// }

//continue

int main(){
    int N;
    int i;
    bool isPrime = true;
    cout << "Enter the number : ";
    cin>> N;
    
    if (N<=1){
        isPrime = false;
    } else{
        for (i = 2; i <= (N - 1); i++){  // for( i = 2; i<=sqrt(N); i++) this is time saving
            if (N % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime){
        cout << "The number " << N << "is Prime" << endl;
    } else{
         cout << "The number " << N << "is CoPrime" << endl;    
    }
    return 0;
    
}
//assignment






    

