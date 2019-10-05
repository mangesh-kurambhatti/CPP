#ifndef CARD_H
#define CARD_H
#include "Date.h"
#include <string>

typedef unsigned int uint32_t;

typedef enum
{
    BASIC,
    TITANIUM,
    PLATINUM,
    CORAL
}card_type_t;

class Card
{
    private:
    //class attributes
    static std::string mCardGenerator;
    static uint32_t mCvvGenerator;
    //object attributes
    std::string mCardNumber;//auto generate
    std::string mCardHolderName;
    uint32_t    mCVV;//auto generate
    Date        mExpiryDate;
    card_type_t mCardType;
    uint32_t    mCardLimit;
    bool        mCardBlockStatus;
    public:
    //manager
    Card(std::string name, Date issueDate, card_type_t type, uint32_t limit);
    ~Card();
    //getter methods
    std::string getCardNumber() const;
    std::string getCardHolderName() const;
    uint32_t getCardCVV() const;
    bool isCardExpired() const;
    card_type_t getCardType() const;
    uint32_t getCardLimit() const;
    void setCardLimit(uint32_t limit);
    void setCardBlockStatus(bool status);
    bool getCardBlockStatus() const;
};
#endif
