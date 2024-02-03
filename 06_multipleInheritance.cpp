#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
     void speak(){
        cout<<"Speaking"<<endl;
    } 
};

class Hybrid: public Human , public Animal{

};

int main(){
   Hybrid h1;
   h1.speak();
   h1.bark();
    return 0;
}