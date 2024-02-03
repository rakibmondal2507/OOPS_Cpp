#include<iostream>
using namespace std;

//Compile time Polymorphism

class A{
    public:
    void sayHello(){
        cout<<"Hello Rakib"<<endl;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};
 // operator overloading
 class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+(B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output: "<<value2 - value1<<endl;
    }
 };

//run time polymorphism
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){

    Dog obj1;
    obj1.speak();



/*    
B obj1, obj2;

obj1.a = 4;
obj2.a = 7;

obj1 + obj2;
*/

    // A obj1;
    // obj1.sayHello();
    // obj1.sayHello("Walt");
return 0;
}