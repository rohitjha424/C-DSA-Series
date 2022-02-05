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

  while (i <= n)
    {
        int j =1;
        while(j<=n){
            cout<<i;
            j++;
            
            
        }
        cout<<endl;
        i++;
    }
    
      



return 0;
}


/* 

// output
Number of raws and col : 5
11111
22222
33333
44444
55555

*/