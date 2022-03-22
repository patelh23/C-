#include <iostream>
using namespace std;
#include <string>

/*Exercise 3.1
int main()
{
	int sum = 0, val = 1;
	// keep executing the while as long as val is less than or equal to 10
	while (val <= 10) {
		sum += val; // assigns sum + val to sum
		++val; // add 1 to val
	} cout << "Using namespace std" << endl;
}

int main()
{
	string line;
	// read input a line at a time until end-of-file
	while (cin >> line) {
		auto len = line.size();
		cout << line << len << endl;
		return 0;
	}
}
//Section 3.2

int main()
{
	string line;
	// read input a line at a time until end-of-file
	while (getline(cin, line)){
	cout << line << endl;
	return 0;
	}
}


//Section 3.3
White spaces end the string input
In the getLine function, it will collect all the spaces


//Section 3.4
int main() {
	string word1;
	string word2;
	std::cin >> word1 >> word2;
	if (word1 == word2)
		std::cout << "These words are equal" << std::endl;
	else
		cout << ((word1.size() > word2.size())
			? "Word 1 is bigger"
			: "Word 2 is bigger") << std::endl

//Section 3.5
int main() {
	string word1, word2;
	while (std::cin >> word1) {
		if (word2.empty())
			word2 = word1;
		else
		word2 = word2 + " " + word1;
	}
	std::cout << word2 << std::endl;
}



//Section 3.6
Use a range for to change all the characters in a string to
X.

int main() {
	string s;
	std::cin >> s;
	decltype(s.size()) index = 0;
	for (auto &c : s) // for every char in s
		c = 'X';
	cout << s << endl;
}

//Section 3.7
int main() {
	std::string s;
	if (std::cin >> s) {
		for (char c : s)
			c = 'X';  // will not change s
	}
	std::cout << s << std::endl;
	return 0;
}
// It still works using a char reference. However, if it is nonreference char, then
// the string will not be transformed to Xs

//Section 3.8

int main() {
	std::string s;
	if (std::cin >> s) {
		int index = 0;
		while (index < s.size()) {
			std::cout << 'X';
			++index;
		}
	}

//Section 3.9
int main (){
	string s = "howareyou";
	cout << s[0] << endl;
	//The following program prints out the first letter of the string.
	//Yes, it is valid.

//Solution 3.10
int main() {
	string s;
	std::cin >> s;
	for (const auto& c : s) {
		if (!ispunct(c))
			std::cout << c;

	}
}

//Exercise 3.11: Is the following range for legal ? If so, what is the type of c ?
int main() {
	const string s = "Keep out!";
	for (auto& c : s) {
		std::cout << c;
	}
}
//c is a reference to the current index of s (char reference)

//Exercise 3.12: Which, if any, of the following vector definitions are in
error ? For those that are legal, explain what the definition does.For those
that are not legal, explain why they are illegal.
(a)vector<vector<int>> ivec;     //this defines a vector of vector elements of type int
(b)vector<string> svec = ivec;   // this is in error because you cannot initialize int vector to string svec
(c)vector<string> svec(10, "null");  //this will define svec a vector of 10 elements type string

int main() {
	vector<string> svec(10, "null");
	for (auto& c : svec) {
		std::cout << c;
	}
}
//Exercise 3.13
(a) vector<int> v1;               //empty vector with no values
(b) vector<int> v2(10);			  //vector with 10 elements, all at 0. 0000000000
(c) vector<int> v3(10, 42);       //vector with 10 elements, all at 42
(d) vector<int> v4{10};			  //vector with 1 element, value of 10
(e) vector<int> v5{10, 42};       //vector with 2 elements, value of 42
(f) vector<string> v6{10};        //vector with 10 elements with empty string
(g) vector<string> v7{10, "hi"};  //vector with 10 elements with "hi"


//Exercise 3.14
int main() {
	vector<int> v2; // empty vector
	int input;
	while (std::cin >> input) {
		v2.push_back(input);
	}
	for (auto& c : v2)
		std::cout << c;

}

//Exercise 3.15
int main() {
	vector<string> v2; // empty string vector
	string input;
	while (std::cin >> input) {
		v2.push_back(input);
	}
	for (auto& c : v2)
		std::cout << c; // to print the vector elements

//Exercise 3.16
int main() {
	vector<int> v1;               //empty vector with no values
	vector<int> v2(10);			  //vector with 10 elements, all at 0. 0000000000
	vector<int> v3(10, 42);       //vector with 10 elements, all at 42
	vector<int> v4{ 10 };			  //vector with 1 element, value of 10
	vector<int> v5{ 10, 42 };       //vector with 2 elements, value of 42
	vector<string> v6{ 10 };        //vector with 10 elements with empty string
	vector<string> v7{ 10, "hi" };

	for (auto& c : v7) {
		std::cout << c;

	}
	std::cout << "  size is: " << v7.size() << std::endl;

//Exercise 3.17
int main() {
	string input;
	int counter;
	vector<string> v1;
	while (std::cin >> input) {
		for (auto& c : input)
			c = toupper(c);
		v1.push_back(input);

	}
	counter = 0;
	for (auto& word : v1) {
		std::cout << word << " ";
		counter += 1;
		if (counter % 8 == 0) {
			std::cout << "\n";
		}
	}
}

//Exercise 3.18: Is the following program legal ? If not, how might you fix it ?
int main() {
	vector<int> ivec;
	ivec[0] = 42;

	for (auto& c : ivec) {
		std::cout << c << std::endl;
	}
	//this is illegal since ivec is an empty vector. You can fix this by declaring ivec a size of 1. iven(1)
	      
//Exercise 3.19: List three ways to define a vector and give it ten elements,
//each with the value 42. Indicate whether there is a preferred way to do so
//and why
int main(){
	vector<int> ivec(10, 42);
	vector<int> ivec{ 42,42,42,42,42,42,42,42,42,42 };
	vector<int> ivec;
	for (decltype (ivec.size()) i = 0; i < 10; ++i)
		ivec.push_back(42);
	for (auto& c : ivec) {
		std::cout << c << std::endl;
	}
//the first method involving (10,42) is most concise and preferred.
}

//Exercise 3.20: Read a set of integers into a vector.Print the sum of each
//pair of adjacent elements.Change your program so that it prints the sum of
//the first and last elements, followed by the sum of the secondand second - tolast, and so on.
int main() {
	vector<int> input;
	int currentNum,counter,sum;
	while (std::cin >> currentNum) {
		input.push_back(currentNum);
	}
	for (decltype(input.size()) i = 0; i <= input.size()-1; i = i + 2) {
		sum = input[i] + input[i + 1];
		std::cout << sum;
	}
}

int main() {
	vector<int> input;
	int currentNum, counter, sum;
	while (std::cin >> currentNum) {
		input.push_back(currentNum);
	}
	for (decltype(input.size()) i = 0; i <= ((input.size() - 1)/2); ++i) {
		sum = input[i] + input[input.size()-1-i];
		std::cout << sum;
	}
}
*/
//Exercise 3.21
int main() {

	//(a)vector<int> v1;               //empty vector with no values
	//(b)vector<int> v2(10);			  //vector with 10 elements, all at 0. 0000000000
	//(c)vector<int> v3(10, 42);       //vector with 10 elements, all at 42
	//(d)vector<int> v4{ 10 };			  //vector with 1 element, value of 10
	//(e)vector<int> v5{ 10, 42 };       //vector with 2 elements, value of 42
	//(f)vector<string> v6{ 10 };        //vector with 10 elements with empty string
	//(g)vector<string> v7{ 10, "hi" };

	vector<int> v1;
	std::cout << "The size of v1 is: " << v1.size() << std::endl;
	for (auto b = v1.begin(); b != v1.end(); b++) {
		std::cout << " and the value is " << *b;
	}

	vector<int> v2(10);
	std::cout << "The size of v2: " << v2.size() << " and the value: ";
	for (auto b = v2.begin(); b != v2.end(); b++) {
		std::cout << *b;
	}

	vector<int> v3(10, 42);
	std::cout << "\nThe size of v3: " << v3.size() << " and the value: ";
	for (auto b = v3.begin(); b != v3.end(); b++) {
		std::cout << *b;
	}
}

//Exercise 3.22
int main() {
	vector<string> text = { "hello my name is gustavo, but you can call me sus.","","I'm starting to think that we have an imposter amungus." };
	for (auto it = text
		.begin(); it != text.end() && !it->empty(); ++it) {
		for (auto& letter : *it) {
			letter = toupper(letter);
		}
		cout << *it << endl;
	}
}


//Exercise 3.23
int main() {
	vector<int> list1 = { 1,2,3,4,5,6,7,8,9,10 };

	for (auto it = list1.begin(); it != list1.end(); ++it) {
		*it = 2 * *it;
		cout << *it << " ";
	}
}

//Exercise 3.24
int main() {

	vector<int> input;
	int currentNum;
	while (std::cin >> currentNum) {
		input.push_back(currentNum);
	}
	cout << "The vector is:";
	for (auto i : input)
		cout << ' ' << i;
	cout << '\n';
	//for (auto it = input.begin() + 1; it != input.end(); it++) {
	//	cout << *it + *(it - 1) << endl;
	//}
	auto beg = input.begin();
	auto end = input.end() - 1;
	while (beg < end) {
		cout << *beg++ + *end-- << endl;
	}

}
//Exercise 3.25
int main() {
	vector<int> scores(11, 0);
	int grade;
	auto beg = scores.begin();
	while (cin >> grade) {
		if (grade <= 100) {
			++* (beg + (grade / 10));
		}
	}
	for (auto i : scores)
		cout << i;
}

//Exercise 3.26
Because the result of adding two iterators is undefined.
Subtracting two iterators will give a distance in the form of an integral number.

//Exercise 3.27
a.error because ia is not a const expression
b. this is legal, subscript is a constexpr evaluated at compile - time
c.illegal, cannot call a non - constexpr function
d.illegal, because the size does not account for the null character at the end

//Exerise 3.28
int main()
{
		sa is default initialized string(empty strings).
		ia is default initialized int with value of 0 (global variables) but the console shows other numbers
		sa2 is default initialized strings(empty strings).
		ia2 is default initialized int whose values are undefined(local variable)

		for (auto i : ia)
		std::cout << &i << "";

}
//Exercise 3.29
 An array is fixed and cannot change size. An array  cannot be initialized as a copy of another array.
 It's also illegal to assign one array to another.'

//Exercise 3.30
int main() {
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size; ++ix)
		ia[ix] = ix;
}
 The indexing error is the for loop starts with 1 instead of 0(the true first element) and the
 loop runs until equal to array_size which is 10. The last element in this array is 9.

//Exercise 3.31

int main() {
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 0; ix < array_size; ++ix)
		ia[ix] = ix;
	for (auto i : ia)
		std::cout << i << " ";
}
//Why do they use ++ix instead of ix++

//Exercise 3.32

int main() {
	//Copy Arrays
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 0; ix < array_size; ++ix)
		ia[ix] = ix;
	constexpr size_t array_size2 = array_size;
	int ia2[array_size2];
	for (size_t ix2 = 0; ix2 < array_size2; ++ix2)
		ia2[ix2] = ia[ix2];
	for (auto i : ia2)
		std::cout << i << " ";

	//Copy Vectors
	std::vector<int> ivec1;
	for (decltype(ivec1.size()) ix = 0; ix < array_size; ++ix)
		ivec1.push_back(ix);
	std::vector<int> ivec2(ivec1);
	for (auto i : ivec2)
		std::cout << i << " ";
}
//Exercise 3.33

int main() {
	unsigned scores[11]; // 11 buckets, all value initialized to 0
	unsigned grade;
	while (std::cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10]; // increment the counter for the current cluster
	}

	for (auto i : scores)
		std::cout << i << " ";

	if the array was not initialized, the default values would be 3435973836 3435973836
	3435973836 3435973836 3435973836 3435973836 3435973836 3435973836 3435973836 3435973836 3435973836
	which is 0-1 which gives the highest number for an unsigned int??

	This might have something to do with pointers where it points to memory address.

	In C++ pointers and arrays are closely intertwined. In particular, as we’ll see, when
	we use an array, the compiler ordinarily converts the array to a pointer.
}
*/
//Exercise 3.34
