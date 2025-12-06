# include "Point.hpp"

const Fixed Point::getThex(void)
{
    return (x);
}

const Fixed Point::getThey(void)
{
    return (y);
}

Point::Point(const Point& obj): x(obj.x), y(obj.y)
{
    std::cout << "copy constructor" << std::endl;
}

Point::Point(): x(0), y(0)
{
    std::cout << "default constructor" << std::endl;
}

Point::~Point()
{
    std::cout << "destructor" << std::endl;
}


Point::Point(float obj1, float obj2) : x(obj1), y(obj2)
{
    std::cout << "paramitrized constructor" << std::endl;
}

Point& Point::operator=(const Point& point){}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    
}