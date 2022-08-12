/*
MIT License

Copyright (C) Zero Hanami

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef _0hana_types_

#include <stddef.h>
#include <stdint.h>

typedef uint8_t byte;
extern  int16_t const * const big_endian;
#define little_endian ((*big_endian) == ' ')

void endian_mirror
( size_t bytes
, byte * datum
) ;

#define _0hana_L_PARENTHESIS_ (
#define _0hana_R_PARENTHESIS_ )
#define _0hana_unconst_
#define guard(type, name, /* function parameters */ ...) \
  union \
  { \
    type \
    __VA_OPT__(_0hana_un)##const##__VA_OPT__(_) \
    __VA_OPT__(_0hana_L_PARENTHESIS_* const) name \
    __VA_OPT__(_0hana_R_PARENTHESIS_)__VA_OPT__((__VA_ARGS__)); \
    type \
    __VA_OPT__(_0hana_L_PARENTHESIS_*) name##_0hana_unconst_ \
    __VA_OPT__(_0hana_R_PARENTHESIS_)__VA_OPT__((__VA_ARGS__)); \
  }
#define relax(variable) variable##_0hana_unconst_

#define _0hana_types_
#endif//_0hana_types_
