#include <iostream>
#include "Sales_data.h"

/*
 * Exercise 2.41: Use your Sales_data class to rewrite the exercises in § 1.5.1
 * (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your
 * Sales_data class in the same file as your main function.
 *
 * Exercise 1.21: Write a program that reads two Sales_item objects that have the
 * same ISBN and produces their sum.
 *
*/

int main() {
	Sales_data item1, item2;
	double price = 0.0;
	std::cin >> item1.bookNo >> item1.units_sold >> price;
	item1.revenue = item1.units_sold * price;
	std::cin >> item2.bookNo >> item2.units_sold >> price;
	item2.revenue = item2.units_sold * price;

	if (item1.bookNo != item2.bookNo) {
		std::cerr << "IBSN mismatch";
		return -1;
	}

	unsigned totalCnt = item1.units_sold + item2.units_sold;
	double totalRevenue = item1.revenue + item2.revenue;
	// print ISBN, total sold, total revenue, average price per book
	std::cout << item1.bookNo << " " << totalCnt
		<< " " << totalRevenue << " ";
	if (totalCnt != 0)
		std::cout << totalRevenue / totalCnt << std::endl;
	else
		std::cout << "(no sales)" << std::endl;
	return 0; //indicate success
}
