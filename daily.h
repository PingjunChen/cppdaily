#ifndef CPPDAILY_DAILY_H_
#define CPPDAILY_DAILY_H_


#include <time.h>
#include <string>
#include <vector>


namespace daily {

// ----------------------------------------------------------------------------
// ----------------Mathmatics
// ----------------------------------------------------------------------------

template <class T>
bool InRange(T x, T lower, T upper) {
  return (x >= lower && x <= upper);
}


// ----------------------------------------------------------------------------
// ----------------String
// ----------------------------------------------------------------------------
std::string GenerateRandomString(int len);


// ----------------------------------------------------------------------------
// ----------------Time
// ----------------------------------------------------------------------------
std::string GetCurrentDateTime();

} // namespace daily

#endif  // CPPDAILY_DAILY_H_