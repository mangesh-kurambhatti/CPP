#include"transaction_details.h"

uint32_t Transaction::mTransactionIdGenerator = 0;
Transaction::Transaction(transaction_mode_t mode, transaction_type_t type, std::string location, unsigned long long int amount, Date date) : 
    mMode(mode),
    mType(type),
    mLocation(location),
    mAmount(amount),
    mDate(date)
{
    mTransactionId = ++Transaction::mTransactionIdGenerator;
}

transaction_mode_t Transaction::GetMode() const
{
	return mMode;
}

transaction_type_t Transaction::GetType() const
{
	return mType;
}

std::string Transaction::GetLocation() const
{
	return mLocation;
}

unsigned long long int Transaction::GetAmount() const
{
	return mAmount;
}

Date Transaction::GetDate() const
{
	return mDate;
}
    
uint32_t Transaction::GetTransactionId() const
{
    return mTransactionId;
}

#ifdef TRANSACTION_STANDALONE
#include<iostream>

int main()
{
	Transaction test(RTGS, CREDIT, "Bhusawal", 50000.00L, Date(2,9,2017));
	std::cout<<test.GetType()<<":"<<test.GetLocation()<<":"<<test.GetAmount()<<std::endl;
	return 0;
}

#endif
