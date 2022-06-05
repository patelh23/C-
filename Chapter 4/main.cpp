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
	cout << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2); //91

	//Exercise 4.5

		//(a)-30 * 3 + 21 / 5       -90 + 4 = -86
	cout << -30 * 3 + 21 / 5 << endl;
	//(b)-30 + 3 * 21 / 5   // -30 + 63/5 = -18
	cout << -30 + 3 * 21 / 5 << endl;
	//(c)30 / 3 * 21 % 5    // 210 % 5 = 0
	cout << 30 / 3 * 21 % 5 << endl;
	//(d)-30 / 3 * 21 % 4   -10 * // -210 % 4 = -2
	cout << -30 / 3 * 21 % 4 << endl;

	//Exercise 4.6
	int x = 5;
	if (x % 2 == 0)
		cout << "even";
	else
		cout << "odd";

	//Exercise 4.7
	What does overflow mean ?
		Overflow is when the value of an object is outside the range of values
		its data type can represent.
		* /
		short example1 = -32768;
	example1 -= 1;
	cout << "example1 : " << example1 << endl; //here you can see the overflow caused 
									   //the negative to wrap and turn positive

	long example2 = -2147483648;
	example2 -= 1;
	cout << "example2 : " << example2 << endl; //here you can see the overflow caused the long 
									   //negative to wrap and turn positive

	unsigned char example3 = 255;
	example3 += 4;
	cout << "example3 : " << example3; //here you can see the overflow caused 
									   //the blank space to  wrap and turn into ASCI 3, a heart

	Exercise 4.8: Explain when operands are evaluated in the logical AND, logical
		OR, and equality operators.

		The right hand operand is evaluat
		ed in the logical AND
		operator only when the left hand operator is evaluated true

		The right hand operand is evaluated in the logical OR
		operators only when the left hand operator is evaluated false

		The right hand operand is converted to match the left hand
		operand in the equality operand?

	Exercise 4.9
		const char* cp = "hello";
	if (cp != nullptr && *cp)
		cout << *cp << " " << cp;

		// *cp gives you h because the pointer will always point to the first element
	// cp gives you the phrase hello.

	//Exercise 4.9
	Explain the behavior of the condition in the following

		const char* cp = "hello";
	if (cp != nullptr && *cp)
		cout << *cp << " " << cp;

	// *cp gives you h because the pointer will always point to the first element
	// cp gives you the phrase hello
	// this is testing whether cp is a null pointer

	//Exercise 4.10
	Write the condition for a while loop that would read ints
		from the standard inputand stop when the value read is equal to 42.

		int input;
	cin >> input;
	while (input != 42)
		cin >> input;
}

