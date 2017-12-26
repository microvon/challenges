/* returns factorial of a number */
/* 12/26/2017 */
/* microvon */

#include <iostream>
#include <stdlib.h>
using namespace std;

int Factorial(int num) { 
	int fac = num;
  	while(num != 1) {
  		fac = fac*(num-1);
  		num--;
  	}   

  	return fac;         
}

int main() { 
  	int num;
	scanf("%d", &num); 
	cout << Factorial(num);

  	return 0;
 }  