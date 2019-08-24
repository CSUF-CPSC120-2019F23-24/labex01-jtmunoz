// This program calculates the user's pay.

#include <iostream>

int main()
{
  double candybars, rate, pay;

  std::cout << "Welcome to Jordan's Earning Calculator ";

  // Get the number of hours worked.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> candybars;
  std::cout << "How many hours did you work? " << candybars << std::endl;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> rate;
  std::cout << "How much does the organization earn for each bar sold? " << rate << std::endl;

  // Calculate the pay.
  pay = candybars * rate;

  // Display the pay.
  std::cout << "Congratulations! You have earned $" << pay << " for the organization!" << std::endl;

  return 0;
}
