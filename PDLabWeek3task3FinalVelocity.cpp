#include <iostream>
using namespace std;

main () {

float initialVelocity, time, acceleration, finalVelocity;

 cout << "Enter initial velocity: ";
 cin >> initialVelocity;

 cout << "Enter acceleration: ";
 cin >> acceleration;

 cout << "Enter time: ";
 cin >> time;

 finalVelocity = initialVelocity + acceleration*time;

 cout << "Your final velocity will be: " << finalVelocity;

}