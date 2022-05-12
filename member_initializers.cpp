#include<iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass(int a, int b):m1(a), m2(b){
    cout<<m1<<endl;
    cout<<m2;
}

int main(){
    MyClass obj(23, 44);
}