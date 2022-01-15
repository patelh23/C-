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
(a)vector<int> v1;               //empty vector with no values
(b)vector<int> v2(10);			  //vector with 10 elements, all at 0. 0000000000
(c)vector<int> v3(10, 42);       //vector with 10 elements, all at 42
(d)vector<int> v4{ 10 };			  //vector with 1 element, value of 10
(e)vector<int> v5{ 10, 42 };       //vector with 2 elements, value of 42
(f)vector<string> v6{ 10 };        //vector with 10 elements, empty string
(g)vector<string> v7{ 10, "hi" };  //vector with 10 elements, "hi" string

//Exercise 3.13
int main() {

	vector<int> v4{ 10,42 };
	for (auto& c : v4) {
		std::cout << c;
	}
}
*/