#ifndef PERSON_DETAILS_H
#define PERSON_DETAILS_H

#include "Date.h"
#include <string>

class Person
{
    private:
    std::string mName;
    std::string mAddress;
    std::string mAdhaarCardNumber; // can be auto generated
    std::string mMobileNumber;
    Date        mDOB;
    public:
    //manager
    Person(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob);
    ~Person();
    //getter
    std::string getName() const;
    std::string getAddress() const;
    std::string getAdhaarCardNumber() const;
    std::string getMobileNumber() const;
    Date        getDOB() const;
    //setter
    void setAddress(const std::string address);
    void setMobileNumber(const std::string mobileNumber);
};
#endif
