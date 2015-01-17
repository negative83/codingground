#include <iostream>

class EnumMonth{
    public:
    enum MonthAbbrev {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC, NONE}; 
    void display (ostream &out) const;
    
    private:
    MonthAbbrev Month;
};

ostream &operator<<(ostream &out, const EnumMonth &m);