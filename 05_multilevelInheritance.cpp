#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{

};

class GermanShepherd: public Dog{

};

int main(){
    GermanShepherd g1;
    g1.speak();
}