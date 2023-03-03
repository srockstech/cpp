#include<bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long N){
    long long sum = 0;
    if(N==1){
        return 1;
    }
    return pow(N, 3) + sumOfSeries(N-1);
}

int main(){
    long long N;
    cin>>N;
    cout<<sumOfSeries(N);
}