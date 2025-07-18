#ifndef HELP
#define HELP \
"usage: xlunch [options]\n" \
"    xlunch is a program launcher/option selector similar to dmenu or rofi.\n" \
"    By default it launches in full-screen mode and terminates after a selection is made,\n" \
"    it is also possible to close xlunch by pressing Esc or the right mouse button.\n" \
"    Some options changes this behaviour, the most notable being the desktop mode switch:\n" \
"        -d, --desktop                      Desktop mode, always keep the launcher at\n" \
"                                           background(behind other windows), and ignore ESC\n" \
"                                           and right mouse click. Combined with --dontquit\n" \
"                                           xlunch never exits (behaviour of --desktop from\n" \
"                                           previous versions).\n" \
"    Functional options:\n" \
"        --config [file]                    Reads configuration options from a file. The\n" \
"                                           options are the same as the long options\n" \
"                                           specified here. Options that take a value must\n" \
"                                           have a colon (':') before it's option. It is\n" \
"                                           also possible to pass the entries along with the\n" \
"                                           configuration file by using \"entries:\"\n" \
"                                           followed by a newline and the regular contents\n" \
"                                           of an input file\n" \
"        -v, --version                      Returns the version of xlunch\n" \
"        -H, --help                         Shows this help message\n" \
"        --name                             POSIX-esque way to specify the first part of\n" \
"                                           WM_CLASS (default: environment variable \n" \
"                                           RESOURCE_NAME or argv[0])\n" \
"        -N, --notitle                      Do not display any titles under/around icons\n" \
"        -n, --noprompt                     Hides the prompt, only allowing selection\n" \
"                                           by icon\n" \
"        -o, --outputonly                   Do not run the selected entry, only output it\n" \
"                                           to stdout\n" \
"        -S, --selectonly                   Only allow an actual entry and not free-typed\n" \
"                                           commands. Nice for scripting.\n" \
"        -i, --input [file]                 File to read entries from, defaults to stdin\n" \
"                                           if data is available otherwise it reads from\n" \
"                                           $HOME/.config/xlunch/entries.dsv or\n" \
"                                           /etc/xlunch/entries.dsv\n" \
"        -m, --multiple                     Allow multiple instances running\n" \
"        -t, --voidclickterminate           Clicking anywhere that's not an entry terminates\n" \
"                                           xlunch, practical for touch screens.\n" \
"        --focuslostterminate               When the window loses focus xlunch will quit,\n" \
"                                           practical for menus\n" \
"        -q, --dontquit                     When an option is selected, don't close xlunch.\n" \
"                                           Combined with --desktop xlunch\n" \
"                                           never exits (behaviour of --desktop from\n" \
"                                           previous versions).\n" \
"        -R, --reverse                      All entries in xlunch as reversly ordered.\n" \
"        -W, --windowed                     Start in windowed mode\n" \
"        --title                            Specifies the title to put on the window when\n" \
"                                           running in windowed mode.\n" \
"        --icon                             Specifies the icon to put on the window when\n" \
"                                           running in windowed mode.\n" \
"        -M, --clearmemory                  Set the memory of each entry to null before\n" \
"                                           exiting. Used for passing sensitive information\n" \
"                                           through xlunch.\n" \
"        -U, --shortcuts [shortcuts]        Sets shortcuts for the entries, 'shortcuts' is a\n" \
"                                           string of UTF-8 characters to use sequentially\n" \
"                                           for the entries provided.\n" \
"        -A, --button [button]              Adds a button to the window. The argument\n" \
"                                            \"button\" is a semicolon-separated list on the\n" \
"                                           form \"<icon>;<highlight icon>;<x>,<y>;<command>\"\n" \
"                                           If x or y is negative positioning is relative\n" \
"                                           to the other side of the screen.\n" \
"        --noscroll                         Disable scroll in xlunch. Ignore entries\n" \
"                                           that can't fit the screen.\n" \
"        --stdinpolltimeout [i]             How long xlunch should wait (in milliseconds)\n" \
"                                           for data on stdin before assuming it is\n" \
"                                           invalid. Use if you find that your xlunch\n" \
"                                           menu ends up empty on occasion, even though\n" \
"                                           the entries you pass to xlunch through stdin\n" \
"                                           are sound. Defaults to 10.\n\n" \
"    Multi monitor setup: xlunch cannot detect your output monitors, it sees your monitors\n" \
"    as a big single screen. You can customize this manually by setting windowed mode and\n" \
"    providing the top/left coordinates and width/height of your monitor screen which\n" \
"    effectively positions xlunch on the desired monitor. Use the following options:\n" \
"        -x, --xposition [i]                The x coordinate of the launcher window\n" \
"                                           Use negative number to align from right\n" \
"        -y, --yposition [i]                The y coordinate of the launcher window\n" \
"                                           Use negative number to align from bottom\n" \
"        -w, --width [i]                    The width of the launcher window\n" \
"        -h, --height [i]                   The height of the launcher window\n\n" \
"    Style options:\n" \
"        -p, --prompt [text]                The prompt asking for input (default: \"Run: \")\n" \
"        -f, --font [name]                  Font name including size after slash (default:\n" \
"                                           \"OpenSans-Regular/10\" and  \"DejaVuSans/10\")\n" \
"        -F, --promptfont [name]            Font to use for the prompt\n" \
"                                           (default: same as --font)\n" \
"        -G, --rootwindowbackground         Use root windows background image\n" \
"        -g, --background [file]            Image to set as background (jpg/png). NOTE: the\n" \
"                                           background color will be drawn over this image\n" \
"                                           so use a fully transparent background color if\n" \
"                                           the image should be drawn as-is.\n" \
"        --bgfill                           Makes the background keep aspect ratio\n" \
"                                           while stretching\n" \
"        -L, --highlight [file]             Image set as highlighting under selected icon\n" \
"                                           (jpg/png)\n" \
"        -I, --iconpadding [i]              Padding around icons (default: 10)\n" \
"            --iconvpadding [i]             Vertical padding around icons (default: same as\n" \
"                                           iconpadding)\n" \
"        -T, --textpadding [i]              Padding around entry titles (default: 10)\n" \
"        -c, --columns [i]                  Number of columns to show (without this the max\n" \
"                                           amount possible is used)\n" \
"        -r, --rows [i]                     Numbers of rows to show (without this the max\n" \
"                                           amount possible is used)\n" \
"        -b, --border [i]                   Size of the border around the icons and prompt\n" \
"                                           (default: 1/10th of screen width)\n" \
"                                           This can also be set to 'auto' in order to\n" \
"                                           automatically calculate a border taking into\n" \
"                                           account the margin settings and the\n" \
"                                           configured columns and rows. You can also specify\n" \
"                                           border in terms of percentage of screen width by\n" \
"                                           appending a %% sign to the value\n" \
"        -B, --sideborder [i]               Size of the border on the sides, if this is used\n" \
"                                           --border will be only top and bottom. Similarily\n" \
"                                           this can be set to 'auto' or a percentage but\n" \
"                                           then only side borders are calculated\n" \
"        --borderratio [i]                  The ratio of the border to apply above the\n" \
"                                           content. 0 is no top border, only bottom. 100 is\n" \
"                                           only top border, no bottom\n" \
"        --sideborderratio [i]              The ratio of the side border to apply to the\n" \
"                                           left of the content. 0 is no left border, only\n" \
"                                           right. 100 is only left border, no right\n" \
"        -C, --center                       Center entries when there are fewer entries on a\n" \
"                                           row than the maximum\n" \
"        -P, --promptspacing [i]            Distance between the prompt and the icons\n" \
"                                           (default: 48)\n" \
"        -s, --iconsize [i]                 Size of the icons (default: 48)\n" \
"        -a, --textafter                    Draw the title to the right of the icon instead\n" \
"                                           of below, this option automatically sets\n" \
"                                           --columns to 1 but this can be overridden.\n" \
"        -O, --textotherside                Draw the text on the other side of the icon from\n" \
"                                           where it is normally drawn.\n" \
"        -u, --upsidedown                   Draw the prompt on the bottom and have icons\n" \
"                                           sort from bottom to top.\n" \
"        -X, --paddingswap                  Icon padding and text padding swaps order\n" \
"                                           around text.\n" \
"        -l, --leastmargin [i]              Adds a margin to the calculation of\n" \
"                                           application sizes.\n" \
"        -V, --leastvmargin [i]             Adds a vertical margin to the calculation of\n" \
"                                           application sizes.\n" \
"        -e, --hidemissing                  Hide entries with missing or broken icon images\n" \
"        --tc, --textcolor [color]          Color to use for the text on the format rrggbbaa\n" \
"                                           (default: ffffffff)\n" \
"        --pc, --promptcolor [color]        Color to use for the prompt text\n" \
"                                           (default: ffffffff)\n" \
"        --bc, --backgroundcolor [color]    Color to use for the background\n" \
"                                           (default: 2e3440ff) NOTE: transparent background\n" \
"                                           color requires a compositor\n" \
"        --sc, --shadowcolor [color]        Color to use for text shadows (default: 00000030)\n" \
"        --hc, --highlightcolor [color]     Color to use for the highlight box\n" \
"                                           (default: ffffff32)\n" \
"        --scrollbarcolor [color]           Color to use for the scrollbar\n" \
"                                           (default: ffffff3c)\n" \
"        --scrollindicatorcolor [color]     Color to use for the scrollbar indicator\n" \
"                                           (default: ffffff70)\n\n"
#endif
