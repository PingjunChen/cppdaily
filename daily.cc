#include "daily.h"


namespace daily {

// ----------------------------------------------------------------------------
// ----------------String
// ----------------------------------------------------------------------------
std::string GenerateRandomString(int len) {
  std::string numalpha_str = 
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  std::string rand_str(len, ' ');
  for (int i = 0; i < len; ++i) {
    rand_str[i] = numalpha_str[rand() % numalpha_str.length()];
  }

  return rand_str;
}


// ----------------------------------------------------------------------------
// ----------------Time
// ----------------------------------------------------------------------------
std::string GetCurrentDateTime() {
  time_t now = time(0);
  struct tm* timeinfo = localtime(&now);
  char buffer[20];
  strftime(buffer, sizeof(buffer), "%Y-%m-%d %X", timeinfo);

  return std::string(buffer);
}


} // namespace daily