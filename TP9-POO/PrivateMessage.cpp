#include "PrivateMessage.h"

#include <iostream>
#include <iomanip>

User *PrivateMessage::getMySender() const
{
    return mySender;
}

PrivateMessage::PrivateMessage(const std::string & message, const User & user): mySender(user), Message(message){}
