// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

    {"| 🌐 ", "lang", 1, 1},

    {"🎧 ", "volume", 0, 2},

    {"🕑 ", "clock", 60, 0},
    {"💻", "echo", 0, 3}};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim = ' ';
