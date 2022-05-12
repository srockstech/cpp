#include<iostream>
using namespace std;

class Birthday{
    private:
    int dd, mm, yyyy;
    public:
    Birthday(int d, int m, int y)
    :dd(d), mm(m), yyyy(y)
    {
    }
    void printDate(){
        cout<<dd<<'/'<<mm<<'/'<<yyyy<<endl;
    }
};