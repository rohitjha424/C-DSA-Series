/******************************************************************************

   
// output
Number of raws : 4
1 
2 1 
3 2 1 
4 3 2 1 



         

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
	    cout<<count<<" ";
	    count --;
	    j++;

	}

      cout << endl;
      i++;
    }





  return 0;
}
