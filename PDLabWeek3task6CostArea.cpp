#include <iostream>
using namespace std;

main () {

 float size, cost, area, costPerPound, costArea;

 cout << "Enter bag size in pounds: ";
 cin >> size;

 cout << "Enter cost of the bag: ";
 cin >> cost;


 cout << "Enter area covered by each bag in square feet: ";
 cin >> area;

 costPerPound = cost/size;

 costArea = size * area;

 cout << "Cost of the fertilizer per pound: " << costPerPound << endl;
 cout << "Cost of fertilizing the area per square feet: " << costArea;

}