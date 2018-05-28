#ifndef USER_H
#define USER_H

#include <PrivateMessage.h>

class User
    {
       public :
       void sendMessage (const PrivateMessage & message); // sendMessage()
       void addFriend (const User & Friend);
       User getFriend (unsigned i) const;
       System * getSystem (void) const;
       void addMessage (const PrivateMessage & message);

    }; // User

#endif // USER_H
