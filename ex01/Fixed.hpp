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
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt(void) const;
        // std::ostream& operator<<(std::ostream &o);
        // Fixed ostream &operator<<(ostream &out, const Complex &c);
    };
    std::ostream &operator<<(std::ostream &out, const Fixed &c);


# endif