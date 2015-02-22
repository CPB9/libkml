#include <time.h>

#ifdef _MSC_VER
char* kml_strptime(const char* buf, const char* fmt, struct tm* tm);
#else
#define kml_strptime strptime
#endif
