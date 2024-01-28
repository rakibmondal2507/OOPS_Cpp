#include <iostream>
#include <cstring>
using namespace std;
// #include "hero.cpp"

class Hero{
    
    private:
    int health;

    public:
    char level;
    char *name;
    static int timeToComplete;
  
//   default counstructor 
   Hero(){
    cout<<"constructor called"<<endl;
    name = new char[100];
   }

    // parameterized constructor 
    Hero(int health){
        // cout<<"this->"<<this<<endl;
        this->health = health;
    }

        Hero(int health, char level){
        this->health = health;
        this->level =level;
    }

    // copy Constructor 
    Hero (Hero& temp){
        // cout<<"Copy constructor called"<<endl;
                                //Deep copy
        char *ch = new char [strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch; 

        this->health = temp.health;
        this->level = temp.level;
        
    }
   
   
   int getHealth(){
    return health;
   }
   void setHealth(int h){
    health = h;
   }
   void setLevel(char l){
    level = l;
   }

   void setName(char name[]) {
        strcpy(this->name ,name);
   }




    void print(){
        cout<<"\n[ Name: "<<this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"Level: " <<this->level<<" ]"<<endl;
        cout<<endl;
    }
    //Destructor
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }

    // static function work with only static memeber
    
    static int random(){
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main (){

//Static member does not belongs to object it's belongs to object
cout<<Hero::timeToComplete<<endl;
// Hero hero1;
// cout<<hero1.timeToComplete<<endl;



// Hero a; //destructor called automatically for static allocation

// Hero *b = new Hero(); // fro dynamic distructor called manually
// delete b;














// // Shallow Copy not need copy constructor
// Hero hero1;
// hero1.setHealth(34);
// hero1.setLevel('C');
// char name[7] = "Rakib";
// hero1.setName(name);

// hero1.print();

// // use default copy constructor 
// Hero hero2(hero1);
// hero2.print();

// //Hero hero2 = hero1;
// hero1.name[0] = 'S';
// hero1.print();

// hero2.print(); // In shallow copy access same Memory.










// Hero Suresh (90 , 'A');
// Suresh.print();

// // copy constructor 
// Hero r(Suresh);
// r.print();

// //object is created statically

// Hero moto(11);
// // cout<< "moto address is "<<&moto<<endl;
// moto.print();
 
// //dynamically

// Hero *h = new Hero(10);
// h->print();

// Hero temp(22 , 'B');
// temp.print();




// // static alloctation 
// Hero a;
// a.level = 'A';
// a.setHealth(80);

// cout<<"level is: "<<a.level<<endl;
// cout<<"health is: "<<a.getHealth()<<endl;


// //Dynamic allocation
// Hero *b = new Hero;

// b->level ='B';
// b->setHealth(70);
// cout<<"level is: "<<(*b).level<<endl;
// cout<<"health is: "<<(*b).getHealth()<<endl;


// cout<<"level is: "<<b->level<<endl;
// cout<<"health is: "<<b->getHealth()<<endl;
   
   
   
    // //creation of Object
    // // Hero h1;
    // Hero sudipta;

    // sudipta.setHealth(70);

    // cout<<"Sudipta health is:"<<sudipta.getHealth()<<endl;

    // // sudipta.health = 80;
    // sudipta.level = 'A';
    // // cout<<"size: "<<sizeof(h1) <<endl;
    // // cout<<"health is: "<<sudipta.health<<endl;
    // cout<<"level is: "<< sudipta.level<<endl;
    return 0;
}
