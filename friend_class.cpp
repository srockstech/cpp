#include<iostream>
using namespace std;

class MyClass{
    private:
    int var;
    friend class AnotherClass;

    public:
    void classFunction(){
        var = 33;
    }
    MyClass(int v):var(v){}
};

class AnotherClass{
    public:
    void printVarOfMyClass()
    {
        cout<<MyClass(42).var;
    }
};

int main(){
    AnotherClass obj;
    obj.printVarOfMyClass();
}