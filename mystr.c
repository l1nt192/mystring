#include "mystr.h"

int my_strlen( char* str_)
{
   int len = 0;
   while (*str_)
   {
      len++;
      str_++;
   }

   return len;
}void my_strcpy(char* dest_, char* src_)
{
   int symbol = 0;
   while (dest_[symbol])
   {
      src_[symbol] = dest_[symbol];
      symbol++;
   }
   return symbol;
}

void my_strcat(char* dest_, const char* src_)
{
   while (*dest_)
   {
      dest_++;
   }
   while (*src_)
   {
      *dest_ = * src_;
      dest_++;
      src_++;
   }
   return src_;
}


