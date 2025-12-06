# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include  <cmath>

class   Fixed {
    private :
        int Number;
        static const int NFB = 8 ;
    public :
        Fixed();
        Fixed(const Fixed &object);
        Fixed(int const value);
        Fixed(float const value);
        Fixed& operator=(const Fixed &object);
        bool    operator>(const Fixed &object);
        bool    operator<(const Fixed &object);
        bool    operator>=(const Fixed &object);
        bool    operator<=(const Fixed &object);
        bool    operator!=(const Fixed &object);
        bool    operator==(const Fixed &object);
        Fixed   operator+(const Fixed &object);
        Fixed   operator-(const Fixed &object);
        Fixed   operator/(const Fixed &object);
        Fixed   operator*(const Fixed &object);
        Fixed   operator++();
        Fixed   operator++(int);
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt(void) const;
        static const Fixed& min(const Fixed& obj, const Fixed& obj2);
        static Fixed& min(Fixed& obj, Fixed& obj2);
        static const Fixed& max(const Fixed& obj, const Fixed& obj2);
        static Fixed& max(Fixed& obj, Fixed& obj2);
};

std::ostream& operator << (std::ostream &o, Fixed const &fixed);

# endif