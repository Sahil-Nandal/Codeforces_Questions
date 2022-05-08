#include<iostream>
#include<cmath>
using namespace std;
//The ceil() function in C++ returns the smallest possible integer value which is greater than or equal to the given argument.
int main(){ 
    double n, m, a; 
    cin >> n >> m >> a; 
    cout << (long long) ceil(n/a)* (long long) ceil(m/a) << endl; 
} 