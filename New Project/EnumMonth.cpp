#include <iostream>
#include <cstring> // for strcmp
using namespace std;

//#include "EnumMonth.h"
enum MonthAbbrev {
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC, NONE};
ostream &operator<<(ostream &out, MonthAbbrev &m);
istream &operator>>(istream &in, MonthAbbrev &m);

int main(){
    MonthAbbrev month = JAN;
    cout << month << endl;
    
    char input[4];
    cin >> input;
    cout << "input result: " << input << endl;
    
    /*successorMonth(JAN); //display FEB
    successorMonth(JUN);*/
    
    return 0;
}

/*void EnumMonth::display (ostream &out) const{
   switch (month)
   {
      case 0: out << "JAN"; break;
      case 1: return "FEB";
      case 2: return "MAR";
      case 3: return "APR";
      case 4: return "MAY";
      case 5: return "JUN";
      case 6: return "JUL";
      case 7: return "AUG";
      case 8: return "SEP";
      case 9: return "OCT";
      case 10: return "NOV";
      case 11: return "DEC";
      case default: out << "NONE";
   }
   out << "JAN";
}*/

ostream& operator<<(ostream &out, MonthAbbrev &m){
    //m.display(out);
    switch (m)
    {
        case 0: out << "jAN"; break;
        case 1: out << "fEB"; break;
        case 2: out << "mAR"; break;
        case 3: out << "APR"; break;
        case 4: out << "MAY"; break;
        case 5: out << "JUN"; break;
        case 6: out << "JUL"; break;
        case 7: out << "AUG"; break;
        case 8: out << "SEP"; break;
        case 9: out << "OCT"; break;
        case 10: out << "NOV"; break;
        case 11: out << "DEC"; break;
        default: out << "NONE";
    }
    return out;
}

istream &operator>>(istream &in, MonthAbbrev &m){
    string array[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", 
                      "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    string *arrayPtr = array;
    
    /*for(int i = 0; i < 13; i++){
        if(strcmp(in, *(arrayPtr+i)) == 0){
            in >> i;
            return in;
        }
        arrayPtr++;
    }*/
    
    //in >> NONE;
    return in;
}