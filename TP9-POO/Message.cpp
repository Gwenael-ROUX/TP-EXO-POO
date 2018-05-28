#include "Message.h"
#include <iostream>

using namespace std;


Date Message::getMyDate() const
{
    return myDate;
}

Message::Message(const std::string & message)
{
   myDate = Date();
   myContent = message;
}

void Message::displayContent()
{
    cout  << "Votre message: " << myContent  << std::endl;
}

void Message::displayDate()
{
    cout << myDate.getDay () << ' ' << myDate.getMonth () << ' ' << myDate.getYear ()  << std::endl;
}

void Message::displayHour()
{
    cout << myDate.getHour () << "h " << myDate.getMin ()
                 << "mn et " <<myDate.getSec () << 's'  << std::endl;
}
