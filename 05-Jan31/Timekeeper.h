#ifndef SICT_TIMEKEEPER_H
#define SICT_TIMEKEEPER_H
#include <chrono>
namespace scit {
  const int MAX_RECS = 40;
  class Timekeeper {
    int numberOfRecs;
    std::chrono::steady_clock::time_point startTime;
    std::chrono::steady_clock::time_point endTime;
    struct {
      // char pointers for message and unit
      char * mes;
      char * unit;
      std::chrono::steady_clock::duration dur;
    } rec[MAX_RECS];
  public:
    // no arg constructor

    /*recordEvent() rec c string (char pointer) returns nothing
     if numberOfRecs is less than Max_recs
     copies the c string address into rec address
     rec[numberOfRecs].dur = 
             std::chrono::duration_cast<milliseconds>(endTime = startTime);
     rec[numberOfRecs].unit=  "senconds"
     numberOfRecs++;
    */
    /* in the cpp file
    using namespace std::chrono;
    stTime =  steady_clock::now();
    
    */

  };



}


#endif