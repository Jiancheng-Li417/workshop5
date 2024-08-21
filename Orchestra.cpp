#include "Orchestra.h"  

Orchestra::Orchestra() : maxSize(0) {}

Orchestra::Orchestra(int size) : maxSize(size) {}

int Orchestra::get_current_number_of_members() const {
    return members.size();
}

bool Orchestra::has_instrument(std::string instrument) const {
    for (const auto& musician : members) {
        if (musician.get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}
 
Musician* Orchestra::get_members() {
    return members.data();
}

bool Orchestra::add_musician(Musician new_musician) {
    if (members.size() < maxSize) {
        members.push_back(new_musician);
        return true;
    }
    return false;
}

Orchestra::~Orchestra() {}