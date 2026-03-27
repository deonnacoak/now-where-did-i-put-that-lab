#include "where.hpp"
#include <string>

using namespace std;

int location(const string& text, char search) {
   for (int i = 0; i < static_cast<int>(text.length()); ++i) {
      if (text[i] == search) {
         return i;
      }
   }
   return -1;
}

int location(const string& text, const string& search) {
   if (search.empty()) {
      return 0;
   }

   int textLen = static_cast<int>(text.length());
   int searchLen = static_cast<int>(search.length());

   if (searchLen > textLen) {
      return -1;
   }

   // 1st loop/outside loop - also make sure it doesn't continue check if not enough characters
   for (int i = 0; i <= textLen - searchLen; ++i) {
      bool match = true;

      for (int j = 0; j < searchLen; ++j) {
         if (text[i + j] != search[j]) {
            match = false;
            break; // Mismatch found, stop checking this index
         }
      }

      if (match) {
         return i;
      }
   }

   return -1;
}