#include "bits.h"
#include <stdio.h>
#include <limits.h>

void PrintBin(const int n_, const char bits_)
{
   if (bits_ < 1)
   {
      printf("bits_ < 1!\n");
      return;
   }

   // 0b01 << bits_(4) - -1 => 0b1000
   unsigned int mask = 0b01 << (bits_ - 1);

   // a | b | a & b
   // 0 | 0 |   0
   // 0 | 1 |   0
   // 1 | 0 |   0
   // 1 | 1 |   1

   // n_   = 13 = 0b1101
   // mask      = 0b0010
   while (mask)
   {
      if (n_ & mask)
         printf("1");
      else
         printf("0");

      mask >>= 1;
   }
}

char Inverse(const char c_)
{
   return ~c_ + 1;
}

bool CheckBit(const int val_, const int pos_)
{
   return ((val_ & (1 << pos_)));
}

int SetBit(const int val_, const int pos_)
{
   return (val_ | (1 << pos_));
}

int UnsetBit(const int val_, const int pos_)
{
   return (val_ & ~(1 << pos_));
}

int SwitchBit(const int val_, const int pos_)
{
   return (val_ ^ (1 << pos_));
}

int Ex1(const int n_)
{
   return 2 << (n_ - 1);
}

int Ex4(const unsigned int n_)
{
   int n = n_;
   int OlderBit = 0;

   for (unsigned int i = 0; i < 32; ++i)
   {
      if (n == 0)
         break;

      if (n % 2 == 1)
         OlderBit = i;

      n /= 2;
   }

   return OlderBit;
}

int Ex5(const int n_, const int i_)
{
   return SetBit(n_, i_);
}

int Ex7(const int n_, const int i_)
{
   return SwitchBit(n_, i_);
}

int Ex8(const int n_)
{
   int n = n_ << 1;
   n = UnsetBit(n, Ex4(n));
   return SetBit(n, 0);
}

