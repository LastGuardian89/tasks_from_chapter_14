#include "winec.h"

Wine::Wine()
        :std::string(" "), itsMyYears(0), Pair(1) {
    Pair::MyCollectionYear[0] = Pair::MyNumberBottles[0] = 0;
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
        : std::string(l), itsMyYears(y), Pair(y) {
    for (int i = 0; i < y; ++i) {
        Pair::MyCollectionYear[i] = yr[i];
        Pair::MyNumberBottles[i] = bot[i];
    }
}

Wine::Wine(const char * l, int y)
        :std::string(l), itsMyYears(y), Pair(y) {
    for (int i = 0; i < y; ++i)
        Pair::MyCollectionYear[i] = Pair::MyNumberBottles[i] = 0;
}

void
Wine::GetBottles() {
    for (int i = 0; i < itsMyYears; ++i) {
        std::cout << '\n' << i + 1 << " element:\nPlease enter crop year: ";
        int buf = 0;
        std::cin >> buf;
        Pair::MyCollectionYear[i] = buf;
        std::cout << "\nPlease enter the number of bottles: ";
        std::cin >> buf;
        Pair::MyNumberBottles[i] = buf;
    }
}

void
Wine::Show() {
    std::cout << "\nWine brand " << (std::string) *this << " has " << itsMyYears << " years of harvest:\n";
    for (int i = 0; i < itsMyYears; ++i)
        std::cout << Pair::MyCollectionYear[i] << " year: " << Pair::MyNumberBottles[i] << " bootles\n";
}