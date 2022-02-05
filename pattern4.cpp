/******************************************************************************

   
// output
Number of raws : 5
1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 


         

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
      count = i;
      int j = 1;
      while (j <= i)
	{

	  cout << count << " ";
	  count++;
	  j++;

	}

      cout << endl;
      i++;
    }





  return 0;
}
