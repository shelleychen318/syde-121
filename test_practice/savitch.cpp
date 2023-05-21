#include <iostream>
using namespace std;

namespace savitch1
{
    void greeting();
}

namespace savitch2
{
    void greeting();
}

int main()
{
    {
        using namespace savitch1;
        greeting();
    }
    {
        using namespace savitch2;
        greeting();
    }
}

namespace savitch1
{
    void greeting()
    {
        cout << "namespace savitch1";
    }
}

namespace savitch2
{
    void greeting()
    {
        cout << "namespace savitch2";
    }
}

