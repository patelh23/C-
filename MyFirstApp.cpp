// MyFirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    /*
    std::cout << "Enter the two numbers you would like summed" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;


    std::cout << "Please enter 2 integers" << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    while (num1 <= num2)
    {
        std::cout << num1 << std::endl;
        ++num1;
    }
    //std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    
    int sum = 0;
    int val2 = 1;
    for (int val = sum; val2 <= 10; ++val2) 
    {
    sum += val2;
    std::cout << sum;
    std::cout << val;
    std::cout << val2 << std::endl;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl; return 0;
    

    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << sum;
    
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
        std::cout << sum;
        
    
    int low, high;
    std::cin >> low >> high;
   
    for (int i = low; i <= high; ++i)
        std::cout << i << std::endl;
    
    int numberToGuess = 0;
    std::cout << "Enter integer" << std::endl;
    std::cin >> numberToGuess;
    system("cls");
    int i =0,guess = 1;
    while (i <= 10 && guess != numberToGuess)
    {
        std::cout << "Enter guess #" << i << std::endl;
        std::cin >> guess;

        ++i;
    }
    std::cout << "Yes the number " << guess << " is correct" << std::endl;
        return 0;
        

    int sum = 0, value = 0;
    // read until end-of-file, calculating a running total of all values read
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;

    
    int low = 0, high = 0;
    std::cin >> low >> high;
        if (low <= high) 
        {
            for (int i = low; i <= high; ++i) 
            {
            std::cout << low << std::endl;
            ++low;
            }
        }
        else {
            
            while (high <= low)
            {
                std::cout << "The first number was" << low << " Enter a valid higher 2nd number :" << std::endl;
                std::cin >> high;
            }
            for (int i = low; i <= high; ++i) 
            {
                std::cout << low << std::endl;
                ++low;
            }
        }
        
    
Sales_item book;

while (std::cin >> book)
std::cout << book << std::endl;



Sales_item book1, book2;

std::cin >> book1 >> book2;
std::cout << book1 + book2 << std::endl;



Sales_item book, total;

while (std::cin >> book)
{
    total += book;
}
std::cout << total << std::endl;


int transcount = 0;
Sales_item item1, item2;

while (std::cin >> item1)
{   
    if (item1.isbn() == item2.isbn() || item2.isbn() == "")
    {        
        ++transcount;
    }
    else
    {
        std::cout << "ISBN: " << item2.isbn() << " has " << transcount << " transactions" << std::endl;
        transcount = 1;
    }
    item2 = item1;
}
*/


Sales_item total; // variable to hold data for the next transaction
// read the first transaction and ensure that there are data to process
if (std::cin >> total) {
    Sales_item trans; // variable to hold the running sum
    // read and process the remaining transactions
    while (std::cin >> trans) {
        // if we're still processing the same book
        if (total.isbn() == trans.isbn())
            total += trans; // update the running total
        else {
            // print results for the previous book
            std::cout << "  " << total << std::endl;
            total = trans; // total now refers to the next book
        }
    }
    std::cout << total << std::endl; // print the last transaction
}
else {
    // no input! warn the user
    std::cerr << "No data?!";
    std::cout << "lets see";
    return -1; // indicate failure
}
    return 0;

}

