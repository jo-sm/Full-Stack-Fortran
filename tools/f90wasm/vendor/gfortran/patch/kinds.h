typedef int8_t GFC_INTEGER_1;
typedef uint8_t GFC_UINTEGER_1;
typedef GFC_INTEGER_1 GFC_LOGICAL_1;
#define HAVE_GFC_LOGICAL_1
#define HAVE_GFC_INTEGER_1

typedef int16_t GFC_INTEGER_2;
typedef uint16_t GFC_UINTEGER_2;
typedef GFC_INTEGER_2 GFC_LOGICAL_2;
#define HAVE_GFC_LOGICAL_2
#define HAVE_GFC_INTEGER_2

typedef int32_t GFC_INTEGER_4;
typedef uint32_t GFC_UINTEGER_4;
typedef GFC_INTEGER_4 GFC_LOGICAL_4;
#define HAVE_GFC_LOGICAL_4
#define HAVE_GFC_INTEGER_4

typedef int64_t GFC_INTEGER_8;
typedef uint64_t GFC_UINTEGER_8;
typedef GFC_INTEGER_8 GFC_LOGICAL_8;
#define HAVE_GFC_LOGICAL_8
#define HAVE_GFC_INTEGER_8

#define GFC_INTEGER_LARGEST GFC_INTEGER_8
#define GFC_UINTEGER_LARGEST GFC_UINTEGER_8
#define GFC_DEFAULT_CHAR 1

typedef float GFC_REAL_4;
typedef complex float GFC_COMPLEX_4;
#define HAVE_GFC_REAL_4
#define HAVE_GFC_COMPLEX_4
#define GFC_REAL_4_HUGE 3.40282347e38f
#define GFC_REAL_4_LITERAL_SUFFIX f
#define GFC_REAL_4_LITERAL(X) (X ## f)
#define GFC_REAL_4_DIGITS 24
#define GFC_REAL_4_RADIX 2

typedef double GFC_REAL_8;
typedef complex double GFC_COMPLEX_8;
#define HAVE_GFC_REAL_8
#define HAVE_GFC_COMPLEX_8
#define GFC_REAL_8_HUGE 1.7976931348623157e308
#define GFC_REAL_8_LITERAL_SUFFIX 
#define GFC_REAL_8_LITERAL(X) (X)
#define GFC_REAL_8_DIGITS 53
#define GFC_REAL_8_RADIX 2

#include "kinds-override.h"