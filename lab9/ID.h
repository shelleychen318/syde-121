#ifndef ID_H //1
#define ID_H //2

class ID
{
public:
    ID();
    ID(int, int, int);
    void display();

private:
    int left;
    int middle;
    int right;
};

#endif