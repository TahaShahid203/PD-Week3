#include <iostream>
using namespace std;

main () {

float vegetablePrice, vegetableKilo, fruitPrice, fruitKilo, total;

 cout << "Vegetable price per kilogram: ";
 cin >> vegetablePrice;

 cout << "Fruit price per kilogram: ";
 cin >> fruitPrice;

 cout << "Total kilograms of vegetables: ";
 cin >> vegetableKilo;

 cout << "Total kilograms of fruits: ";
 cin >> fruitKilo;

 total = vegetablePrice*vegetableKilo + fruitPrice*fruitKilo;

 total = total*1.94;

 cout << "Your earnings in rupees: " << total;

}