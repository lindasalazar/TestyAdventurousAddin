/*Linda Salazar, COSC 1436-57002, Replit, This is a program to work with the various arithmetic operators in C++ and conditions.*/

#include <iostream>
using namespace std;

int main() 
{
  double num1; //Double Variables
  double num2; //Double Variables
  int num3; //Integer Variables
  int num4; //Integer Variable
  double addition; //Double Variable
  double subtraction; //Double Variable
  double multiplication; //Double Variable
  double division; //Double Variable
  int modulus; //Integer Variable

  cout << "Please enter Number 1: " << endl; //INPUT
  cin >> num1; 
  cout << "Please enter Number 2: " << endl; //INPUT
  cin >> num2; 
  cout << "Please enter Number 3: " << endl; //INPUT
  cin >> num3; //INPUT
  cout << "Please enter Number 4: " << endl; //INPUT
  cin >> num4; 

  addition = num1 + num2; //PROCESS
  subtraction = num1 - num2; //PROCESS
  multiplication = num1 * num2; //PROCESS
  division = num1 / num2; //PROCESS
  modulus = num3 % num4; //PROCESS
  cout << num1 << " + " << num2 << " = " << addition << endl; //OUTPUT
  cout << num1 << " - " << num2 << " = " << subtraction << endl; //OUTPUT
  cout << num1 << " * " << num2 << " = " << multiplication << endl; //OUTPUT
  cout << num1 << " / " << num2 << " = " << division << endl; //OUTPUT
  cout << num3 << " % " << num4 << " = " << modulus << endl; //OUTPUT

  do
  {
      cout << "Enter number 1, 2, 3, 4 (!= 0): ";
      cin >> num2;
      if(num2 == 0)
      {
        cout << "Cannot divide by 0, try again!\n";
      }
  }while(num2 == 0);


  return 0;
}