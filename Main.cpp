#include<iostream>
#include"mymath.hpp"
using namespace std; 

int main() {
    int a;
    int b;
    int choice;
    cout << "Press 1 to calculate Sum of Numbers\n";
    cout << "Press 2 to calculate Difference of Numbers\n";
    cout << "Press 3 to calculate Product of numbers\n";
    cout << "Press 4 to calculate Division of numbers\n";
    cout << "Press 5 to exit\n";
    cin>>choice;
    cout<<"enter first number";
    std::cin>>a;
    cout<<"enter second number";
    cin>>b;

    mymath::calc(choice,a,b);

}