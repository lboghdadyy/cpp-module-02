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
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt(void) const;
        static Fixed& min(const Fixed& obj, const Fixed& obj2);
        static int& min(const int& obj, const int& obj2);
};

std::ostream& operator << (std::ostream &o, Fixed const &fixed);

# endif