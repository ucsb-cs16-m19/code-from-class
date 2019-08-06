#include "drawing_and_sleeping.h"
#include <sys/ioctl.h>
#include <unistd.h>

void sleep(double seconds) 
{
    std::this_thread::sleep_for(std::chrono::microseconds(static_cast<int>(1e6 * seconds)));
}

void clearScreen() 
{
    cout << "\x1b[2J" << flush;
}

int getTerminalCols() 
{
    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
    return size.ws_col;
}

int getTerminalRows()
{
    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
    return size.ws_row;
}

void moveCursor(int row, int col) {
    cout << "\x1b[" << row << ";" << col << "H" << flush;
}

void drawCharAtPoint(Point p, char c)
{
    moveCursor(p.row, p.col);
    cout << c << flush;
    moveCursor(getTerminalRows(), getTerminalCols());
}