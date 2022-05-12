/*
For each object being created of the Professor or the Student class, sequential id's should be assigned to them starting from 1.

Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.
*/

/*
Input Format

The first line of input contains the number of objects that are being created. If the first line of input for each object is 1, it means that the object being created is of the Professor class, you will have to input the name, age and publications of the professor.

If the first line of input for each object is 2, it means that the object is of the Student class, you will have to input the name, age and the marks of the student in 6 subjects.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    
    public:
    virtual void getdata() = 0; //pure virtual function
    virtual void putdata() = 0; //pure virtual function
};

class Professor: public Person{
    int publications;
    int cur_id;
    
    
    public:
    static int temp_id;
    Professor(){
        temp_id++;
        cur_id = temp_id;
    }
    
    void getdata(){
        cin>>this->name;
        cin>>this->age;
        cin>>this->publications;
    }
    
    void putdata(){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<publications<<" ";
        cout<<cur_id<<endl;
    }
};

int Professor::temp_id = 0;  //Globally setting the value of temp_id = 0;

class Student: public Person{
    int marks[6];
    int cur_id;
    
    public:
    static int temp_id;
    Student(){
        temp_id++;
        cur_id=temp_id;
    }
    
    void getdata(){
        cin>>this->name;
        cin>>this->age;
        for(int i = 0; i < 6; i++){
            cin>>marks[i];
        }
    }
    
    void putdata(){
        int sum = 0;
        
        cout<<name<<" ";
        cout<<age<<" ";
        for(int i = 0; i < 6; i++){
            sum = sum + marks[i];
        }
        cout<<sum<<" ";
        cout<<cur_id<<endl;
    }
};

int Student::temp_id = 0; //Globally setting the value of temp_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}