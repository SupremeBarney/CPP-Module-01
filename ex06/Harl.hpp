#ifndef HARL_CLASS
# define HARL_CLASS

#include <iostream>
#include <string>

class Harl
{
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

public:

    Harl( void );
    ~Harl( void );

    void    complain( std::string level );
};



#endif
