#ifndef Sales_data_H
#define Sales_data_H
#include <string>
struct Sales_data {
	std::string bookNo; 
	unsigned units_sold = 0; 
	double revenue = 0.0;
};
#endif

