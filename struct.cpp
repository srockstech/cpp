#include<iostream>
using namespace std;

struct Card{
    int face, shape, colour;
};

void changeStruct(struct Card *deck){
    deck[0].colour = 10;
}

int main(){
    //array of a structure
    struct Card deck[52];
    deck[0].colour = 0;
    deck[0].face = 0;
    deck[0].shape = 1;

    //dynamic structure
    struct Card *ace = new struct Card;
    ace->face = 3;

    //structure as a parameter
    changeStruct(deck);
    cout<<deck[0].colour<<endl;
    cout<<ace->face;
}