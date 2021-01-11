//
// Created by user418 on 2021-01-10.
//
#include <iostream>
#include <string>
using namespace std;

int compareString(string s1, string s2)
{
    int result;
    if (s1 != s2)
    {
        result = 0;
    }
    else
    {
        result = 1;
    }

    return result;
}