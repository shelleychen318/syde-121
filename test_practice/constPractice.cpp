// constant_member_function.cpp
class Node
{
public:
   Node( int mn, int dy, int yr );
   int getMonth() const;     // A read-only function
   void setMonth( int mn );   // A write function; can't be const
private:
   int month;
};

int Node::getMonth() const
{
   return month;        // Doesn't modify anything
}
void Node::setMonth( int mn )
{
   month = mn;          // Modifies data member
}
int main()
{
   Node MyDate( 7, 4, 1998 );
   const Node BirthDate( 1, 18, 1953 );
   MyDate.setMonth( 4 );    // Okay since MyDate is not const
   BirthDate.getMonth();    // Okay
//    BirthDate.setMonth( 4 ); //  Error since Birthdate is a const object
}