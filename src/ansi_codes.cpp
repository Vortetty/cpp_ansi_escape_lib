#include "ansi_codes.hpp"
#include <format>
#include <stdint.h>
#include <string>

std::string ANSI::Bell()           { return std::format(ANSI::ESC, ANSI::codes::BELL); }
std::string ANSI::Backspace()      { return std::format(ANSI::ESC); }
std::string ANSI::HorizontalTab()  { return std::format(ANSI::ESC); }
std::string ANSI::LineFeed()       { return std::format(ANSI::ESC); }
std::string ANSI::VerticalTab()    { return std::format(ANSI::ESC); }
std::string ANSI::FormFeed()       { return std::format(ANSI::ESC); }
std::string ANSI::CarriageReturn() { return std::format(ANSI::ESC); }
std::string ANSI::Delete()         { return std::format(ANSI::ESC); }

std::string ANSI::HomeCursor()                       { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorPos(int line, int col)   { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorUp(int lines)            { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorDown(int lines)          { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorRight(int cols)          { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorLeft(int cols)           { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorDownLineBegin(int lines) { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorUpLineBegin(int lines)   { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorColumn(int col)          { return std::format(ANSI::ESC); }
std::string ANSI::MoveCursorOneUp()                  { return std::format(ANSI::ESC); }
std::string ANSI::SaveCursorPosDec()                 { return std::format(ANSI::ESC); }
std::string ANSI::RestoreCursorPosDec()              { return std::format(ANSI::ESC); }
std::string ANSI::SaveCursorPosSoc()                 { return std::format(ANSI::ESC); }
std::string ANSI::RestoreCursorPosSoc()              { return std::format(ANSI::ESC); }

std::string ANSI::EraseCursorToEnd()    { return std::format(ANSI::ESC); }
std::string ANSI::EraseCursorToStart()  { return std::format(ANSI::ESC); }
std::string ANSI::EraseScreen()         { return std::format(ANSI::ESC); }
std::string ANSI::EraseCursorToEnd()    { return std::format(ANSI::ESC); }
std::string ANSI::EraseCursorToStartK() { return std::format(ANSI::ESC); }
std::string ANSI::EraseScreenK()        { return std::format(ANSI::ESC); }
std::string ANSI::EraseSavedLinesK()    { return std::format(ANSI::ESC); }

std::string ANSI::GraphicsResetAllModes()                                                                                                                                                           { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1)                                                                                                                                                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2)                                                                                                                                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3)                                                                                                                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4)                                                                                                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5)                                                                                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6)                                                                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7)                                                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8)                                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8, std::string m9)                  { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModesSet(std::string m1, std::string m2, std::string m3, std::string m4, std::string m5, std::string m6, std::string m7, std::string m8, std::string m9, std::string m10) { return std::format(ANSI::ESC); }

std::string ANSI::GraphicsModeBoldOn()                             { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeBoldOff()                            { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeDimOn()                              { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeDimOff()                             { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeItalicOn()                           { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeItalicOff()                          { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeUnderlineOn(bool doubleLine = false) { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeUnderlineOff()                       { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeBlinkingOn()                         { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeBlinkingOff()                        { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeInvertedOn()                         { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeInvertedOff()                        { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeHiddenOn()                           { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeHiddenOff()                          { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeStrikethroughOn()                    { return std::format(ANSI::ESC); }
std::string ANSI::GraphicsModeStrikethroughOf()                    { return std::format(ANSI::ESC); }

std::string ANSI::ColorBlackFg()         { return std::format(ANSI::ESC); }
std::string ANSI::ColorRedFg()           { return std::format(ANSI::ESC); }
std::string ANSI::ColorGreenFg()         { return std::format(ANSI::ESC); }
std::string ANSI::ColorYellowFg()        { return std::format(ANSI::ESC); }
std::string ANSI::ColorBlueFg()          { return std::format(ANSI::ESC); }
std::string ANSI::ColorMagentaFg()       { return std::format(ANSI::ESC); }
std::string ANSI::ColorCyanFg()          { return std::format(ANSI::ESC); }
std::string ANSI::ColorWhiteFg()         { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightBlackFg()   { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightRedFg()     { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightGreenFg()   { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightYellowFg()  { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightBlueFg()    { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightMagentaFg() { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightCyanFg()    { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightWhiteFg()   { return std::format(ANSI::ESC); }
std::string ANSI::ColorFgReset()         { return std::format(ANSI::ESC); }

std::string ANSI::ColorBlackBg()         { return std::format(ANSI::ESC); }
std::string ANSI::ColorRedBg()           { return std::format(ANSI::ESC); }
std::string ANSI::ColorGreenBg()         { return std::format(ANSI::ESC); }
std::string ANSI::ColorYellowBg()        { return std::format(ANSI::ESC); }
std::string ANSI::ColorBlueBg()          { return std::format(ANSI::ESC); }
std::string ANSI::ColorMagentaBg()       { return std::format(ANSI::ESC); }
std::string ANSI::ColorCyanBg()          { return std::format(ANSI::ESC); }
std::string ANSI::ColorWhiteBg()         { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightBlackFg()   { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightRedFg()     { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightGreenFg()   { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightYellowFg()  { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightBlueFg()    { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightMagentaFg() { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightCyanFg()    { return std::format(ANSI::ESC); }
std::string ANSI::ColorBrightWhiteFg()   { return std::format(ANSI::ESC); }
std::string ANSI::ColorBgReset()         { return std::format(ANSI::ESC); }

std::string ANSI::Color255FG(uint8_t colorID)                 { return std::format(ANSI::ESC); }
std::string ANSI::Color255BG(uint8_t colorID)                 { return std::format(ANSI::ESC); }
std::string ANSI::ColorRgbFG(uint8_t r, uint8_t g, uint8_t b) { return std::format(ANSI::ESC); }
std::string ANSI::ColorRgbBG(uint8_t r, uint8_t g, uint8_t b) { return std::format(ANSI::ESC); }

std::string ANSI::PrivScreenModeInvisCursorOn()  { return std::format(ANSI::ESC); }
std::string ANSI::PrivScreenModeInvisCursorOff() { return std::format(ANSI::ESC); }
std::string ANSI::PrivScreenModeRestoreScreen()  { return std::format(ANSI::ESC); }
std::string ANSI::PrivScreenModeSaveScreen()     { return std::format(ANSI::ESC); }
