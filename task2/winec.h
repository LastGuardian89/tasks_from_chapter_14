#include <iostream>
#include<string>
#include<valarray>

typedef std::valarray<int> ArrayInt;


class Pair {
public:
    ArrayInt MyCollectionYear;
    ArrayInt MyNumberBottles;
    Pair(int years = 0)
            :MyCollectionYear(years), MyNumberBottles(years) {}
};

class Wine: private std::string, private Pair{
private:
    int itsMyYears;
public:
    Wine();
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    ~Wine(){}
    void GetBottles();
    inline std::string   Label() { return (std::string) *this; }
    inline int sum() const {
        return Pair::MyNumberBottles.sum();
    }
    void Show();
};