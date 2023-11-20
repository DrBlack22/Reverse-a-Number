/* We need to write a program which
- Takes a four digit integer as input
- Seprates the integer into its digits
- Puts 2 spaces each bw each digit
- Prints those digits in reverse order 

Hint: 'Use / and % operators'

Let's break it down:
- We declar a first variable of int data type
- We initialize it by assigning 0 to it
- We prompt the user to enter a 4 digit number
- We store the digit entered by user in our variable 

Let's say the variable is 1000
- We use % operator to print out remainder 
of 1000/10 with two 'space' after it
- We initialize a second variable of int data type
with value 0
- We assign this variable the value of first variable
divided by 10
- 
*/

#include <iostream>
using namespace std;
int main(){
	int num{0};
	cout << "Please Enter a 4 digit number: ";
	cin >> num;

	cout << num % 10 << "  ";
	num = num / 10;
	cout << num % 10 << "  ";
	num = num / 10;
	cout << num % 10 << "  ";
	cout << num / 10;
	return 0;
} 
	