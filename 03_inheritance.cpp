#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }
};

class Male: protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
    int getheight(){
        return this->height;
    }
};

int main(){

Male m1;
cout<<m1.getheight()<<endl;
    /*
    Male object1;
    cout<<object1.age <<endl;
    cout<<object1.weight <<endl;
    cout<<object1.height <<endl;
   
    cout<<object1.color <<endl;
    object1.sleep();

    object1.setWeight(61);
    cout<<object1.weight<<endl;
*/
    return 0;
}