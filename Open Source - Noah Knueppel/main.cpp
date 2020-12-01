#include <iostream>
using namespace std;



int main() {


char symbol;
float number1, number2;


cout << "Enter which operator you would like to use(+, -, *, /): ";
cin >> symbol;

cout << "Enter your two numbers you would like to be operated: ";

cin >> number1 >> number2;

switch(symbol) {

  case '+':
  cout << number1+number2;
  break;

   case '-':
  cout << number1-number2;
  break;

   case '*':
  cout << number1*number2;
  break;

   case '/':
  cout << number1/number2;
  break;

  default:

  cout << "You have entered a symbol other than those available";
  break;
}

return 0;
}