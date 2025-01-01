#include "leap.h"

bool leap_year(int year)
{

  // Unless the year is evenly divisible by 100
  if (year%100==0) 
  {

    // In which case it's only a leap year if the year
    // is also evenly divisible by 400
    if (year%400==0) 
    {
      return true;
    }

    return false;
  }

  // In every eyar that is evenly divisibly by 4
  if (year%4==0)
  {
    return true;
  }

  return false;
}
