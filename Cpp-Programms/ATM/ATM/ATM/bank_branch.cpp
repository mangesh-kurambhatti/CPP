#include "bank_branch.h"

BankBranch::BankBranch(std::string ifscCode, std::string bankAddress, std::string contactNumber, std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob) :
    mIFSCCode(ifscCode),
    mAddress(bankAddress),
    mContactNumber(contactNumber)
{
    //adding manager as first employee
    //should provide an interface to add new employee, update employee
    Person manager(name, address, adhaar, mobileNumber, dob);
    mEmployees.push_back(manager);
}

bool BankBranch::AddAccount(std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, unsigned long long int balance, account_type_t type, bool issueCard)
{
    Account acc(name, address, adhaar, mobileNumber, dob, balance, type, issueCard);
    mAccountsList.emplace(acc.GetAccountNumber(), acc);
}

bool BankBranch::AddNominee(unsigned long long int accountNo, std::string name, std::string address, std::string adhaar, std::string mobileNumber, Date dob, std::string relationship, nominee_type_t type, float percentage)
{
    auto it = mAccountsList.find(accountNo);
    if(it != mAccountsList.end())
    {
        (it->second).AddNominee(name, address, adhaar, mobileNumber, dob, relationship, type, percentage);
    }
}

bool BankBranch::Deposit(unsigned long long int accountNo, unsigned long long int amount)
{
    auto it = mAccountsList.find(accountNo);
    if(it != mAccountsList.end())
    {
        (it->second).Deposit(amount);
    }
}

bool BankBranch::Withdraw(unsigned long long int accountNo, unsigned long long int amount)
{
    auto it = mAccountsList.find(accountNo);
    if(it != mAccountsList.end())
    {
        (it->second).Withdraw(amount);
    }
}

void BankBranch::DisplayTransactions(unsigned long long int accountNo)
{
    auto it = mAccountsList.find(accountNo);
    if(it != mAccountsList.end())
    {
        (it->second).DisplayAllTransactions();
    }
}
void BankBranch::DisplayNominees(unsigned long long int accountNo)
{
    auto it = mAccountsList.find(accountNo);
    if(it != mAccountsList.end())
    {
        (it->second).DisplayAllNominees();
    }
}

void SimulateBankBranch()
{
    BankBranch bank("IBKL00006", "ShivajiNagar", "02024456789", "Rushi", "Pune", "738792472894", "234824320", Date(1,1,1991));
    bank.AddAccount("Jeetendra", "Laxminagar", "767693454823", "9730983795", Date(29,12,1986), 100000, SAVINGS, true);
    bank.AddNominee(1, "Samartha", "Laxminagar", "", "9423566763", Date(30,5,2016), "SON", MINOR, 100);
    bank.Deposit(1, 100000);
    bank.Withdraw(1, 20000);
    bank.DisplayNominees(1);
    bank.DisplayTransactions(1);
}

#ifdef STANDALONE_BANK_BRANCH

int main()
{
    SimulateBankBranch();
    return 0;
}
#endif
