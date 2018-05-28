#include "PublicMessage.h"
#include <iostream>
#include <iomanip>


unsigned PublicMessage::getMyLikers() const
{
    return myLikers;
}

unsigned PublicMessage::displayLikers() const
{

    std::cout << myLikers << " like : mdr je suis trop populaire t'as vu" << std::endl;
}

PublicMessage::PublicMessage(const std::string & message) : myLikers(0), Message(message) {}

void PublicMessage::add()
{
    ++myLikers;
}
