#include "User.h"

User::User()
{

}

void User::sendMessage(const PrivateMessage &message)
{
    message.displayContent ();
    cout << endl;
}

void User::addFriend(const User &Friend) { cout << "ajouté" << endl; }

User User::getFriend(unsigned i) const { cout << i << endl; return User (); }

System *User::getSystem() const { cout << "système" << endl; return NULL; }

void User::addMessage(const PrivateMessage &message) { cout << message << endl; }
