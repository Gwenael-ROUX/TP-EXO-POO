#ifndef PUBLICMESSAGE_H
#define PUBLICMESSAGE_H

#include "Message.h"

class PublicMessage : public Message
{
    unsigned myLikers;
public:
    PublicMessage(const std::string & message);
    void add();
    unsigned getMyLikers() const;
    unsigned displayLikers() const;
};

#endif // PUBLICMESSAGE_H
