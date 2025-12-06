# ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const Point& obj);
        Point(float obj1, float obj2);
        Point& operator=(const Point& point);
        ~Point();
};

# endif