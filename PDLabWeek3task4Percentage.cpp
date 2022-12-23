#include <iostream>
using namespace std;

main () {

string name;

int subject1, subject2, subject3, subject4, subject5, obtainedMarks;
float percentage;

 cout << "Enter your name: ";
 cin >> name;

 cout << "Enter subject1  marks: ";
 cin >> subject1;
 cout << "Enter subject2  marks: ";
 cin >> subject2;
 cout << "Enter subject3  marks: ";
 cin >> subject3;
 cout << "Enter subject4  marks: ";
 cin >> subject4;
 cout << "Enter subject5  marks: ";
 cin >> subject5;


 obtainedMarks = subject1 + subject2 + subject3 + subject4 + subject5;

 percentage = obtainedMarks/5;


 cout << "I regret to inform you " << name << endl;
 cout << "Your percentage is only: " << percentage << endl;

 cout << "Start studying you idiot";
}