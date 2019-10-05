#include "nominee_details.h"

Nominee::Nominee(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, std::string relationShip, nominee_type_t type, float sharedPercentage) :
    Person(name, address, adhaar, mobileNumber, dob),
    mRelationShip(relationShip),
    mType(type),
    mSharedPercentage(sharedPercentage)
{
}

Nominee::~Nominee()
{
}

std::string Nominee::getRelationShip(){
    return mRelationShip;
}

nominee_type_t Nominee::getNomineeType(){
    return mType;
}

float Nominee::getSharedPercentage(){
    return mSharedPercentage;
}

void Nominee::setSharedPercentage(float percentage){
    this->mSharedPercentage = percentage;
}

void Nominee::setNomineeType(nominee_type_t type){
    this->mType = type;
}

#ifdef NOMINEE_STANDALONE
#include <iostream>

int main()
{
    Nominee test("Mangesh", "Jupiter", "123812731983", "424234", Date(29,12,1996), "FRIEND", ADULT, 100);
    std::cout<<test.getName()<<":"<<test.getMobileNumber()<<":"<<test.getSharedPercentage()<<std::endl;
    return 0;
}
#endif
