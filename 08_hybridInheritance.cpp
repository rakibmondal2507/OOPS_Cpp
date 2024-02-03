//combination more than one Inheritance.

#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Call inside A class"<<endl;
    }
};

class F{
     public:
    void func5(){
        cout<<"Call inside F class"<<endl;
    }
};

class B: public A , public F{
    public:
    void func2(){
        cout<<"Call inside B class"<<endl;
    }
};

class C: public B{
    public:
    void func3(){
        cout<<"Call inside C class"<<endl;
    }
};

class D: public C{
    public: void func4(){
        cout<<"Call inside D class"<<endl;
    }
};

int main(){
    A obj1;
    obj1.func1();
    cout<<endl;
    
    B obj2;
    obj2.func2();
    obj2.func1();
    cout<<endl;

    C obj3;
    obj3.func3();
    obj3.func1();
    obj3.func2();
    cout<<endl;

    D obj4;
    obj4.func4();
   obj4.func1();
    obj4.func2();
    obj4.func3();

    
    return 0;
}