#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "person_details.h"
#include "nominee_details.h"
#include "card.h"
#include "transaction_details.h"
#include <vector>
#include <list>

typedef enum
{
    SAVINGS,
    CURRENT,
    CC
}account_type_t;

class Account
{
    static unsigned long long int mAccountGenerator;
    static uint32_t mPINGenerator;
    private:
    Person mPerson;
    std::list<Nominee> mNomineeList;
    std::vector<Card> mCardList;
    std::vector<Transaction> mTransactionList;
    unsigned long long int mBalance;
    unsigned long long int mAccountNumber;
    uint32_t mPIN;
    account_type_t mAccountType;
    bool mAccountStatus;
    //bank details are there is an assumption
    public:
    //constructor: person
    Account(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, unsigned long long int balance, account_type_t type, bool issueCard);
    //add & update nominee
    bool AddNominee(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, std::string relationship, nominee_type_t type, float percentage);
    bool UpdateNominee(std::string name, float percentage);
    bool AlloteNewCard();
    bool BlockCard(std::string cardNumber, bool blockStatus);
    //add card
    //deposit
    bool Deposit(unsigned long long int amount);
    //withdraw
    bool Withdraw(unsigned long long int amount);
    bool SetAccountStatus(bool status);
    bool SetPin(uint32_t);
    bool AuthenticatePin(uint32_t);
    //display methods
    void DisplayAllNominees();
    void DisplayAllTransactions();
    unsigned long long int GetAccountNumber() const { return mAccountNumber;}
};
#endif
