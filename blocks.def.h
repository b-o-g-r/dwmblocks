//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
	
	{" RAM ", "./scripts/memory",	 5,		              1},

	{" VOL ", "./scripts/volume",     0,		              2},

	{" ", "./scripts/clock",	     60,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
