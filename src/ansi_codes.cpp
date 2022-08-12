#include "ansi_codes.hpp"
#include "fmt/format.h"
#include <stdint.h>
#include <string>

std::string ANSI::Bell()           { return fmt::format(ANSI::ESC, ANSI::codes::BELL); }
std::string ANSI::Backspace()      { return fmt::format(ANSI::ESC, ANSI::codes::BACKSPACE); }
std::string ANSI::HorizontalTab()  { return fmt::format(ANSI::ESC, ANSI::codes::HORIZONTAL_TAB); }
std::string ANSI::LineFeed()       { return fmt::format(ANSI::ESC, ANSI::codes::LINE_FEED); }
std::string ANSI::VerticalTab()    { return fmt::format(ANSI::ESC, ANSI::codes::VERTICAL_TAB); }
std::string ANSI::FormFeed()       { return fmt::format(ANSI::ESC, ANSI::codes::FORM_FEED); }
std::string ANSI::CarriageReturn() { return fmt::format(ANSI::ESC, ANSI::codes::CARRIAGE_RETURN); }
std::string ANSI::Delete()         { return fmt::format(ANSI::ESC, ANSI::codes::DELETE); }

std::string ANSI::HomeCursor()                       { return fmt::format(ANSI::ESC, ANSI::codes::HOME_CURSOR); }
std::string ANSI::MoveCursorPos(int line, int col)   { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::MOVE_CURSOR_POS, line, col)); }
std::string ANSI::MoveCursorUp(int lines)            { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::MOVE_CURSOR_UP, lines)); }
std::string ANSI::MoveCursorDown(int lines)          { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::MOVE_CURSOR_DOWN, lines)); }
std::string ANSI::MoveCursorRight(int cols)          { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::MOVE_CURSOR_RIGHT, cols)); }
std::string ANSI::MoveCursorLeft(int cols)           { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::MOVE_CURSOR_LEFT, cols)); }
std::string ANSI::MoveCursorDownLineBegin(int lines) { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::MOVE_CURSOR_DOWN_BEGIN, lines)); }
std::string ANSI::MoveCursorUpLineBegin(int lines)   { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::MOVE_CURSOR_UP_BEGIN, lines)); }
std::string ANSI::MoveCursorColumn(int col)          { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::MOVE_CURSOR_COLUMN, col)); }
std::string ANSI::MoveCursorOneUp()                  { return fmt::format(ANSI::ESC, ANSI::codes::MOVE_CURSOR_ONE_UP); }
std::string ANSI::SaveCursorPosDec()                 { return fmt::format(ANSI::ESC, ANSI::codes::SAVE_CURSOR_POS_DEC); }
std::string ANSI::RestoreCursorPosDec()              { return fmt::format(ANSI::ESC, ANSI::codes::RESTORE_CURSOR_POS_DEC); }
std::string ANSI::SaveCursorPosSoc()                 { return fmt::format(ANSI::ESC, ANSI::codes::SAVE_CURSOR_POS_SOC); }
std::string ANSI::RestoreCursorPosSoc()              { return fmt::format(ANSI::ESC, ANSI::codes::RESTORE_CURSOR_POS_SOC); }

std::string ANSI::EraseCursorToEnd()    { return fmt::format(ANSI::ESC, ANSI::codes::ERASE_CURSOR_TO_END); }
std::string ANSI::EraseCursorToStart()  { return fmt::format(ANSI::ESC, ANSI::codes::ERASE_CURSOR_TO_START); }
std::string ANSI::EraseScreen()         { return fmt::format(ANSI::ESC, ANSI::codes::ERASE_SCREEN); }
std::string ANSI::EraseSavedLines()     { return fmt::format(ANSI::ESC, ANSI::codes::ERASE_SAVED_LINES); }
std::string ANSI::EraseCursorToStartK() { return fmt::format(ANSI::ESC, ANSI::codes::ERASE_CURSOR_TO_START_K); }
std::string ANSI::EraseScreenK()        { return fmt::format(ANSI::ESC, ANSI::codes::ERASE_SCREEN_K); }
std::string ANSI::EraseSavedLinesK()    { return fmt::format(ANSI::ESC, ANSI::codes::ERASE_SAVED_LINES_K); }

std::string ANSI::GraphicsResetAllModes()                                                                                                                                                           { return fmt::format(ANSI::ESC, ANSI::codes::GRAPHICS_RESET_ALL); }
std::string ANSI::GraphicsModesSet(std::string m1)                                                                                                                                                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2)                                                                                                                                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3)                                                                                                                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2+m3)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4)                                                                                                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2+m3+m4)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5)                                                                                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2+m3+m4+m5)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6)                                                                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2+m3+m4+m5+m6)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7)                                                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2+m3+m4+m5+m6+m7)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8)                                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2+m3+m4+m5+m6+m7+m8)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8, std::string m9)                  { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2+m3+m4+m5+m6+m7+m8+m9)); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8, std::string m9, std::string m10) { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::GRAPHICS_MODES_SET, m1+m2+m3+m4+m5+m6+m7+m8+m9+m10)); }

std::string ANSI::GraphicsModeBoldOn()                     { return ANSI::codes::GRAPHICS_MODE_BOLD_ON; }
std::string ANSI::GraphicsModeBoldOff()                    { return ANSI::codes::GRAPHICS_MODE_BOLD_OFF; }
std::string ANSI::GraphicsModeDimOn()                      { return ANSI::codes::GRAPHICS_MODE_DIM_ON; }
std::string ANSI::GraphicsModeDimOff()                     { return ANSI::codes::GRAPHICS_MODE_DIM_OFF; }
std::string ANSI::GraphicsModeItalicOn()                   { return ANSI::codes::GRAPHICS_MODE_ITALIC_ON; }
std::string ANSI::GraphicsModeItalicOff()                  { return ANSI::codes::GRAPHICS_MODE_ITALIC_OFF; }
std::string ANSI::GraphicsModeUnderlineOn(bool doubleLine) { return doubleLine ? ANSI::codes::GRAPHICS_MODE_DOUBLE_UNDERLINE_ON : ANSI::codes::GRAPHICS_MODE_UNDERLINE_ON; }
std::string ANSI::GraphicsModeUnderlineOff()               { return ANSI::codes::GRAPHICS_MODE_UNDERLINE_OFF; }
std::string ANSI::GraphicsModeBlinkingOn()                 { return ANSI::codes::GRAPHICS_MODE_BLINKING_ON; }
std::string ANSI::GraphicsModeBlinkingOff()                { return ANSI::codes::GRAPHICS_MODE_BLINKING_OFF; }
std::string ANSI::GraphicsModeInvertedOn()                 { return ANSI::codes::GRAPHICS_MODE_INVERTED_ON; }
std::string ANSI::GraphicsModeInvertedOff()                { return ANSI::codes::GRAPHICS_MODE_INVERTED_OFF; }
std::string ANSI::GraphicsModeHiddenOn()                   { return ANSI::codes::GRAPHICS_MODE_HIDDEN_ON; }
std::string ANSI::GraphicsModeHiddenOff()                  { return ANSI::codes::GRAPHICS_MODE_HIDDEN_OFF; }
std::string ANSI::GraphicsModeStrikethroughOn()            { return ANSI::codes::GRAPHICS_MODE_STRIKETHROUGH_ON; }
std::string ANSI::GraphicsModeStrikethroughOf()            { return ANSI::codes::GRAPHICS_MODE_STRIKETHROUGH_OFF; }

std::string ANSI::ColorBlackFg()         { return ANSI::codes::COLOR_BLACK_FG; }
std::string ANSI::ColorRedFg()           { return ANSI::codes::COLOR_RED_FG; }
std::string ANSI::ColorGreenFg()         { return ANSI::codes::COLOR_GREEN_FG; }
std::string ANSI::ColorYellowFg()        { return ANSI::codes::COLOR_YELLOW_FG; }
std::string ANSI::ColorBlueFg()          { return ANSI::codes::COLOR_BLUE_FG; }
std::string ANSI::ColorMagentaFg()       { return ANSI::codes::COLOR_MAGENTA_FG; }
std::string ANSI::ColorCyanFg()          { return ANSI::codes::COLOR_CYAN_FG; }
std::string ANSI::ColorWhiteFg()         { return ANSI::codes::COLOR_WHITE_FG; }
std::string ANSI::ColorBrightBlackFg()   { return ANSI::codes::COLOR_BRIGHT_BLACK_FG; }
std::string ANSI::ColorBrightRedFg()     { return ANSI::codes::COLOR_BRIGHT_RED_FG; }
std::string ANSI::ColorBrightGreenFg()   { return ANSI::codes::COLOR_BRIGHT_GREEN_FG; }
std::string ANSI::ColorBrightYellowFg()  { return ANSI::codes::COLOR_BRIGHT_YELLOW_FG; }
std::string ANSI::ColorBrightBlueFg()    { return ANSI::codes::COLOR_BRIGHT_BLUE_FG; }
std::string ANSI::ColorBrightMagentaFg() { return ANSI::codes::COLOR_BRIGHT_MAGENTA_FG; }
std::string ANSI::ColorBrightCyanFg()    { return ANSI::codes::COLOR_BRIGHT_CYAN_FG; }
std::string ANSI::ColorBrightWhiteFg()   { return ANSI::codes::COLOR_BRIGHT_WHITE_FG; }
std::string ANSI::ColorFgReset()         { return ANSI::codes::COLOR_FG_RESET; }

std::string ANSI::ColorBlackBg()         { return ANSI::codes::COLOR_BLACK_BG; }
std::string ANSI::ColorRedBg()           { return ANSI::codes::COLOR_RED_BG; }
std::string ANSI::ColorGreenBg()         { return ANSI::codes::COLOR_GREEN_BG; }
std::string ANSI::ColorYellowBg()        { return ANSI::codes::COLOR_YELLOW_BG; }
std::string ANSI::ColorBlueBg()          { return ANSI::codes::COLOR_BLUE_BG; }
std::string ANSI::ColorMagentaBg()       { return ANSI::codes::COLOR_MAGENTA_BG; }
std::string ANSI::ColorCyanBg()          { return ANSI::codes::COLOR_CYAN_BG; }
std::string ANSI::ColorWhiteBg()         { return ANSI::codes::COLOR_WHITE_BG; }
std::string ANSI::ColorBrightBlackBg()   { return ANSI::codes::COLOR_BRIGHT_BLACK_BG; }
std::string ANSI::ColorBrightRedBg()     { return ANSI::codes::COLOR_BRIGHT_RED_BG; }
std::string ANSI::ColorBrightGreenBg()   { return ANSI::codes::COLOR_BRIGHT_GREEN_BG; }
std::string ANSI::ColorBrightYellowBg()  { return ANSI::codes::COLOR_BRIGHT_YELLOW_BG; }
std::string ANSI::ColorBrightBlueBg()    { return ANSI::codes::COLOR_BRIGHT_BLUE_BG; }
std::string ANSI::ColorBrightMagentaBg() { return ANSI::codes::COLOR_BRIGHT_MAGENTA_BG; }
std::string ANSI::ColorBrightCyanBg()    { return ANSI::codes::COLOR_BRIGHT_CYAN_BG; }
std::string ANSI::ColorBrightWhiteBg()   { return ANSI::codes::COLOR_BRIGHT_WHITE_BG; }
std::string ANSI::ColorBgReset()         { return ANSI::codes::COLOR_BG_RESET; }

std::string ANSI::Color255FG(uint8_t colorID)                 { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::COLOR_255_FG, colorID)); }
std::string ANSI::Color255BG(uint8_t colorID)                 { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::COLOR_255_BG, colorID)); }
std::string ANSI::ColorRGBFG(uint8_t r, uint8_t g, uint8_t b) { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::COLOR_RGB_FG, r, g, b)); }
std::string ANSI::ColorRGBBG(uint8_t r, uint8_t g, uint8_t b) { return fmt::format(ANSI::ESC, fmt::format(ANSI::codes::COLOR_RGB_BG, r, g, b)); }

std::string ANSI::PrivScreenModeInvisCursorOn()  { return fmt::format(ANSI::ESC, ANSI::codes::PRIV_SCREEN_MODE_INVIS_CURSOR_ON); }
std::string ANSI::PrivScreenModeInvisCursorOff() { return fmt::format(ANSI::ESC, ANSI::codes::PRIV_SCREEN_MODE_INVIS_CURSOR_OFF); }
std::string ANSI::PrivScreenModeRestoreScreen()  { return fmt::format(ANSI::ESC, ANSI::codes::PRIV_SCREEN_MODE_RESTORE_SCREEN); }
std::string ANSI::PrivScreenModeSaveScreen()     { return fmt::format(ANSI::ESC, ANSI::codes::PRIV_SCREEN_MODE_SAVE_SCREEN); }
