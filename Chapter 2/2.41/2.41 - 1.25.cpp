/*
 * Exercise 2.42: Write your own version of the Sales_data.h header and use it
 * to rewrite the exercise from § 2.6.2 (p. 76).
 *
 * Exercise 1.25: Using the Sales_item.h header from the Web site, compile and
 * execute the bookstore program presented in this section.
 *
*/

#include <iostream>
#include "Sales_data.h"

int main() {
	Sales_data total;
	double price, averagePrice = 0.0;

	if (std::cin >> total.bookNo >> total.units_sold >> price) {
		Sales_data trans;
		if (trans.bookNo == total.bookNo) {
			total.
		}


	}
}