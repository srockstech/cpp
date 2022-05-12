#include <iostream>
using namespace std;

int main() {
    int ages[5];
    double priceAfterDiscount;
    int minAge = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
        if(i > 0)
        {
            if(ages[i] <= ages[i-1])
                minAge = ages[i];
        }
        else{
            minAge = ages[i];
        }
    }
    //your code goes here
    priceAfterDiscount = 50 - (minAge/100.0 * 50.0);
    cout<<priceAfterDiscount;
    
    
    return 0;
}