#include <iostream>
#include <string>
using namespace std;

int main() {
std::cout << "********************************\n";

std::cout << "*                              *\n";

std::cout << "*                              *\n";

std::cout << "* Brianna Iwu   Febuary 3, 2023*\n";

std::cout << "*      CSC 101                 *\n";

std::cout << "*                              *\n";

std::cout << "* Laboratory Assignment #3     *\n";

std::cout << "*                              *\n";

std::cout << "*                              *\n";

std::cout << "********************************\n";
float tax, taxrate, cost, total;
int quantity, subtotal;
string itemname;

cout << "What is the item name?\n"; // get item name
getline (cin, itemname); // get user input for itemname
  
cout << "What is the cost for each unit?\n"; // get # of units
cin >> cost; 
  
cout << "What is the number of units purchased?\n";
cin >> quantity;
  
cout << "What is the tax rate?\n";
cin >> taxrate;
  
tax = taxrate*subtotal; // calculate subtotal with tax
subtotal = cost*quantity; // total w/o tax
total = subtotal+tax; // final total

  
cout << "Item     Quantity      Unit Price    Subtotal     Tax     Total "<< endl;
cout << "---------------------------------------------------------------" << endl;
cout << itemname << "      " << quantity << "          " << cost << "       "<< subtotal << "            " << taxrate << "        "<< total;

return 0;

cout << endl; is used to print a new line

std::cout << "Hello World" << std::endl; prints hello world

std::cout << "Hello\tWorld" << std::endl; \t prints 4 spaces between Hello and World

std::cout << "Hello\nWorld" << std::endl; prints Hello but World is on a different line

std::cout << 123 << std::endl; prints "123"

std::cout << "123" << std::endl; prints "123"

std::cout << "5 + 3" << std::endl; prints "5+3"

std::cout << 5 + 3 << std::endl; prints the sum of 5+3 which is 8

std::cout << 5 + '3' << std::endl; 56 is the output

std::cout << (0.3 == 0.3L) << std::endl; output is 0

std::cout << sizeof(double) << std::endl; double of int is 8 so double is 8

std::cout << sizeof(int) << std::endl; int is 4

cout << name << “ is “ << age << “ years old” << endl; string name is bob age is 32 so the output would be "Bob is 32 years old" 

cout << name+last << endl; string name is Bob and string last is Smith so together they sum "Bob Smith"



}