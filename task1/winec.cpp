#include "winec.h"


Wine::Wine()
        :itsMyName(" "), itsMyYears(0), itsMyData(1) {
    itsMyData.MyCollectionYear[0] = itsMyData.MyNumberBottles[0] = 0;
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
        : itsMyName(l), itsMyYears(y), itsMyData(y) {
    for (int i = 0; i < y; ++i) {
        itsMyData.MyCollectionYear[i] = yr[i];
        itsMyData.MyNumberBottles[i] = bot[i];
    }
}

Wine::Wine(const char * l, int y)
        :itsMyName(l), itsMyYears(y), itsMyData(y) {
    for (int i = 0; i < y; ++i)
        itsMyData.MyCollectionYear[i] = itsMyData.MyNumberBottles[i] = 0;
}

void
Wine::GetBottles() {
    for (int i = 0; i < itsMyYears; ++i) {
        std::cout << '\n' << i + 1 << " element:\nPlease enter crop year: ";
        int buf = 0;
        std::cin >> buf;
        itsMyData.MyCollectionYear[i] = buf;
        std::cout << "\nPlease enter the number of bottles: ";
        std::cin >> buf;
        itsMyData.MyNumberBottles[i] = buf;
    }
}

void
Wine::Show() {
    std::cout << "\nWine brand " << itsMyName << " has " << itsMyYears << " years of harvest:\n";
    for (int i = 0; i < itsMyYears; ++i)
        std::cout << itsMyData.MyCollectionYear[i] << " year: " << itsMyData.MyNumberBottles[i] << " bootles\n";
}