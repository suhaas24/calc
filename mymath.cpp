#include<iostream>
#include<cmath>
using namespace std; 
#include"mymath.hpp"

int mymath::calc(int option,int num1 , int num2){

    switch (option) {
    case 1: {
        cout << "Sum is " << (num1 + num2) << "\n";
        break;
    }
    case 2: {
        cout << "Difference is " << (num1 - num2) << "\n";
        break;
    }
    case 3: {
        cout << "Product is " << (num1 * num2) << "\n";
        break;
    }
    case 4: {
        cout << "Division is " << (num1/ num2) << "\n";
        break;
    }
    case 5: {
        cout<<"incorrect input/exit selected"<<"\n";
        break;
    }
    }
}