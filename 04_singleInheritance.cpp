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

int main(){
    Dog d1;
    d1.speak();
    return 0;
}