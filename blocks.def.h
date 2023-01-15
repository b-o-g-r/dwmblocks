// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"🔸", "pgrep webui >/dev/null && echo", 1, 4},
    {"♾", "pgrep freerdp >/dev/null && echo", 1, 5},
    {"🌐 ", "lang", 1, 1},
    {"🔊 ", "volume", 0, 2},
    {"📆 ", "clock", 60, 0},
};
// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim = ' ';
