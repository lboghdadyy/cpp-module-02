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

float   calculate_the_area(Point const a, Point const b, Point const c)
{
    float area = (a.getThex() * (b.getThey() - c.getThey()) \
        + b.getThex() * (c.getThey() - a.getThey()) \
        + c.getThex() * (a.getThey() - b.getThey())) / 2;
    return (area);
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
    float   area_1 = calculate_the_area(a, b, c);
    float   area_2 = calculate_the_area(point, a, b);
    float   area_3 = calculate_the_area(point, b, c);
    float   area_4 = calculate_the_area(point, a, c);

    if (area_4 + area_2 + area_3 == area_1)
        return (true);
    return (false);
}