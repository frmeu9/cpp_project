//
// Created by Francoune on 2021-01-17.
//

#include "Duration.h"
#include <iostream>

using namespace std;

// class Duration

Duration::Duration(): m_hours(0), m_minutes(0), m_seconds(0) {

}

Duration::Duration(int hours, int minutes, int seconds) {
    m_hours = hours;
    m_minutes = 0;
    m_seconds = 0;

    if(seconds>60){
        m_seconds += seconds % 60;
        m_minutes += seconds / 60;
    }
    else{
        m_seconds = seconds;
    }
    if(minutes>60){
        m_minutes += minutes % 60;
        m_hours += minutes / 60;
    }
    else
    {
        m_minutes = minutes;
    }
}

void Duration::showValues() const {
    cout << m_hours << "h" << m_minutes << "m" << m_seconds << "s" << endl;
}

bool Duration::isEqual(Duration const& b) const
{
    return (m_seconds == b.m_seconds && m_minutes==b.m_minutes && m_hours == b.m_hours);
}

bool Duration::isSmallerThan(Duration const& b) const
{
    if(m_hours < b.m_hours)
        return true;
    else if (m_hours == b.m_hours && m_minutes < b.m_minutes)
        return true;
    else if (m_hours == b.m_hours && m_minutes == b.m_minutes && m_seconds < b.m_seconds)
        return true;
    else
        return false;
}

Duration& Duration::operator+=(const Duration& a)
{

    m_seconds += a.m_seconds;

    m_minutes += m_seconds / 60;
    m_seconds %= 60;

    m_minutes += a.m_minutes;

    m_hours += m_minutes / 60;
    m_minutes %= 60;

    m_hours += a.m_hours;
    return *this;
}

Duration& Duration::operator-=(const Duration& a)
{

    m_seconds -= a.m_seconds;
    m_minutes -= a.m_minutes;
    m_hours -= a.m_hours;

    if(m_hours < 0)
        m_hours = 0;

    if(m_minutes < 0)
        m_minutes = 0;

    if(m_seconds < 0)
        m_seconds = 0;

    return *this;
}

void Duration::show(ostream &flux) const
{
    flux << m_hours << "h" << m_minutes << "m" << m_seconds << "s";
}

Duration::~Duration(){

}

// operators
bool operator==(Duration const& a, Duration const& b)
{
    return a.isEqual(b);
}

bool operator!=(Duration const& a, Duration const& b)
{
    return !(a==b);
}

bool operator<(Duration const& a, Duration const& b)
{
    return a.isSmallerThan(b);
}

bool operator>(Duration const &a, Duration const& b){
    if(a.isSmallerThan(b))
        return false;
    else
        return true;
}

bool operator<=(Duration const &a, Duration const& b){
    if(a.isSmallerThan(b) or a.isEqual(b))
        return true;
    else
        return false;
}

bool operator>=(Duration const &a, Duration const& b){
    if(a <= b)
        return false;
    else
        return true;
}

Duration operator+(Duration const &a, Duration const& b){
    Duration result(a);
    result += b;
    return result;
}

//Duration operator+(Duration const& d, int seconds)
//{
//    Duration res(d);    //On utilise le constructeur de copie de la classe Duree !
//    res += seconds;     //On appelle la méthode d'addition qui modifie l'objet 'copie'
//    return res;          //Et on renvoie le résultat
//}

Duration operator-(Duration const &a, Duration const& b){
    Duration result(a);
    result -= b;
    return result;
}

ostream& operator<<(ostream &flux, Duration const& d){

    d.show(flux);
    return flux;
}
