//SECTION 2.2 PROBLEM 4
#include <iostream>
#include <climits>
#include <cstdlib> // for rand() and srand()
#include <cstring> // for strcmp
using namespace std;

void evaluateExpr();

enum MonthAbbrev {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC, NONE}; 
const char* printMonth(enum MonthAbbrev month);
enum MonthAbbrev toEnumMonth(char *input);
void successorMonth(int month);

int main()
{
   /*int number = INT_MAX - 3;
   
   for(int i = 1; i <= 7; i++){
       cout << number << endl;
       number++;
   }*/
   
   //evaluateExpr();
   
   /*cout << printMonth(JAN) << endl;
   char input[4];
   cin.getline(input,4);
    cout << "input result: " << toEnumMonth(input) << endl;*/
    
    successorMonth(JAN); //display FEB
    successorMonth(JUN);
   
   return 0;
}

void evaluateExpr(){
    int numOfTries = 0;
    bool equal = false;
    srand(10);
    cout << "for a * (b + c) and a * b + a * c" << endl;
    while(numOfTries < 10){
        int a = rand();
        int b = rand();
        int c = rand();
        int result = a*(b+c);
        
        if(result == a*b+a*c){
            equal = true;
        }
        else{
            cout << "not equal with a=" << a << ", b=" << b << ", and c=" << c << endl;
        }
        numOfTries++;
    }
    if(equal && numOfTries == 10){
        cout << "congrats! they are equal!" << endl;
    }
    
    equal = false;
    numOfTries = 0;
    srand(11);
    cout << "for a + (b + c) and (a + b) + c" << endl;
    while(numOfTries < 10){
        int a = rand();
        int b = rand();
        int c = rand();
        int result = a+(b+c);
        
        if(result == (a+b)+c){
            equal = true;
        }
        else{
            cout << "not equal with a=" << a << ", b=" << b << "and c=" << c << endl;
        }
        numOfTries++;
    }
    if(equal && numOfTries == 10){
        cout << "congrats! they are equal!" << endl;
    }
    
    equal = false;
    numOfTries = 0;
    srand(11);
    cout << "for a * (1 / a) and 1" << endl;
    while(numOfTries < 10){
        int a = rand();
        double result = a*1/a;
        
        if(result == 1){
            equal = true;
        }
        else{
            cout << "not equal with a=" << a << endl;
        }
        numOfTries++;
    }
    if(equal && numOfTries == 10){
        cout << "congrats! they are equal!" << endl;
    }
}

const char* printMonth(enum MonthAbbrev month){
   switch (month)
   {
      case 0: return "JAN";
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
   }
}

enum MonthAbbrev toEnumMonth(char *input){
    if(strcmp(input, "JAN") == 0){
        return JAN;
    }
    else if(strcmp(input, "FEB") == 0){
        return FEB;
    }
    else if(strcmp(input, "MAR") == 0){
        return MAR;
    }
    else if(strcmp(input, "APR") == 0){
        return APR;
    }
    else if(strcmp(input, "MAY") == 0){
        return MAY;
    }
    else if(strcmp(input, "JUN") == 0){
        return JUN;
    }
    else if(strcmp(input, "JUL") == 0){
        return JUL;
    }
    else if(strcmp(input, "AUG") == 0){
        return AUG;
    }
    else if(strcmp(input, "SEP") == 0){
        return SEP;
    }
    else if(strcmp(input, "OCT") == 0){
        return OCT;
    }
    else if(strcmp(input, "NOV") == 0){
        return NOV;
    }
    else if(strcmp(input, "DEC") == 0){
        return DEC;
    }
    
    /*string array[] = {"JAN", "FEB", "MAR"};
    string *arrayPtr;
    arrayPtr = array;
    int i = 0;
    bool found = false;
    //cout << *arrayPtr;
    while(!found || i < 3){
        if(array[i] != input) {
            i++;
        }
        else{
            found = true;
        }
    }
    switch(i){
        case 0: return JAN;
        case 1: return FEB;
        case 2: return MAR;
    }*/
    
    return NONE;
}

void successorMonth(int month){
    month++;
    switch (month)
   {
      case 0: cout <<  "JAN" << endl; break;
      case 1: cout <<  "FEB" << endl; break;
      case 2: cout <<  "MAR" << endl; break;
      case 3: cout <<  "APR" << endl; break;
      case 4: cout <<  "MAY" << endl;break;
      case 5: cout <<  "JUN" << endl;break;
      case 6: cout <<  "JUL" << endl;break;
      case 7: cout <<  "AUG" << endl;break;
      case 8: cout <<  "SEP" << endl;break;
      case 9: cout <<  "OCT" << endl;break;
      case 10: cout <<  "NOV" << endl;break;
      case 11: cout <<  "DEC" << endl;break;
   }
}