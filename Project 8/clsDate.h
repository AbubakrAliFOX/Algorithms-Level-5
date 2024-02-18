#pragma once
#include <ctime>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

class clsDate
{
private:
    short _Day = 1;
    short _Month = 1;
    short _Year = 2000;

public:
    // constructors
    clsDate()
    {
        time_t t = time(0);
        tm now;
        localtime_s(&now, &t);
        _Year = now.tm_year + 1900;
        _Month = now.tm_mon + 1;
        _Day = now.tm_mday;
    }

    static string GetSystemDateTimeString()
    {
        // system datetime string
        time_t t = time(0);
        tm now;
        localtime_s(&now, &t);

        short Day, Month, Year, Hour, Minute, Second;

        Year = now.tm_year + 1900;
        Month = now.tm_mon + 1;
        Day = now.tm_mday;
        Hour = now.tm_hour;
        Minute = now.tm_min;
        Second = now.tm_sec;

        return (to_string(Day) + "/" + to_string(Month) + "/" + to_string(Year) + " - " + to_string(Hour) + ":" + to_string(Minute) + ":" + to_string(Second));
    }
};
