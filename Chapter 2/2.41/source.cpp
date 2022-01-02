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


}
