#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// class Student{
// public:
//     float cgpa;
//     string name;

//     void getpercentage(){
//         cout << (cgpa * 10) << endl;
//     }
// };

// class Car{
//     string name;
//     string color;

// public:
//     Car(string name, string color){    //constructor
//         this->name = name; //we refer obj using this
//         this->color = color;
//     }
    
//     void start(){
//         cout << "car started" << endl;
//     }

//     string getname(){
//         return name;
//     }

// };

// int main(){
//     Car c1("grand","red"); // constructed called and printed constructed initiated

//     return 0;
// }

// class User{
//     int id;
//     string password;
// public:
//     string username;
//     User(int id){
//         this->id = id;
//     }

//     void setPass(string password){
//         this->password = password;
//     }
//     string getPass(){
//         return password;
//     }
// };

// int main(){
//     User user1(101);
//     User user2(user1);
//     user1.username = "vasu";
//     user1.setPass("1234");

//     cout << "pass is" << user1.getPass() << endl;
//     cout << "Username is" << user1.username << endl;
// }

//multi inheritance

// class Animal{
//     public:
//     void eat(){
//         cout << "the animal eats" << endl;
//     }

//     void breathes(){
//         cout << "breathes" << endl;
//     }
// };

// class Mammal : public Animal{
//     public:
//     string blood_type; 

//     Mammal(){
//         blood_type = "warm";
//     } 
// };

// class Dog : public Mammal{
//     public:
//     void tailwag(){
//         cout<< "the dog wags its tails" << endl;
//     } 
// };


// int main(){
//     Dog d1;
//     d1.breathes();
//     d1.eat();
//     cout << d1.blood_type << endl;

//     return 0; 
// }

//multiple inheritance

// class Teacher{
//     public:
//     int salary;
//     string subject;
// };

// class Student{
//     public:
//     int rollno;
//     float cgpa;   
// };

// class PHD : public Teacher, public Student{
//     public:
//     string name;   
// };


// int main(){
//     PHD p1;
//     p1.name = "RKB";
//     p1.rollno = 101;
//     p1.salary = 2500;
//     p1.subject = "aims";
//     p1.cgpa = 9.8;

//     cout << p1.name << endl;
//     return 0;
// }

// class Parent {
//     public:
//     void show(){
//         cout << "show the parent class" << endl;
//     }

//     virtual void hello(){
//         cout << "parenthello" << endl;
//     }
// };

// class Parentchild : public Parent{
//     public:

//     void show(){
//         cout << "child hello" << endl; //show function overriding(compile time polymorphism)
//     }

//     void hello(){
//         cout << "child hello" << endl;
//     }
// };

// int main(){
//     Parentchild child1;
//     Parent *ptr; //points to parent class obj

//     ptr = &child1; //run time binding parent pointer points to child class obj
//     ptr->hello(); //child class hello is being used
//     return 0;
// }

//-------------------------------ABSTRACT CLASS CREATION----------------------------//

//abstract class shape

// class shape{
//     public:
//     virtual void draw() = 0; //pure virtual func
// };

// class circle:public shape{
//     public:
//     void draw(){
//         cout << "draw circle" << endl;
//     }
// };

// int main(){
//     circle c1;
//     c1.draw();
//     return 0;
// }

// void counter(){
//     static int count = 0;
//     count++;
//     cout << "count :" << count << endl;
// }

// int main(){
//     counter();  //1
//     counter();  //2
//     counter();  //3
//     return 0;
// }