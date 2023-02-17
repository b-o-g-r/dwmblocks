// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
typedef struct {
  char *icon;
  char *command;
  unsigned int interval;
  unsigned int signal;
} Block;

static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {(char *)"", (char *)"pgrep webui >/dev/null && echo", 1, 4},
    {(char *)"", (char *)"pgrep freerdp >/dev/null && echo", 1, 5},
    {(char *)"\x0d  ", (char *)"lang", 1, 1},
    {(char *)"\x0f", (char *)"volume", 0, 2},
    {(char *)"\x0f", (char *)"battery", 1, 6},
    {(char *)"\x0e  ", (char *)"clock", 60, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim = ' ';
