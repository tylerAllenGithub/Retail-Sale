/*Tyler Allen
CS111
Lab3-1
9-10-11
This program will calculate and display the sales tax for the purchase and
 total sale
*/

#include <iostream> //include iostream file
using namespace std;


int main(){ //main function
  double retailPrice;
  double salesTaxRate;
  double totalSale;
  double salesTax;
  //declare variables
  cout<< "Please enter the retail price of the item being purchased: ";
  //ask for input of retail price
  cin>> retailPrice;
  //assign input to retailPrice
  cout<<"Please enter the sales tax rate: ";
  //ask for input of sales tax rate
  cin>> salesTaxRate;
  //assign input to salestaxRate
  salesTax = retailPrice*(salesTaxRate/100);
  //set salesTax to the retail price * (salesTaxrate/100)
  totalSale = retailPrice+salesTax;
  //assign totalSale to retailPrice + salesTax

  cout<< "The sales tax for the purchase is: " << salesTax << endl;
  //output salesTax
  cout<< "The total sale cost is: " << totalSale << endl;
  //output totalSale
  return 0;
}
