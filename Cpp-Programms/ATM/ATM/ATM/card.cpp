#include "card.h"
std::string Card::mCardGenerator = "7676789854671234";
uint32_t Card::mCvvGenerator = 123;
Card::Card(std::string name, Date issueDate, card_type_t type, uint32_t limit) :
    mCardNumber(mCardGenerator),
    mCardHolderName(name),
    mCVV(mCvvGenerator),
    mExpiryDate(issueDate+1000),
    mCardType(type),
    mCardLimit(limit),
    mCardBlockStatus(false)
{
    Card::mCvvGenerator++;
}

Card::~Card()
{

}
std::string Card::getCardNumber() const{
    return mCardNumber;
}

std::string Card::getCardHolderName() const{
    return mCardHolderName;
}

uint32_t Card::getCardCVV() const{
    return mCVV;
}

bool Card::isCardExpired() const{
    return false;
    //put logic to verify whether current date is less than expiry date of card
}

card_type_t Card::getCardType() const {
    return mCardType;
}

uint32_t Card::getCardLimit() const {
    return this->mCardLimit;
}

void Card::setCardLimit(uint32_t limit) {
    this->mCardLimit = limit;
}

void Card::setCardBlockStatus(bool status)
{
    mCardBlockStatus = status;
}

bool Card::getCardBlockStatus() const
{
    return this->mCardBlockStatus;
}

#ifdef CARD_STANDALONE
#include <iostream>
int main()
{
    Card test("Mangesh",Date(11,11,2017), BASIC, 500000);
    std::cout<<test.getCardHolderName()<<":"<<test.getCardLimit()<<std::endl;
    test.setCardLimit(100000);
    std::cout<<test.getCardHolderName()<<":"<<test.getCardLimit()<<std::endl;
    return 0;
}

#endif
