/*
 * Exercise 2.42: Write your own version of the Sales_data.h header and use it
 * to rewrite the exercise from § 2.6.2 (p. 76).
 *
 * Exercise 1.23: Write a program that reads several transactions and counts
 * how many transactions occur for each ISBN.
 *
*/
#include <iostream>
#include "Sales_data.h"

int main() {
	Sales_data currTrans, previousTrans;
	double price = 0.0;
	unsigned short transcount = 1;

	if (!(std::cin >> previousTrans.bookNo >> previousTrans.units_sold >> price)) {
		std::cerr << "Invalid input";
		return -1;
	};


	while (std::cin >> currTrans.bookNo >> currTrans.units_sold >> price) {
		if (currTrans.bookNo == previousTrans.bookNo) {
			++transcount;
		}
		else if (currTrans.bookNo != previousTrans.bookNo) {
			std::cout << "ISBN: " << previousTrans.bookNo << " had " << transcount << " transactions" << std::endl;
			previousTrans.bookNo = currTrans.bookNo;
			transcount = 1;
		}

	}
	std::cout << "ISBN: " << previousTrans.bookNo << " had " << transcount << " transactions" << std::endl;
}