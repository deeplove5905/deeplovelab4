#include <iostream>
#include <string>
#include <sstream>

// Include the library that will allow you to convert from string to integer


int main() 

{
  int p,q,r,s;
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
   std::cout <<"Enter any three numbers:" <<std::endl;
   // Ask the user for 3 integers as input

   std::cin >>p>>q>>r;
  // The user should enter all integers on the same line, pressing enter only once


s=p*q*r;

  // Multiply the three integers



std::cout <<"Result of the multipilcation= "<<s<< std::endl;

  // Output the result of the multiplication










  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

  using std::cout;
  using std::cin;
  using std::endl;

  std::string crow;
  std::string sun;
  std::string tree;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  cout<<"The name of crow : ";
  std::getline(cin,crow);
  cout<<"The name of sun : ";
  std::getline(cin,sun);
  cout<<"The name of tree : ";
  std::getline(cin,tree);
  cout<<"       "<<endl;

  cout<<"The "<<crow<<" has flown away"<<endl;
  cout<<"swaying in the evening "<<sun<<" "<<endl;
  cout<<"a leafless "<<tree<<" " <<endl;
  

  
 







  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234";
   // Convert this string to an integer 
int c;
std::stringstream(myNumber)>>c;

  
  std::cout <<" "<<c<<":is an integer";
   //Insert the integer before the text of this output

  return 0;
}