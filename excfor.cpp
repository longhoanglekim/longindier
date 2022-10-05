#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
 	
 	for (int i = 1; i < 10; i++) // numbers of rows
	 {  // 1 2 3 4 5 6 7 8 9
 	 for (int j=1 ;j<= 10 ;j++) //numbers of columns
	  {
	 // if (i == 5)
	  // continue; //everything after "continue" won't be executed but loops won't end.
	 //break ;   everything after "break uill end.
 	  cout.width(4);
	  
	  cout << i * j << " ";
	  }
    cout << endl;
    }
 	
	return 0;
}
