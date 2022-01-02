#include <iostream>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold;
	double revenue = 0.0;
};

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
