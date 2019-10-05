#ifndef TRANSACTION_DETAILS
#define TRANSACTION_DETAILS

#include <string>
#include "Date.h"
#include "types.h"

typedef enum
{
	CHEQUE,
	CASH,
	NET_BANKING,
	DEMAND_DRAFT,
	RTGS,
	NEFT
}transaction_mode_t;

typedef enum
{
    CREDIT,
    DEBIT
}transaction_type_t;

class Transaction
{
    static uint32_t mTransactionIdGenerator;
	private:
    uint32_t mTransactionId;
	transaction_mode_t mMode;
    transaction_type_t mType;
	std::string mLocation;
    unsigned long long int mAmount;
	Date mDate;
	public:
	Transaction(transaction_mode_t mode, transaction_type_t type, std::string location, unsigned long long int amount, Date date);
	transaction_mode_t GetMode() const;
	transaction_type_t GetType() const;
	std::string GetLocation() const;
	unsigned long long int GetAmount() const;
    Date GetDate() const;
    uint32_t GetTransactionId() const;
};
#endif
