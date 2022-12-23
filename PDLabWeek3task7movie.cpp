#include <iostream>
using namespace std;

main () {

 string name;
 float adultTicketPrice, childTicketPrice, adultTicketNumber, childTicketNumber, percentage, totalAmountGenerated, amountAfterCharity;

 cout << "Enter Movie Name: ";
 cin >> name;

 cout << "Enter Adult Ticket Price: ";
 cin >> adultTicketPrice;

 cout << "Enter Child Ticket Price: ";
 cin >> childTicketPrice;

 cout << "Enter number of Adult tickets sold: ";
 cin >> adultTicketNumber;

 cout << "Enter number of Child tickets sold: ";
 cin >> childTicketNumber;


 cout << "Enter percentage to donate: ";
 cin >> percentage;

 totalAmountGenerated = adultTicketPrice*adultTicketNumber + childTicketPrice*childTicketNumber;
 amountAfterCharity = totalAmountGenerated - (percentage/100)*totalAmountGenerated;

 cout << "Total Amount Generated: " << totalAmountGenerated << endl;
 cout << "Amount after donation: " << amountAfterCharity;

} 