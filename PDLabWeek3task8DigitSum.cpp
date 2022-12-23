#include <iostream>
using namespace std;

main () {

int number, rem1, first, rem2, second, rem3, third, fourth;
int total; 

cout << "Enter number: ";
cin >> number;

rem1 = number % 1000;
first = (number - rem1)/1000;

rem2 = rem1 % 100;
second = (rem1 - rem2)/100;

rem3 = rem2 % 10;
third = (rem2 - rem3)/10;

fourth = rem3/1;

total = first + second + third + fourth;
cout << "Your sum is: " << total;


} 