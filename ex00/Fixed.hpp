# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class   Fixed {
    private :
        int Number;
        int NFB;
    public :
        Fixed();
        Fixed(const Fixed &object);
        Fixed& operator=(const Fixed &object);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

# endif