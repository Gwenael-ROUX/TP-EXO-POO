#include "Date.h"

Date::Date()
{
    time_t t;
    time (&t);
    tm local = * localtime (& t);

    annee = local.tm_year;
    mois = local.tm_mon;
    jour = local.tm_mday;
    heure = local.tm_hour;
    minute = local.tm_min;
    seconde = local.tm_sec;
}

int Date::getYear()
{
    return (annee + 1900);
}

int Date::getMonth()
{
    return (mois + 1);
}

int Date::getDay()
{
    return jour;
}

int Date::getHour()
{
    return heure;
}

int Date::getMin()
{
    return minute;
}

int Date::getSec()
{
    return seconde;
}
