/******************************************************************************

   
// output
Number of raws : 5
1
22
333
4444
55555



         

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cout << "Number of raws : ";
  cin >> n;
  int i = 1;
  while (i <= n)
    {
      int j = 1;
      while (j <= i)
	{
	  cout <<i;

	  j++;

	}

      cout << endl;


      i++;

    }





  return 0;
}
