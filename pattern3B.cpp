/******************************************************************************

   
// output
Number of raws : 4
1
23
456
78910



         

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
  int count = 1;
  while (i <= n)
    {
      int j = 1;

      while (j <= i)
	{
	  cout << count;
	  count++;
	  j++;
	}
      cout << endl;



      i++;

    }





  return 0;
}
