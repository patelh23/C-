#include <iostream>
#include "ExampleHeader.h"

int main()
{
	/* Section 2.3
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl; //32
	std::cout << u - u2 << std::endl; //4294967264

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; //32
	std::cout << i - i2 << std::endl; //-32

	std::cout << i - u << std::endl; //0
	std::cout << u - i << std::endl; //0


	// Section 2.4
	The guesses are correct if the bool returns 1 because you are subtracting the same number
	unsigned u = 10, u2 = 42;
	std::cout << ((u2 - u)-32==0) << std::endl;
	std::cout << ((u - u2)-(pow(2,32)-32)==0) << std::endl;
	int i = 10, i2 = 42;
	std::cout << (i2 - i - 32 == 0) << std::endl;
	std::cout << (i - i2 + 32 == 0) << std::endl;
	std::cout << (i - u == 0) << std::endl;
	std::cout << (u - i == 0) << std::endl;

	//Section 2.5
	(a)'a', L'a', "a", L"a" char, wchar_t(wide char), string, long string
	(b) 10, 10u, 10L, 10uL, 012, 0xC int, unsigned int, long, unsigned long, octal, hex
	(c) 3.14, 3.14f, 3.14L double, float, long double,
		(d)10, 10u, 10., 10e-2 int, unsigned int, double, double

	//Section 2.6
	int month = 9, day = 7; this is a bad use of memory, a short
	int month = 09, day = 07; this is invalid because octal

	//Section 2.7


	std::cout << "Who goes with F\145rgus ? \012" << std::endl; //"Fergus" string
	std::cout << 3.14e1L; // long double
	std::cout << 1024f; // float not found
	std::cout << 3.14L; // long double

	//Section 2.8
	std::cout << "\062\x4d\n\062\t\x4d\n";

	//Section 2.9
	(a) std::cin >> int input_value;  //illegal value must be initialized before assigning cin its value
	(b) int i = { 3.14 };  //illegal because you type convert a double to an int with data loss
	(c) double salary = wage = 9999.99;  //
	(d) int i = 3.14;

	//Section 2.12
	(a) int double = 3.14;  //invalid
	(b) int _;              //valid
	(c) int catch-22;       //invalid
	(d) int 1_or_2 = 1;     //invalid
	(e) double Double = 3.14;   //valid

	//Section 2.13
	int i = 42;
	int main()
	{
		int i = 100; int j = i;
	}                                    //j is 100

	//Section 2.14

	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl; // It will print 100 45..Legal
	
	//Section 2.15
	(a) int ival = 1.01;      // this no make sense. is double 
	(b) int &rval1 = 1.01;    // reference must be initialized by object
	(c) int &rval2 = ival;    // valid
	(d) int &rval3;           // invalid same as b

	//Section 2.16
	int i = 0, &r1 = i; double d = 0, &r2 = d;   
	(a) r2 = 3.14159;         // d is 3.14159                    
	(b) r2 = r1;              // d equals i
	(c) i = r2;				  // double to int	
	(d) r1 = d;               // double to int

	//Section 2.17

	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl; // it will print 10 10
	
	//Section 2.18

	double obj = 3.14, *pd = &obj;
	std::cout << "Pointer pd has value " << *pd << " and address: " << pd << std::endl;
	*pd = 45.0; 
	std::cout << "Pointer pd has value " << *pd << " and address: " << pd << std::endl;
	++pd; 
	std::cout << "Pointer pd has value " << *pd << " and address: " << pd << std::endl;
	
	//Section 2.19
	Pointers are objects which contain the address of the object it points to
	References are not objects and only reference the value of the object but can affect the original value

	//Section 2.20
	
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1;   
	std::cout << "Pointer p1 has value " << *p1 << " and address: " << p1 << std::endl;
	std::cout << "i has value " << i << " and address: " << &i << std::endl;
	//this program changes the value of pointer p1 to 42*42 which is 1764

	
	// Section 2.21
	int i = 0;

	(a) double* dp = &i;   // this is illegal because the asterisk is incorrectly placed
	(b) int* ip = i;	   // this is illegal because you need to a initiliaze to memory address	
	(c) int* p = &i;	   // yes this is pointing to address of i	

	//Section 2.22

	if (p) // checks the memory address, if its 0 then its nullptr
	if (*p) // if the value of variable is 0, then its false

	//Section 2.23

	You cannot determine whether p points to a valid object without looking at the initializing of the object. 
	
	//Section 2.24

	int i = 42; void *p = &i; long *lp = &i;
	void pointers can point to any object, long pointers can only point to long not int

	//Section 2.25
	(a) int* ip, &r = ip; legal declaration of pointer
	(b) int i, *ip = 0;   ip is a null pointer and i is an into with 0 value 
	(c) int* ip, ip2;     legal declaration of both pointers
	

	//Section 2.26
	(a) const int buf;    //illegal const variables must be initialized
	(b) int cnt = 0;	  //legal initializtion	
	(c) const int sz = cnt;  // legal initialization of const
	(d) ++cnt; ++sz;         // illegal for modifying const sz, but legal for incrementing cnt 

	
	//Section 2.27
	Exercise 2.27: Which of the following initializations are legal? Explain why.
	(a) int i = -1, &r = 0;    //illegal. a reference has to be initialized to an object not a literal. You can initialize to a literal using const
	(b) int *const p2 = &i2;   //legal. this is a const pointer to an int which points to address of i2
	(c) const int i = -1, &r = 0;  // legal for i which is a const int of value -1, legal for const int r reference to literal since const is used
	(d) const int *const p3 = &i2; // legal p3 is a const which points to an int which is const to address of i2. i2 has to be an int
	(e) const int *p1 = &i2;       // legal p1 is a pointer to an int which is const to address of i2
	(f) const int &const r2;	   // illegal this syntax requires a definition 
	(g) const int i2 = i, &r = i;  // legal i2 is a const int which equals i, r is a reference int which is const to i
	
	
	//Section 2.28
	(a) int i, * const cp;  // i is declared, illegal for const cp to be declared without initialized 
	(b) int* p1, * const p2;    //p1 is int pointer that is declared but not initialized (legal), const p2 needs to be initialized
	(c) const int ic, & r = ic;   //const int variable needs extern or initialized
	(d) const int* const p3;    //same as 2
	(e) const int* p;			 //this is allowed

	//Section 2.29
	Using the variables in the previous exercise, which of the
	following assignments are legal ? Explain why.
	(a)i = ic;        // legal i will equal a const int
	(b)p1 = p3;		  // illegal because the type of int is different in both pointers	
	(c)p1 = &ic;	  // illegal you cannot put the address of a const into into a pointer that refers to a modifiable int
	(d)p3 = &ic;	  // illegal you cannot assign const pointer when it hasn't properly been initialized but even then you cannot assign if it was properly initialized.
	(e)p2 = p1;		  // illegal p2 wasn't initialized but you cannot assign to it
	(f)ic = *p3;      // illegal ic is a const that isn't initialized and can't be assigned

	//Section 2.30
	const int v2 = 0; int v1 = v2;   //v2 top-level const,v1 nothing
	int *p1 = &v1, &r1 = v1;		 //p1 no level, r1 no level 
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;   //p2 low-level, p3 top and low level, r2 low-level
	
	//Section 2.31
	r1 = v2;   legal, references a top-level const int 
	p1 = p2;   illegal, you cannot copy a low-level const such as p2 without p1 being low-level 
	p2 = p1;   legal, p1 can be copied into the low-level p2
	p1 = p3;   illegal, the low-level const of p3 cannot be copied into nonconst p1	
	p2 = p3;   legal, the low-level const requirement is matched and top-level const is ignored
	
	//Section 2.32
	int null = 0, *p = null; //illegal because p points to an integer value rather than address
	
	
	*/

	int x = 5;
	int* p1 = &x;
	const int* p2 = p1;
	std::cout << p2 << std::endl;
	x++;
	std::cout << p2 << std::endl;
	std::cout << *p2 << std::endl;
	int null = 0, * p = null;
	

}