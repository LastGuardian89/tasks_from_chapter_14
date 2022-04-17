#include <iostream>
#include<string>
#include<valarray>

typedef std::valarray<int> ArrayInt;

struct Pair {
public:
    ArrayInt MyCollectionYear;
    ArrayInt MyNumberBottles;
    Pair(int years = 0)
            :MyCollectionYear(years), MyNumberBottles(years) {}
};

class Wine{
private:
    std::string itsMyName;
    int itsMyYears;
    Pair itsMyData;
public:
    Wine();
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    ~Wine(){}
    void GetBottles();
    inline const std::string&   Label() { return itsMyName; }
    inline int sum() const { return itsMyData.MyNumberBottles.sum(); }
    void Show();
};