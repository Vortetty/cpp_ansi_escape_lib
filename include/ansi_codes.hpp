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
    extern constexpr char *ESC = (char*)"\x1B{}";
    extern constexpr char *CSI = (char*)"\x9B{}"; // Alternative: `ESC[` | These aren't needed, just here because they are an alternative way to do escape codes
    extern constexpr char *DCS = (char*)"\x90{}"; // Alternative: `ESCP` | These aren't needed, just here because they are an alternative way to do escape codes
    extern constexpr char *OSC = (char*)"\x9D{}"; // Alternative: `ESC]` | These aren't needed, just here because they are an alternative way to do escape codes

    namespace codes {
    // General codes
        extern constexpr char *BELL            = (char*)"\x07";
        extern constexpr char *BACKSPACE       = (char*)"\x08";
        extern constexpr char *HORIZONTAL_TAB  = (char*)"\x09";
        extern constexpr char *LINE_FEED       = (char*)"\x0A";
        extern constexpr char *VERTICAL_TAB    = (char*)"\x0B";
        extern constexpr char *FORM_FEED       = (char*)"\x0C";
        extern constexpr char *CARRIAGE_RETURN = (char*)"\x0D";
        extern constexpr char *DELETE          = (char*)"\x7F";

    // Cursor control
        extern constexpr char *HOME_CURSOR            = (char*)"[H";
        extern constexpr char *MOVE_CURSOR_POS        = (char*)"[{};{}H";
        extern constexpr char *MOVE_CURSOR_UP         = (char*)"[{}A";
        extern constexpr char *MOVE_CURSOR_DOWN       = (char*)"[{}B";
        extern constexpr char *MOVE_CURSOR_RIGHT      = (char*)"[{}C";
        extern constexpr char *MOVE_CURSOR_LEFT       = (char*)"[{}D";
        extern constexpr char *MOVE_CURSOR_DOWN_BEGIN = (char*)"[{}E";
        extern constexpr char *MOVE_CURSOR_UP_BEGIN   = (char*)"[{}F";
        extern constexpr char *MOVE_CURSOR_COLUMN     = (char*)"[{}G";
        /* extern constexpr char *REQUEST_CURSOR_POS     = (char*)"6n"; */ // Enable when you find a way to actually do this
        extern constexpr char *MOVE_CURSOR_ONE_UP     = (char*)"M";
        extern constexpr char *SAVE_CURSOR_POS_DEC    = (char*)"7";  // DEC ONLY
        extern constexpr char *RESTORE_CURSOR_POS_DEC = (char*)"8";  // DEC ONLY
        extern constexpr char *SAVE_CURSOR_POS_SOC    = (char*)"[s"; // SCO ONLY
        extern constexpr char *RESTORE_CURSOR_POS_SOC = (char*)"[u"; // SCO ONLY

    // Erase funcs
        extern constexpr char *ERASE_CURSOR_TO_END     = (char*)"[0J";
        extern constexpr char *ERASE_CURSOR_TO_START   = (char*)"[1J";
        extern constexpr char *ERASE_SCREEN            = (char*)"[2J";
        extern constexpr char *ERASE_SAVED_LINES       = (char*)"[3J";
        extern constexpr char *ERASE_CURSOR_TO_START_K = (char*)"[1K";
        extern constexpr char *ERASE_SCREEN_K          = (char*)"[2K";
        extern constexpr char *ERASE_SAVED_LINES_K     = (char*)"[3K";

    // Graphics
        extern constexpr char *GRAPHICS_RESET_ALL                = (char*)"[0m";
        extern constexpr char *GRAPHICS_MODES_SET                = (char*)"[1;34{}m";
        extern constexpr char *GRAPHICS_MODE_BOLD_ON             = (char*)";1";
        extern constexpr char *GRAPHICS_MODE_BOLD_OFF            = (char*)";22";
        extern constexpr char *GRAPHICS_MODE_DIM_ON              = (char*)";2";
        extern constexpr char *GRAPHICS_MODE_DIM_OFF             = (char*)";22";
        extern constexpr char *GRAPHICS_MODE_ITALIC_ON           = (char*)";3";
        extern constexpr char *GRAPHICS_MODE_ITALIC_OFF          = (char*)";23";
        extern constexpr char *GRAPHICS_MODE_UNDERLINE_ON        = (char*)";4";
        extern constexpr char *GRAPHICS_MODE_DOUBLE_UNDERLINE_ON = (char*)";21";
        extern constexpr char *GRAPHICS_MODE_UNDERLINE_OFF       = (char*)";24";
        extern constexpr char *GRAPHICS_MODE_BLINKING_ON         = (char*)";5";  // Seemingly rarely supported, normally appears as another modifier
        extern constexpr char *GRAPHICS_MODE_BLINKING_OFF        = (char*)";25"; // Seemingly rarely supported, normally appears as another modifier
        extern constexpr char *GRAPHICS_MODE_INVERTED_ON         = (char*)";7";
        extern constexpr char *GRAPHICS_MODE_INVERTED_OFF        = (char*)";27";
        extern constexpr char *GRAPHICS_MODE_HIDDEN_ON           = (char*)";8";
        extern constexpr char *GRAPHICS_MODE_HIDDEN_OFF          = (char*)";28";
        extern constexpr char *GRAPHICS_MODE_STRIKETHROUGH_ON    = (char*)";9";
        extern constexpr char *GRAPHICS_MODE_STRIKETHROUGH_OFF   = (char*)";29";
        extern constexpr char *COLOR_BLACK_FG                    = (char*)";30";
        extern constexpr char *COLOR_RED_FG                      = (char*)";31";
        extern constexpr char *COLOR_GREEN_FG                    = (char*)";32";
        extern constexpr char *COLOR_YELLOW_FG                   = (char*)";33";
        extern constexpr char *COLOR_BLUE_FG                     = (char*)";34";
        extern constexpr char *COLOR_MAGENTA_FG                  = (char*)";35";
        extern constexpr char *COLOR_CYAN_FG                     = (char*)";36";
        extern constexpr char *COLOR_WHITE_FG                    = (char*)";37";
        extern constexpr char *COLOR_BRIGHT_BLACK_FG             = (char*)";90";
        extern constexpr char *COLOR_BRIGHT_RED_FG               = (char*)";91";
        extern constexpr char *COLOR_BRIGHT_GREEN_FG             = (char*)";92";
        extern constexpr char *COLOR_BRIGHT_YELLOW_FG            = (char*)";93";
        extern constexpr char *COLOR_BRIGHT_BLUE_FG              = (char*)";94";
        extern constexpr char *COLOR_BRIGHT_MAGENTA_FG           = (char*)";95";
        extern constexpr char *COLOR_BRIGHT_CYAN_FG              = (char*)";96";
        extern constexpr char *COLOR_BRIGHT_WHITE_FG             = (char*)";97";
        extern constexpr char *COLOR_FG_RESET                    = (char*)";39";

        extern constexpr char *COLOR_BLACK_BG                    = (char*)";40";
        extern constexpr char *COLOR_RED_BG                      = (char*)";41";
        extern constexpr char *COLOR_GREEN_BG                    = (char*)";42";
        extern constexpr char *COLOR_YELLOW_BG                   = (char*)";43";
        extern constexpr char *COLOR_BLUE_BG                     = (char*)";44";
        extern constexpr char *COLOR_MAGENTA_BG                  = (char*)";45";
        extern constexpr char *COLOR_CYAN_BG                     = (char*)";46";
        extern constexpr char *COLOR_WHITE_BG                    = (char*)";47";
        extern constexpr char *COLOR_BRIGHT_BLACK_BG             = (char*)";100";
        extern constexpr char *COLOR_BRIGHT_RED_BG               = (char*)";101";
        extern constexpr char *COLOR_BRIGHT_GREEN_BG             = (char*)";102";
        extern constexpr char *COLOR_BRIGHT_YELLOW_BG            = (char*)";103";
        extern constexpr char *COLOR_BRIGHT_BLUE_BG              = (char*)";104";
        extern constexpr char *COLOR_BRIGHT_MAGENTA_BG           = (char*)";105";
        extern constexpr char *COLOR_BRIGHT_CYAN_BG              = (char*)";106";
        extern constexpr char *COLOR_BRIGHT_WHITE_BG             = (char*)";107";
        extern constexpr char *COLOR_BG_RESET                    = (char*)";49";

        extern constexpr char *COLOR_255_FG = (char*)"[38;5;{}m";
        extern constexpr char *COLOR_255_BG = (char*)"[48;5;{}m";

        extern constexpr char *COLOR_RGB_FG = (char*)"[38;2;{};{};{}m";
        extern constexpr char *COLOR_RGB_BG = (char*)"[48;2;{};{};{}m";

    // Screen modes
        //extern constexpr char *SCREEN_MODE_40x25_MONOCHROME      = (char*)"[=0h";
        //extern constexpr char *SCREEN_MODE_40x25_COLOR           = (char*)"[=1h";
        //extern constexpr char *SCREEN_MODE_80x25_MONOCHROME      = (char*)"[=2h";
        //extern constexpr char *SCREEN_MODE_80x25_COLOR           = (char*)"[=3h";
        //extern constexpr char *SCREEN_MODE_320x200_4_COLOR       = (char*)"[=4h";
        //extern constexpr char *SCREEN_MODE_320x200_MONOCHROME    = (char*)"[=5h";
        //extern constexpr char *SCREEN_MODE_640x200_MONOCHROME    = (char*)"[=6h";
        //extern constexpr char *SCREEN_MODE_LINE_WRAP_ON          = (char*)"[=7h";
        //extern constexpr char *SCREEN_MODE_320x240_COLOR         = (char*)"[=13h";
        //extern constexpr char *SCREEN_MODE_640x200_16_COLOR      = (char*)"[=14h";
        //extern constexpr char *SCREEN_MODE_640x350_2_COLOR       = (char*)"[=15h";
        //extern constexpr char *SCREEN_MODE_640x350_16_COLOR      = (char*)"[=16h";
        //extern constexpr char *SCREEN_MODE_640x480_2_COLOR       = (char*)"[=17h";
        //extern constexpr char *SCREEN_MODE_640x480_16_COLOR      = (char*)"[=18h";
        //extern constexpr char *SCREEN_MODE_320x240_256_COLOR     = (char*)"[=19h";

        extern constexpr char *PRIV_SCREEN_MODE_INVIS_CURSOR_ON  = (char*)"[?25l";   // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        extern constexpr char *PRIV_SCREEN_MODE_INVIS_CURSOR_OFF = (char*)"[?25h";   // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        extern constexpr char *PRIV_SCREEN_MODE_RESTORE_SCREEN   = (char*)"[?47l";   // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        extern constexpr char *PRIV_SCREEN_MODE_SAVE_SCREEN      = (char*)"[?47h";   // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        //extern constexpr char *PRIV_SCREEN_MODE_ALT_BUFFER_ON    = (char*)"[?1049h"; // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them
        //extern constexpr char *PRIV_SCREEN_MODE_ALT_BUFFER_OFF   = (char*)"[?1049l"; // Private modes work in most terminals, not all, most multiplexers(ex. tmux) will not support them

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
    std::string EraseSavedLines();
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
    std::string ColorBrightBlackBg();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightRedBg();                             // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightGreenBg();                           // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightYellowBg();                          // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightBlueBg();                            // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightMagentaBg();                         // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightCyanBg();                            // These return a partial code, pass them to the `graphicsModeSet` function
    std::string ColorBrightWhiteBg();                           // These return a partial code, pass them to the `graphicsModeSet` function
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