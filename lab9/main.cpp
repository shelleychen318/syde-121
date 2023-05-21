#include <iostream>
#include "employee.h"
#include "hourlyemployee.h"
using namespace std;
using namespace savitchemployees;

// #include "salariedemployee.h"

int main()
{
    // HourlyEmployee em;
    // em.give_raise();

    Employee jane_e;
    HourlyEmployee sally_h;

    jane_e.print_check(); // uses function from Employee class
    sally_h.print_check( ); // uses function from HourlyEmployee class
    sally_h.Employee::print_check( ); // child class uses parent class function

    


    return 0;
}