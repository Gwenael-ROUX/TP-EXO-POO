#ifndef DATE_H
#define DATE_H
#include <ctime>
#include <time.h>

class Date : public tm
{
    int seconde;
    int minute;
    int heure;
    int jour;
    int mois;
    int annee;
public:
    Date();
    int getYear();
    int getMonth();
    int getDay();
    int getHour();
    int getMin();
    int getSec();
};

#endif // DATE_H
