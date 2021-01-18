//
// Created by Francoune on 2021-01-17.
//

#ifndef INC_10_OPERATOR_OVERLOAD_DURATION_H
#define INC_10_OPERATOR_OVERLOAD_DURATION_H

#include <iostream>

class Duration {
private:
    int m_hours;
    int m_minutes;
    int m_seconds;

public:
    Duration();
    Duration(int hours, int minutes, int seconds);
    void showValues() const;
    bool isEqual(Duration const& b) const;
    bool isSmallerThan(Duration const& b) const;
    Duration& operator+=(const Duration& a);
    Duration& operator-=(const Duration& a);
    void show(std::ostream &flux) const;
    ~Duration();
};


#endif //INC_10_OPERATOR_OVERLOAD_DURATION_H

bool operator==(Duration const& a, Duration const& b);
bool operator!=(Duration const& a, Duration const& b);
bool operator<(Duration const &a, Duration const& b);
bool operator>(Duration const &a, Duration const& b);
bool operator<=(Duration const &a, Duration const& b);
bool operator>=(Duration const &a, Duration const& b);
Duration operator+(Duration const &a, Duration const& b);
//Duration operator+(Duration const& duree, int seconds);
Duration operator-(Duration const &a, Duration const& b);
std::ostream& operator<<(std::ostream &flux, Duration const& duree);