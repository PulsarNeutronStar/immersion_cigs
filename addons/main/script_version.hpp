#define MAJOR 1
#define MINOR 5
#define PATCH 0
#define BUILD 99


// #define VERSION MACROS
#define VERSION MAJOR.MINOR
#define VERSION_AR MAJOR,MINOR,PATCH,BUILD
#define VERSION_STR MAJOR##.##MINOR##.##PATCH##.##BUILD