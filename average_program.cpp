#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, avg;
    
  cout << "Enter two numbers: ";
  cin >> first_number >> second_number;

  avg = (first_number + second_number)/2;

  cout << "Average of the 2 integers: = " << avg;     

  return 0;
}