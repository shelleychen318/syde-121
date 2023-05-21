// P11.cpp - This C++ Program will compute the profit of selling soft drinks

#include <iostream>
using namespace std;
int main()
{
    int cases_per_day, bottles_sold;
    int bottles_per_case = 12;
    double profit_per_bottle = 0.22; // 20 cents per bottle profit
    double profit_per_day, profit_per_year, profit_per_10_years;

    cout << "Press enter after entering each number \n";
    cout << "Enter number of cases \n";
    cin >> cases_per_day; // get number of cases from user
    bottles_sold = cases_per_day * bottles_per_case;
    profit_per_day = cases_per_day * bottles_per_case * profit_per_bottle; // calculate profit per day
    profit_per_year = 365 * profit_per_day; // calculate profit per year
    profit_per_10_years = profit_per_year * 10;
    cout << "The store has sold " << bottles_sold << " bottles\n";
    cout << "The store has a made : " << profit_per_day << " per day. \n";
    cout << "That means the profit for one year will be: " << profit_per_year << endl;
    cout << "The profit for 10 years will be " << profit_per_10_years << endl;
    cout << "Good business?! \n";
    return 0;
}
