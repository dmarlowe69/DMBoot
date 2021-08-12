#ifndef VERSION__H
#define VERSION__H

#define DRA_VERNUM "1.0doj"
#define DRA_VERDATE "2021-04-14"

#define VERSION_MAJOR 2
#define VERSION_MINOR 99

#if defined(KERBEROS)
#define DRA_VEREXTRA "-kerberos"
#elif defined(REU)
#define DRA_VEREXTRA "-reu"
#else
#define DRA_VEREXTRA ""
#endif

#define DRA_VER DRA_VERNUM DRA_VEREXTRA " " DRA_VERDATE

#endif
