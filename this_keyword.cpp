#include <iostream>
using namespace std;

class MyClass{
    private:
    int var;

    public:
    MyClass(int v):var(v){}

    void setVar(int var){
        this->var = var;
    }

    int getVar(){
        return var;
    }
};

int main(){
    MyClass obj(20);
    cout<<obj.getVar()<<' ';
    obj.setVar(30);
    cout<<obj.getVar()<<' ';
}