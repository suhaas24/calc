#include<iostream>
#include"mymath.hpp"
using namespace std; 

int main() {
    int a;
    int b;
    cout<<"enter first number";
    std::cin>>a;
    cout<<"enter second number";
    cin>>b;

    mymath::calc(a,b);

}