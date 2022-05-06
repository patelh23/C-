#include <iostream>
using namespace std;
#include <string>

//Exercise 4.1: What is the value returned by 5 + 10 * 20 / 2 ?
This will be executed like 5 + ((10 * 20) / 2)
so it will be 200 / 2 = 100 + 5 = 105

//Exercise 4.2
a. * ((vec.begin)())
b. ((*((vec.begin)()))) + 1) //member (.) first then begin() call then dereference then add 1

//Exercise 4.3
Order of evaluation for most of the binary operators is left
undefined to give the compiler opportunities for optimization.This strategy
presents a trade - off between efficient code generation and potential pitfalls in
the use of the language by the programmer.Do you consider that an
acceptable trade - off ? Why or why not?
// It is acceptable trade-off because a good programmer can utilize this optimization.
// When in doubt, parenthesize expressions can be used to force the grouping that the
// logic of your program requires.
// Potential pitfalls can be fixed with static code analysis and other due diligence.

int main() {
	/*
	int i = 123;
	int j = 10;
	int k = -i * 3 + 3;
	std::cout << "i is: " << i << endl;
	std::cout << "j is: " << j << endl;
	std::cout << "k is: " << k << endl;
	*/

	short short_value = 32767; // max value if shorts are 16 bits
	short short_value2 = +short_value + 1; // this calculation overflows
	short short_value3 = short_value + 1; // this calculation overflows
	cout << "short_value: " << short_value << endl;
	cout << "short_value2: " << short_value2 << endl;
	cout << "short_value3: " << short_value3 << endl;
	cout << "sizeof_value: " << sizeof(short_value) << endl;

	//Exercise 4.4
	cout << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);

}

