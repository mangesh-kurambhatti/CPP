#ifndef NOMINEE_DETAILS
#define NOMINEE_DETAILS

#include "person_details.h"

typedef enum
{
    MINOR,
    ADULT    
}nominee_type_t;

class Nominee : public Person
{
    private:
    std::string    mRelationShip;
    nominee_type_t mType;
    float          mSharedPercentage;
    public:
    //Nominee inherits Person hence while constructing Person gets constructed implicitly.
    //Arguments of Person must be accepted in Nominee constructor and then should be passed to Person constructor
    Nominee(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, std::string relationShip, nominee_type_t type, float sharePercentage);
    ~Nominee();
    std::string getRelationShip();
    nominee_type_t getNomineeType();
    float getSharedPercentage();

    void setSharedPercentage(float percentage);
    void setNomineeType(nominee_type_t type);
};
#endif
