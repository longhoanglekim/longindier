#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
 	int a = 20;
 	int b = 50;
 	string message =(a>b)? "a > b":"a<=b";
 	cout << message <<endl;
 	cout <<( (a>b ? a :b )+10)<<endl;
	return 0;
}
