#include "person_details.h"

Person::Person(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob) : mName(name),
    mAddress(address),
    mAdhaarCardNumber(adhaar),
    mMobileNumber(mobileNumber),
    mDOB(dob)
{

}

Person::~Person(){
}
    //getter
std::string Person::getName() const{
    return mName;
}

std::string Person::getAddress() const{
    return this->mAddress;
}

std::string Person::getAdhaarCardNumber() const{
    return mAdhaarCardNumber;
}

std::string Person::getMobileNumber() const{
    return mMobileNumber;
}

Date Person::getDOB() const{
    return mDOB;
}
    //setter
void Person::setAddress(const std::string address){
    this->mAddress = address;
}

void Person::setMobileNumber(const std::string mobileNumber){
    this->mMobileNumber = mobileNumber;
}

#ifdef PERSON_STANDALONE
#include <iostream>

int main()
{
    Person test("Prafulla", "Sinhagad Road", "3234278273482", "234234234", Date(21,10,1994));
    std::cout<<test.getName()<<":"<<test.getMobileNumber()<<std::endl;
    return 0;
}

#endif
