static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
//    { "  ", "checkupdates | wc -l",                 60,               0 },
//    { "",    "brightness",                           2,                0 },
//    { "",    "date '+ %d/%m/%Y   %H:%M%p'",        5,                0 },
//    { "",    "date '+ %a %d %B %H:%M'",              5,                0 },
//      {" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 2,		0},
      { "",    "/home/artix/.local/bin/battery.sh",      60,               0 },
      { "",    "date '+ %d %b %R'",                      5,                0 },
//    { "",    "/home/artix/.local/bin/volume.sh",       2,                0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
