#include <iostream>
using namespace std;

class Area
{
    string units;
    float area_volume;

    public:
        Area(float area_in, string units_in);
        void print_results();

};

Area::Area(float area_in, string units_in)
{
    area_volume = area_in;
    units = units_in;
}

void Area::print_results()
{
    cout << "half the area: " << (area_volume/2) << units << endl;
    cout << "quarter of the area: " << (area_volume/4) << units << endl;
}

int main ()
{
    float myInt;
    string myUnits;

    Area *myArea;

    cout << "Enter an integer: ";
    cin >> myInt;
    cout << "Enter units: ";
    cin >> myUnits;

    myArea = new Area (myInt, myUnits);

    myArea->print_results();

    delete myArea;        

   return 0;
}
