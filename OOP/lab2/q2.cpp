/*
2. Write a C++ function called calculateDiscountedPrice that calculates the
discounted price of an item. The function should have two parameters: price
(representing the original price) and discountPercentage (with a default value
of 10%). The function should return the calculated discounted price.
In the main function, prompt the user to enter the original price of an item.
Then, call the calculateDiscountedPrice function twice: once with the default
discount percentage and once with a specific discount percentage entered by
the user. Finally, print the original price and the two discounted prices.
*/
#include <iostream>

using namespace std;

double calculateDiscountedPrice(double price, double discountPercentage = 10.0) {
    return price * (1 - discountPercentage / 100.0);
}

int main() {
    double orgprice;
    cout << "Enter the original price of the item: ";
    cin >> orgprice;
    double discountPercentage;
    cout << "Enter a specific discount percentage: ";
    cin >> discountPercentage;

    double discountedPriceWithDefaultDiscount = calculateDiscountedPrice(orgprice);
    double discountedPriceWithSpecificDiscount = calculateDiscountedPrice(orgprice, discountPercentage);

    cout << endl;
    cout << "Original price: " << orgprice << endl;
    cout << "Discounted price with default discount percentage: " << discountedPriceWithDefaultDiscount << endl;
    cout << "Discounted price with specific discount percentage: " << discountedPriceWithSpecificDiscount << endl;

    return 0;
}

/*
OUTPUT:
Enter the original price of the item: 3000
Enter a specific discount percentage: 20

Original price: 3000
Discounted price with default discount percentage: 2700
Discounted price with specific discount percentage: 2400
*/