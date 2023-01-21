#include<iostream>
using namespace std;
int a = 20;
int main(){
    int a = 10;
    cout<<a<<endl; //prints 10
    cout<<::a; //prints 20
    //When local and global variables have same name, compiler gives preference to local variable.
    //In order to use global variable in this case, we use scope resolution operator (::).
    return 0;
}