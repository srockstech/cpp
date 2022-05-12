#include "Birthday.h"

class Person{
    private:
    string name;
    Birthday bd;
    public:
    Person(string n, Birthday b)
    :name(n), bd(b)
    {
    }
    void getInfo()
    {
        cout<<name<<endl;
        bd.printDate();
    }
};

int main()
{
    Birthday bd(31, 8, 2001);
    Person tanya("Tanya", bd);
    tanya.getInfo();
    return 0;
}