// Simple class to illustrate separate compilation and const
// parameters
// 
// Written by Mal Gunasekera
// Modified by David M. Chelberg
// last-modified: Tue Apr 23 07:31:28 2013
// 
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "my_int.h"
using namespace std;


my_int::my_int(int x)
{
   val = x;
}

  //*********************************************************
  // Function: my_int       
  // Purpose:  Constructor initializes the val to 0      
  // Params:   none      
  // Calls:    none                                    
  // Uses:     none           
  //*********************************************************
my_int::my_int()
{
  val = 0;
}


  //*********************************************************
  // Function: set
  // Purpose:  Sets the val to x
  // Params:   x - the new value for the val
  // Calls:    none
  // Uses:     none
  //*********************************************************
void my_int::set(int a)
{
   val = a;
}
  //***************friend bool operator > (my_int value1, my_int value2);******************************************************
  // Function: outpfriend bool operator > (my_int value1, my_int value2);ut
  // Purpose:  dispfriend bool operator > (my_int value1, my_int value2);lay the val on fout. if fout is a  output stream
  //           thenfriend bool operator > (my_int value1, my_int value2); fout is already  connected to a file
  // Params:   foutfriend bool operator > (my_int value1, my_int value2); -- the output stream
  // Calls:    nonefriend bool operator > (my_int value1, my_int value2);
  // Uses:     ostream
  //*********************************************************************
void my_int::output(ostream& fout) const
{
  fout<<" The value is equal to "<<val<<endl;
}


  //*********************************************************
  // Function: get_int
  // Purpose:  returns the val
  // Params:   none
  // Calls:    none
  // Uses:     none
  //*********************************************************
int my_int::get_int() const
{
  return val;
}

  //**************************bool operator > (my_int value1, my_int value2)*******************************************
  // Function: inputbool operator > (my_int value1, my_int value2)
  // Purpose:  reads and storebool operator > (my_int value1, my_int value2)s a value from inp. if inp is a input 
  //           stream, then inp is already connected to a file.User enters 
  //           a value and ask the user to re-enter the data if the
  //           user enters an incorrect value.
  // Params:   inp -- the input stream
  // Calls:    none
  // Uses:     istream
  //*********************************************************************
void my_int::input(istream& inp)
{
   cout<<"Enter a positive value greater than 1  ";
   inp >> val;
   while (val <= 1)
   {
    cout<<"Entered an Invalid value \n";
    cout<<"Enter a positive value greater than 1 \n";
    inp>> val;
   }  
}

 bool operator > (my_int value1, my_int value2)
{
  if(value1.val > value2.val) //compares the two different values to see which is larger of the two
  {
    return true;
  }
  else
  {
    return false;
  }

}
 


          
//*********************************************************
// Function: is_prime
// Purpose:  object num contains a valid positive value
//           returns true if num is prime; otherwise
//           returns false
// Params:   num  - the value to be checked for prime
// Calls:    sqrt
// Uses:     cmath 
//*********************************************************
bool is_prime(const my_int& num)
{
  double limit;
  int n;      //divisor
  bool prime= true; 

  limit = sqrt(static_cast<double>(num.get_int()));
  
  n = 2;

  while (n <= limit && prime)
  {
    if (num.get_int() % n == 0)
     prime = false;
    else
     n++;
   }
   return prime;
}


