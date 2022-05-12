#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int reverse = 0;
    int multiple = 1;
    while(x != 0)
    {
        reverse += x%10*multiple;
        x /= 10;
        multiple *= 10;
    }
    cout<<reverse;
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}