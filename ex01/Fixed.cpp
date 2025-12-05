# include "Fixed.hpp"

Fixed::Fixed()
{
    this->Number = 0;
    std :: cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &object)
{
    std::cout << "Copy assignment operator called";
    // here you need to check if, example :
    // Fixed a()
    // a = a
    if(this != &object)
        this->Number = object.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed &object)
{
    this->Number = object.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->Number);
}

void    Fixed::setRawBits(int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->Number = raw;
}

void    print(int b)
{
    if (b > 2)
    print (b / 2);
    std::cout << b % 2;
}

// int constructor (from int to Fixed point) : shift left with 8 bits 
Fixed::Fixed(int const value)
{
    this->Number = value << this->NFB;
}
// same as int 
// but you cannot shift a float !!!
// so we shift left a 1 then multiply by the value (* 256)
// and we use roundf() from <cmath> 
// 1.5 became 1 
// and 1.6 became 2
Fixed::Fixed(float const value)
{
    this->Number = roundf(value * (1 << this->NFB));
}


//From Fixed point to int :shift right with 8 bits 
int Fixed::toInt(void) const
{
    return (this->Number >> this->NFB);
}
// same as int 
// but you cannot shift a float !!!
// so we shift left a 1 then divide it by the value (/ 256)
float   Fixed::toFloat(void) const
{
    float num;
    
    num = (float)this->Number / (float)(1 << this->NFB);
    return (num);
}

std::ostream& operator << (std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return (o);
}
