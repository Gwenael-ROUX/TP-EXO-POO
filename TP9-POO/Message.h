#ifndef MESSAGE_H
#define MESSAGE_H

#include <iomanip>
#include "Date.h"

class Message
{
protected:
    Date myDate;
    std::string myContent;
public:
    Message(const std::string & message);
    void displayContent();
    void displayDate();
    void displayHour();
    Date getMyDate() const;
};

#endif // MESSAGE_H
