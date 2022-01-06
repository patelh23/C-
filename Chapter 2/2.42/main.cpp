/*
 * Exercise 2.41: Use your Sales_data class to rewrite the exercises in § 1.5.1
 * (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your
 * Sales_data class in the same file as your main function.
 *
 * Exercise 1.22: Write a program that reads several transactions for the same
 * ISBN. Write the sum of all the transactions that were read.
 *
*/
#include <iostream>
#include "Sales_data.h"

int main() {
	Sales_data temp;
	unsigned short transcount = 0;
	double price = 0.0;

	if (!(std::cin >> temp.bookNo >> temp.units_sold >> price)) {
		std::cerr << "Invalid data";
		return -1;
	}
	++transcount;
	Sales_data total;
	while (std::cin >> total.bookNo >> total.units_sold >> price) {
		if (total.bookNo != temp.bookNo) {
			std::cerr << "ISBN Mismatch" << std::endl;
			return -1;
		}
		++transcount;
	}
	std::cout << "Number of transactions: " << transcount << std::endl;
	return 0;
}