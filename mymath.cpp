#include<iostream>
#include<cmath>
#include"mymath.hpp"

int mymath::calc(){
    int num1;
    int num2;
    int result;
    std::cout << "Enter first number: ";
	std::cin >> num1;
	std:: cout << "Enter second number: ";
	std::cin >> num2;

    result =num1+num2;
    std::cout<<result;

}