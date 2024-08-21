#ifndef ORCHESTRA_H  
#define ORCHESTRA_H  

#include <vector>  
#include <string>  
#include "Musician.h"  

class Orchestra {
private:
    std::vector<Musician> members;
    int maxSize;

public:
    Orchestra();
    Orchestra(int size);

    int get_current_number_of_members() const;
    bool has_instrument(std::string instrument) const;
    Musician* get_members(); 
    bool add_musician(Musician new_musician);
    ~Orchestra();
};

#endif
