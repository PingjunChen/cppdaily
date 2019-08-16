#ifndef CPPDAILY_DAILY_H_
#define CPPDAILY_DAILY_H_


#include <string>
#include <vector>


namespace daily {

// ----------------------------------------------------------------------------
// ----------------Mathmatics
// ----------------------------------------------------------------------------

template <class T>
bool in_range(T x, T lower, T upper) {
  return (x >= lower && x <= upper);
}
    

} // namespace daily

#endif  // CPPDAILY_DAILY_H_