#include <iostream>
using namespace std;

class Animal{
   public:
   virtual void walk() = 0;
};

class Horse: public Animal{
    public:
    void walk(){
        cout<<"Walks on 4 legs\n";
    }
};

class Human: public Animal{
    public:
    void walk(){
        cout<<"Walks on 2 legs.\n";
    }
};

int main(){
    Horse h1;
    Human hu1;
    Animal *horse = &h1;
    Animal *human = &hu1;
    horse->walk();
    human->walk();
    return 0;
}