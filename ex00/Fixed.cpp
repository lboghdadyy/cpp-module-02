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
