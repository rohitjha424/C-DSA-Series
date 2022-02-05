/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cout << "Number of raws and col : ";
  cin >> n;
  int i = 1;

  int j = 1;
  while (i <= n)
    {

      while (j <= n * n)
	{
	  cout << j << " ";

	  if (j % n == 0)
	    {
	      cout << endl;

	    }
	  j++;

	}


      i++;

    }





  return 0;
}


/* 

// output
Number of raws and col : 3
1 2 3 
4 5 6 
7 8 9 


*/
