#include "PublicMessage.h"
#include <iostream>
#include <iomanip>

using namespace std;

namespace{
    void testDate (void)
        {

            Date date;
            cout << "Aujourd'hui nous sommes le : "
                 << date.getDay () << ' ' << date.getMonth () << ' ' << date.getYear ()
                 << " et il est " << date.getHour () << "h " << date.getMin ()
                 << "mn et " <<date.getSec () << 's' << endl;

        } // testDate()

}


int main()
{
  PublicMessage mes("lol");
  mes.displayContent();
  mes.displayDate();
  mes.displayHour();
  for (unsigned i (0); i < 100000; ++i)
  {
     mes.add();
  }
  mes.displayLikers();
  return 0;
}
