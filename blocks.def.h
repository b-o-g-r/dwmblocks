//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
	
	{" RAM ", "memory",	 5,		              1},

	{" VOL ", "volume",     0,		              2},

	{" ", "clock",	     60,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
