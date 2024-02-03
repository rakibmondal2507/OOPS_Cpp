#include<iostream>
using namespace std;

class Student{
    //Encapsulation
    private:
        string name;
        int age;
        int height;
      
    public:
    int getAge(){
        return this->age;
    }
};

int main(){
    Student first;
    cout<<"Everything is okay"<<endl;
   
    return 0;
}