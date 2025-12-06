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

Fixed::Fixed(int const value)
{
    this->Number = value << this->NFB;
}

Fixed::Fixed(float const value)
{
    this->Number = roundf(value * (1 << this->NFB));
}

int Fixed::toInt(void) const
{
    return (this->Number >> this->NFB);
}

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

bool Fixed::operator>(const Fixed &object)
{
    float num = toFloat();

    if (num > object.toFloat())
        return (1);
    else
        return (0);    
}

bool Fixed::operator<(const Fixed &object)
{
    float num = toFloat();

    if (num < object.toFloat())
        return (1);
    else
        return (0);    
}

bool Fixed::operator>=(const Fixed &object)
{
    float num = toFloat();

    if (num > object.toFloat() || num == object.toFloat())
        return (1);
    else
        return (0);    
}

bool Fixed::operator<=(const Fixed &object)
{
    float num = toFloat();

    if (num < object.toFloat() || num == object.toFloat())
        return (1);
    else
        return (0);
}

bool Fixed::operator==(const Fixed &object)
{
    float num = toFloat();

    if (num == object.toFloat())
        return (1);
    return (0);
}

bool Fixed::operator!=(const Fixed &object)
{
    float num = toFloat();

    if (num == object.toFloat())
        return (0);
    return (1);
}

Fixed Fixed::operator+(const Fixed &object)
{
    Fixed ret(toFloat() + object.toFloat());
    return (ret);
}

Fixed Fixed::operator-(const Fixed &object)
{
    Fixed ret(toFloat() - object.toFloat());
    return (ret);
}

Fixed Fixed::operator*(const Fixed &object)
{
    Fixed ret(toFloat() * object.toFloat());
    return (ret);
}

Fixed Fixed::operator/(const Fixed &object)
{
    Fixed ret(toFloat() / object.toFloat());
    return (ret);
}

Fixed Fixed::operator++(int)
{
    this->Number++;
    return (*this);
}

Fixed Fixed::operator++()
{
    Fixed tmp(*this);
    this->Number++;
    return (tmp);
}

const Fixed& Fixed::min(const Fixed& obj, const Fixed& obj2)
{
    if (obj.toFloat() > obj2.toFloat())
        return (obj2);
    return (obj);
}
Fixed& Fixed::min(Fixed& obj, Fixed& obj2)
{
    if (obj.toFloat() > obj2.toFloat())
        return (obj2);
    return (obj);
}
const Fixed& Fixed::max(const Fixed& obj, const Fixed& obj2)
{
    if (obj.toFloat() > obj2.toFloat())
        return (obj);
    return (obj2);
}
Fixed& Fixed::max(Fixed& obj, Fixed& obj2)
{
    if (obj.toFloat() > obj2.toFloat())
        return (obj);
    return (obj2);
}