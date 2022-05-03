#include <iostream>
using namespace std;
#include <string>

//Exercise 4.1: What is the value returned by 5 + 10 * 20 / 2 ?
This will be executed like 5 + ((10 * 20) / 2)
so it will be 200 / 2 = 100 + 5 = 105

//Exercise 4.2
a. * (vec.begin())
b. (*(vec.begin())) + 1 //member (.) first then begin() call then dereference then add 1

//Exercise 4.3
Order of evaluation for most of the binary operators is left
undefined to give the compiler opportunities for optimization.This strategy
presents a trade - off between efficient code generation and potential pitfalls in
the use of the language by the programmer.Do you consider that an
acceptable trade - off ? Why or why not?
//It is acceptable trade-off because a good programmer can utilize this optimization.
//Potential pitfalls can be fixed with static code analysis and other due diligence.