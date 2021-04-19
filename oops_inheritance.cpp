#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int Age;
protected:
    int x;
};

class B : public A
{
public:
    int y;

    int gety() const { return y; }
    void sety(int d) { y = d; }

    int getx() const { return x; }
    void setx(int d) { x = d; }
};

int main()
{
    B obj;

    // compiles cleanly because B::sety/gety are public
    obj.sety(10);
    std::cout << "SET Y (Public member of derived class accessed directly through object of derived class): " << obj.gety() << '\n';

    // compiles cleanly because B::setx/getx are public, even though
    // they touch A::x which is protected
    obj.setx(42);
    std::cout << "SET X (Protected member of base class accessed through method of object of derived class): " << obj.getx() << '\n';

    // compiles cleanly because B::y is public
    obj.y = 20;
    std::cout << "Y (Public member of object accessed directly): " << obj.y << '\n';

    obj.Age = 18;
    std::cout<< "Age (Public member of Base class accessed directly through object of derived class without requirement of any method): " << obj.Age << '\n';

    // compilation errors because A::x is protected
    //obj.x = 84;
    //std::cout << obj.x << '\n';
}
