// Copyright 2022 wintersys
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <stdint.h>
#include <string>

namespace ANSI {
    extern const std::string ESC = "\x1B{}";
    extern const std::string CSI = "\x9B{}"; // Alternative: `ESC[` | These aren't needed, just here because they are an alternative way to do escape codes
    extern const std::string DCS = "\x90{}"; // Alternative: `ESCP` | These aren't needed, just here because they are an alternative way to do escape codes
    extern const std::string OSC = "\x9D{}"; // Alternative: `ESC]` | These aren't needed, just here because they are an alternative way to do escape codes

    namespace codes {
    // General codes
        extern const std::string BELL            = "\x07";
        extern const std::string BACKSPACE       = "\x08";
        extern const std::string HORIZONTAL_TAB  = "\x09";
        extern const std::string LINE_FEED       = "\x0A";
        extern const std::string VERTICAL_TAB    = "\x0B";
        extern const std::string FORM_FEED       = "\x0C";
        extern const std::string CARRIAGE_RETURN = "\x0D";
        extern const std::string DELETE          = "\x7F";

    // Cursor control
        extern const std::string HOME_CURSOR            = "[H";
        extern const std::string MOVE_CURSOR_POS        = "[{};{}H";
        extern const std::string MOVE_CURSOR_UP         = "[{}A";
        extern const std::string MOVE_CURSOR_DOWN       = "[{}B";
        extern const std::string MOVE_CURSOR_RIGHT      = "[{}C";
        extern const std::string MOVE_CURSOR_LEFT       = "[{}D";
        extern const std::string MOVE_CURSOR_DOWN_BEGIN = "[{}E";
        extern const std::string MOVE_CURSOR_UP_BEGIN   = "[{}F";
        extern const std::string MOVE_CURSOR_COLUMN     = "[{}G";
        /* extern const std::string REQUEST_CURSOR_POS     = "6n"; */ // Enable when you find a way to actually do this
        extern const std::string MOVE_CURSOR_ONE_UP     = "M";
        extern const std::string SAVE_CURSOR_POS_DEC    = "7";  // DEC ONLY
        extern const std::string RESTORE_CURSOR_POS_DEC = "8";  // DEC ONLY
        extern const std::string SAVE_CURSOR_POS_SOC    = "[s"; // SCO ONLY
        extern const std::string RESTORE_CURSOR_POS_SOC = "[u"; // SCO ONLY

    // Erase funcs
        extern const std::string ERASE_CURSOR_TO_END     = "[0J";
        extern const std::string ERASE_CURSOR_TO_START   = "[1J";
        extern const std::string ERASE_SCREEN            = "[2J";
        extern const std::string ERASE_CURSOR_TO_END     = "[0J";
        extern const std::string ERASE_CURSOR_TO_START_K = "[1K";
        extern const std::string ERASE_SCREEN_K          = "[2K";
        extern const std::string ERASE_SAVED_LINES_K     = "[3K";

    // Graphics
        extern const std::string GRAPHICS_RESET_ALL                = "[0m";
        extern const std::string GRAPHICS_MODES_SET                = "[1;34{}m";
        extern const std::string GRAPHICS_MODE_BOLD_ON             = ";1";
        extern const std::string GRAPHICS_MODE_BOLD_OFF            = ";22";
        extern const std::string GRAPHICS_MODE_DIM_ON              = ";2";
        extern const std::string GRAPHICS_MODE_DIM_OFF             = ";22";
        extern const std::string GRAPHICS_MODE_ITALIC_ON           = ";3";
        extern const std::string GRAPHICS_MODE_ITALIC_OFF          = ";23";
        extern const std::string GRAPHICS_MODE_UNDERLINE_ON        = ";4";
        extern const std::string GRAPHICS_MODE_DOUBLE_UNDERLINE_ON = ";21";
        extern const std::string GRAPHICS_MODE_UNDERLINE_OFF       = ";24";
        extern const std::string GRAPHICS_MODE_BLINKING_ON         = ";5";  // Seemingly rarely supported, normally appears as another modifier
        extern const std::string GRAPHICS_MODE_BLINKING_OFF        = ";25"; // Seemingly rarely supported, normally appears as another modifier
        extern const std::string GRAPHICS_MODE_INVERTED_ON         = ";7";
        extern const std::string GRAPHICS_MODE_INVERTED_OFF        = ";27";
        extern const std::string GRAPHICS_MODE_HIDDEN_ON           = ";8";
        extern const std::string GRAPHICS_MODE_HIDDEN_OFF          = ";28";
        extern const std::string GRAPHICS_MODE_STRIKETHROUGH_ON    = ";9";
        extern const std::string GRAPHICS_MODE_STRIKETHROUGH_OFF   = ";29";
        extern const std::string COLOR_BLACK_FG                    = ";30";
        extern const std::string COLOR_RED_FG                      = ";31";
        extern const std::string COLOR_GREEN_FG                    = ";32";
        extern const std::string COLOR_YELLOW_FG                   = ";33";
        extern const std::string COLOR_BLUE_FG                     = ";34";
        extern const std::string COLOR_MAGENTA_FG                  = ";35";
        extern const std::string COLOR_CYAN_FG                     = ";36";
        extern const std::string COLOR_WHITE_FG                    = ";37";
        extern const std::string COLOR_BRIGHT_BLACK_FG             = ";90";
        extern const std::string COLOR_BRIGHT_RED_FG               = ";91";
        extern const std::string COLOR_BRIGHT_GREEN_FG             = ";92";
        extern const std::string COLOR_BRIGHT_YELLOW_FG            = ";93";
        extern const std::string COLOR_BRIGHT_BLUE_FG              = ";94";
        extern const std::string COLOR_BRIGHT_MAGENTA_FG           = ";95";
        extern const std::string COLOR_BRIGHT_CYAN_FG              = ";96";
        extern const std::string COLOR_BRIGHT_WHITE_FG             = ";97";
        extern const std::string COLOR_FG_RESET                    = ";39";

        extern const std::string COLOR_BLACK_BG                    = ";40";
        extern const std::string COLOR_RED_BG                      = ";41";
        extern const std::string COLOR_GREEN_BG                    = ";42";
        extern const std::string COLOR_YELLOW_BG                   = ";43";
        extern const std::string COLOR_BLUE_BG                     = ";44";
        extern const std::string COLOR_MAGENTA_BG                  = ";45";
        extern const std::string COLOR_CYAN_BG                     = ";46";
        extern const std::string COLOR_WHITE_BG                    = ";47";
        extern const std::string COLOR_BRIGHT_BLACK_FG             = ";100";
        extern const std::string COLOR_BRIGHT_RED_FG               = ";101";
        extern const std::string COLOR_BRIGHT_GREEN_FG             = ";102";
        extern const std::string COLOR_BRIGHT_YELLOW_FG            = ";103";
        extern const std::string COLOR_BRIGHT_BLUE_FG              = ";104";
        extern const std::string COLOR_BRIGHT_MAGENTA_FG           = ";105";
        extern const std::string COLOR_BRIGHT_CYAN_FG              = ";106";
        extern const std::string COLOR_BRIGHT_WHITE_FG             = ";107";
        extern const std::string COLOR_BG_RESET                    = ";49";

        extern const std::string COLOR_255_FG = "[38;5;{}m";
        extern const std::string COLOR_255_BG = "[48;5;{}m";

        extern const std::string COLOR_RGB_FG = "[38;2;{};{};{}m";
        extern const std::string COLOR_RGB_BG = "[48;2;{};{};{}m";

    // Screen modes
        //extern const std::string SCREEN_MODE_40x25_MONOCHROME      = "[=0h";
        //extern const std::string SCREEN_MODE_40x25_COLOR           = "[=1h";
        //extern const std::string SCREEN_MODE_80x25_MONOCHROME      = "[=2h";
        //extern const std::string SCREEN_MODE_80x25_COLOR           = "[=3h";
        //extern const std::string SCREEN_MODE_320x200_4_COLOR       = "[=4h";
        //extern const std::string SCREEN_MODE_320x200_MONOCHROME    = "[=5h";
        //extern const std::string SCREEN_MODE_640x200_MONOCHROME    = "[=6h";
        //extern const std::string SCREEN_MODE_LINE_WRAP_ON          = "[=7h";
        //extern const std::string SCREEN_MODE_320x240_COLOR         = "[=13h";
        //extern const std::string SCREEN_MODE_640x200_16_COLOR      = "[=14h";
        //extern const std::string SCREEN_MODE_640x350_2_COLOR       = "[=15h";
        //extern const std::string SCREEN_MODE_640x350_16_COLOR      = "[=16h";
        //extern const std::string SCREEN_MODE_640x480_2_COLOR       = "[=17h";
        //extern const std::string SCREEN_MODE_640x480_16_COLOR      = "[=18h";
        //extern const std::string SCREEN_MODE_320x240_256_COLOR     = "[=19h";

        extern const std::string PRIV_SCREEN_MODE_INVIS_CURSOR_ON  = "[?25l";   // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        extern const std::string PRIV_SCREEN_MODE_INVIS_CURSOR_OFF = "[?25h";   // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        extern const std::string PRIV_SCREEN_MODE_RESTORE_SCREEN   = "[?47l";   // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        extern const std::string PRIV_SCREEN_MODE_SAVE_SCREEN      = "[?47h";   // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        //extern const std::string PRIV_SCREEN_MODE_ALT_BUFFER_ON    = "[?1049h"; // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        //extern const std::string PRIV_SCREEN_MODE_ALT_BUFFER_OFF   = "[?1049l"; // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them

    // keyboard codes
        // no, just no, i am not touching that shit right now
    }

    std::string Bell();
    std::string Backspace();
    std::string HorizontalTab();
    std::string LineFeed();
    std::string VerticalTab();
    std::string FormFeed();
    std::string CarriageReturn();
    std::string Delete();

    std::string HomeCursor();
    std::string MoveCursorPos(int line, int col);
    std::string MoveCursorUp(int lines);
    std::string MoveCursorDown(int lines);
    std::string MoveCursorRight(int cols);
    std::string MoveCursorLeft(int cols);
    std::string MoveCursorDownLineBegin(int lines);
    std::string MoveCursorUpLineBegin(int lines);
    std::string MoveCursorColumn(int col);
    std::string MoveCursorOneUp();
    std::string SaveCursorPosDec();
    std::string RestoreCursorPosDec();
    std::string SaveCursorPosSoc();
    std::string RestoreCursorPosSoc();

    std::string EraseCursorToEnd();
    std::string EraseCursorToStart();
    std::string EraseScreen();
    std::string EraseCursorToEnd();
    std::string EraseCursorToStartK();
    std::string EraseScreenK();
    std::string EraseSavedLinesK();

    std::string GraphicsResetAllModes();
    std::string GraphicsModesSet(std::string m1);
    std::string GraphicsModesSet(std::string m1, std::string m2);
    std::string GraphicsModesSet(std::string m1, std::string m2, std::string m3);
    std::string GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4);
    std::string GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5);
    std::string GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6);
    std::string GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7);
    std::string GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8);
    std::string GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8, std::string m9);
    std::string GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8, std::string m9, std::string m10);

    std::string GraphicsModeBoldOn();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeBoldOff();                          // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeDimOn();                            // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeDimOff();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeItalicOn();                         // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeItalicOff();                        // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeUnderlineOn(bool doubleLine=false); // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeUnderlineOff();                     // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeBlinkingOn();                       // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeBlinkingOff();                      // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeInvertedOn();                       // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeInvertedOff();                      // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeHiddenOn();                         // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeHiddenOff();                        // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeStrikethroughOn();                  // These return a partial code, pass them to the `graphicsModeSet` function
    std::string GraphicsModeStrikethroughOf();                  // These return a partial code, pass them to the `graphicsModeSet` function

    std::string ColorBlackFg();                                 // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorRedFg();                                   // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorGreenFg();                                 // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorYellowFg();                                // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBlueFg();                                  // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorMagentaFg();                               // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorCyanFg();                                  // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorWhiteFg();                                 // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightBlackFg();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightRedFg();                             // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightGreenFg();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightYellowFg();                          // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightBlueFg();                            // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightMagentaFg();                         // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightCyanFg();                            // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightWhiteFg();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorFgReset();                                 // These return a partial code, pass them to the `graphicsModeSet` function

    std::string ColorBlackBg();                                 // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorRedBg();                                   // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorGreenBg();                                 // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorYellowBg();                                // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBlueBg();                                  // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorMagentaBg();                               // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorCyanBg();                                  // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorWhiteBg();                                 // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightBlackFg();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightRedFg();                             // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightGreenFg();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightYellowFg();                          // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightBlueFg();                            // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightMagentaFg();                         // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightCyanFg();                            // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightWhiteFg();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBgReset();                                 // These return a partial code, pass them to the `graphicsModeSet` function

    std::string Color255FG(uint8_t colorID);
    std::string Color255BG(uint8_t colorID);
    std::string ColorRgbFG(uint8_t r, uint8_t g, uint8_t b);
    std::string ColorRgbBG(uint8_t r, uint8_t g, uint8_t b);

    std::string PrivScreenModeInvisCursorOn();
    std::string PrivScreenModeInvisCursorOff();
    std::string PrivScreenModeRestoreScreen();
    std::string PrivScreenModeSaveScreen();
}