#ifndef PRIVATEMESSAGE_H
#define PRIVATEMESSAGE_H

#include "User.h"
#include "Message.h"

class PrivateMessage: public Message
{
    User * mySender;
public:
    PrivateMessage(const User & user, const std::string & message);
    User *getMySender() const;
};

#endif // PRIVATEMESSAGE_H
