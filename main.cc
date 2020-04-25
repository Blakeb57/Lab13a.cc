#include <iostream>
#include <cstdlib>
#include <cmath>
#include "my_int.h"
using namespace std;

int main()
{ 
  my_int value1;
  my_int value2;
     
  value1.input(cin);  
 
  value1.output(cout);

  value2.input(cin);

  value2.output(cout);

  if (is_prime(value1))
    cout<<"  is a prime number  \n";
  else
   cout<<" is not a prime number \n";

  
  if(value1 > value2)    //cout which of the two values are larger
    cout << "Value1 is greater than value2   \n";
  else
    cout << "Value2 is greater then value1   \n";


  return 0;
}

