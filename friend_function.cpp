#include<iostream>
using namespace std;

class MyClass{
    private:
    int var;
    friend void fr_function(MyClass &obj);

    public:
    void classFunction(){
        var = 33;
    }
    MyClass(int v):var(v){}
};

void fr_function(MyClass &obj){
    cout<<obj.var<<' ';
}



int main(){
    MyClass obj(45);
    fr_function(obj);
    obj.classFunction();
    fr_function(obj);
}