#include "account.h"
#include <iostream>
unsigned long long int Account::mAccountGenerator = 0;
uint32_t Account::mPINGenerator = 1000;

Account::Account(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, unsigned long long int balance, account_type_t type, bool issueCard) :
    mPerson(name, address, adhaar, mobileNumber, dob),
    mBalance(0),
    mAccountType(type),
    mAccountStatus(true)
{
    mAccountNumber = ++Account::mAccountGenerator;
    mPIN = ++Account::mPINGenerator;
    if(issueCard)
    {
        Card card(name, Date(1,1,2017), TITANIUM, 100000);
        mCardList.push_back(card);
    }
    //balance > 0
    Deposit(balance);
}

bool Account::AddNominee(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, std::string relationship, nominee_type_t type, float percentage)
{
    //later expected that nominee should be added in map where name is key and value is nominee object
    Nominee nominee(name, address, adhaar, mobileNumber, dob, relationship, type, percentage);
    mNomineeList.push_back(nominee);
    return true;
}

bool Account::UpdateNominee(std::string name, float percentage)
{
    bool status = false;
    auto it = mNomineeList.begin();
    while (it != mNomineeList.end())
    {
        if(it->getName() == name)
        {
            it->setSharedPercentage(percentage);
            status = true;
            break;
        }
        it++;
    }
    return status;
}

bool Account::AlloteNewCard()
{
    Card card(mPerson.getName(), Date(1,1,2017), TITANIUM, 100000);
    mCardList.push_back(card);
    return true;
}

bool Account::BlockCard(std::string cardNumber, bool blockStatus)
{
    bool status = false;
    auto it = mCardList.begin();
    while (it != mCardList.end())
    {
        if(it->getCardNumber() == cardNumber)
        {
            it->setCardBlockStatus(blockStatus);
            status = true;
            break;
        }
    }
    return status;
}

bool Account::Deposit(unsigned long long int amount)
//add transaction mode, location, date as an argument to this function
{
    Transaction transaction(RTGS, CREDIT, "Bhusawal", amount, Date(2,9,2017));
    mTransactionList.push_back(transaction);
    this->mBalance += amount;
    std::cout<<this->mBalance<<std::endl;
    return true;
}

bool Account::Withdraw(unsigned long long int amount)
//add transaction mode, location, date as an argument to this function
//add check whether withdrawl possible or not
{
    Transaction transaction(RTGS, DEBIT, "Bhusawal", amount, Date(2,9,2017));
    mTransactionList.push_back(transaction);
    this->mBalance -= amount;
    std::cout<<this->mBalance<<std::endl;
    return true;
}
//print transaction statment

bool Account::SetAccountStatus(bool status)
{
    this ->mAccountStatus = status;
    return true;
}

bool Account::SetPin(uint32_t pin)
{
    this->mPIN = pin;
    return true;
}

//if user has multiple cards then accept card number as well and then check with the respective pin
bool Account::AuthenticatePin(uint32_t pin)
{
    return pin == this->mPIN;
}

void Account::DisplayAllNominees()
{
    auto it = mNomineeList.begin();
    while (it != mNomineeList.end())
    {
        std::cout<<it->getName()<<":"<<it->getAddress()<<":"<<it->getSharedPercentage()<<std::endl;
        it++;
    }
}

//accept count, accept start 
void Account::DisplayAllTransactions()
{
    auto it = mTransactionList.begin();
    while(it != mTransactionList.end())
    {
        std::cout<<it->GetTransactionId()<<":"<<it->GetMode()<<":"<<it->GetLocation()<<":"<<it->GetAmount()<<":"<<it->GetType()<<std::endl;
        it++;
    }
    std::cout<<"Current Balance :"<<this->mBalance<<std::endl;
}

#ifdef STANDALONE_ACCOUNT
int main()
{
    Account test("Jeetendra", "Laxminagar", "767693454823", "9730983795", Date(29,12,1986), 100000, SAVINGS, true);

    //verifiying add nominee - add verication of total shared percentage check
    test.AddNominee("Samartha", "Laxminagar", "", "9423566763", Date(30,5,2016), "SON", MINOR, 50);
    test.AddNominee("Vrushali", "Laxminagar", "", "9423566763", Date(12,1,1987), "WIFE", ADULT, 50);

    test.DisplayAllNominees();
    test.Deposit(1000);
    test.Withdraw(10000);
    test.DisplayAllTransactions();
    return 0;
}
#endif
