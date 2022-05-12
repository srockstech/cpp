#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int N, x, a, b;
     cin>>N;
     vector<int> arr(N, 0);
     for(int i = 0; i < N; i++){
         cin>>arr[i];
     }
     cin>>x;
     cin>>a>>b;
     arr.erase(arr.begin()+(a-1));
     arr.erase(arr.begin()+(a-1), arr.begin()+(b-1));
     
     cout<<arr.size()<<endl;
     for(int i = 0; i < arr.size(); i++){
         cout<<arr[i]<<" ";
     }
     
    return 0;
}