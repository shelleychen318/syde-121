#include <iostream>
using namespace std;

 // forward declaration
 // classes are pre-defined before its use so that it can be called and used by other classes that are defined before this
class Girl;
class Boy;

class Girl
{
    int age;
    public:
        void setAge(int age_in)
        {
            age = age_in;
        }
    
    friend void older(Girl, Boy); // declare friend function 
};

class Boy
{
    int age;

    public:
        void setAge(int age_in)
        {
            age = age_in;
        }
    
    friend void older(Girl, Boy); // declare friend function
};

void older(Girl girl_in, Boy boy_in)
{
    if(girl_in.age > boy_in.age)
    {
        cout << "the girl is older" << endl;
    }
    else if (girl_in.age < boy_in.age)
    {
        cout << "the boy is older" << endl;
    }
    else
    {
        cout << "they are the same age" << endl;
    }
}

int main ()
{
    Girl Shelley;
    Boy Kevin;
    Shelley.setAge(18);
    Kevin.setAge(19);
    older(Shelley, Kevin);
}