#include <iostream>
using namespace std ;

class student
{
private:

int x ;
int y ;

public :

void getdata()
{
cout << "Enter the value of x : " ; cin >> x ;
cout << "Enter the value of y : " ; cin >> y ;
}

void putdata()
{
cout << "Your value of x = " << x << endl;
cout << "Your value of y = " << y << endl;
}
};


int main()
{
student s1 ;

s1.getdata() ;
s1.putdata() ;

return 0;
}
