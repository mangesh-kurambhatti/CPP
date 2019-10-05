#ifndef BANK_BRANCH_H
#define BANK_BRANCH_H
#include <map>
#include <list>
#include "account.h"

class BankBranch
{
    private:
    std::map<unsigned long long int, Account> mAccountsList;
    std::string mIFSCCode;
    std::string mAddress;
    std::string mContactNumber;
    std::list<Person> mEmployees; // create employee class inherited from person and then this list should be changed to Employee.
    // then add methods related to employee management
    public:
    //creating branch with person as a manager
    BankBranch(std::string ifscCode, std::string bankAddress, std::string contactNumber, std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob);
    bool AddAccount(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, unsigned long long int balance, account_type_t type, bool issueCard);
    bool AddNominee(unsigned long long int accountNo, std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, std::string relationship, nominee_type_t type, float percentage);
    bool Deposit(unsigned long long int accountNo, unsigned long long int amount);
    bool Withdraw(unsigned long long int accountNo, unsigned long long int amount);
    void DisplayTransactions(unsigned long long int accountNo);
    void DisplayNominees(unsigned long long int accountNo);
};
#endif
