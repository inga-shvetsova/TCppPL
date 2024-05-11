// 1.5*.cpp
// Created by Inga Shvetsova, 10/05/2024
//
//
//      (∗1.5) Write a program that reads a name (a string) and an age (an int) from the standard
//      input stream cin. Then output a message including the name and age to the standard output
//      stream cout.
//

#inlcude "std_lib_facilities.h"

int main(){
  
  cout << "Please enter your first name (followed by 'enter'):\n";
  
  string first_name; // first_name is a variable of type string
  cin >> first_name; // "see-in" - character input

  cout << "Now, please, enetr your age (followed by 'eneter'):\n";
  int age;
  cin >> age;
  // cin >> first_name >> age; // read a string followed by an integer
   
  
  cout << "Hello, " << first_name << "!\n" << "The age you entered is: " << age << ".\n";
  
}
