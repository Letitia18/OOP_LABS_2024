#include "Canvas.h"
int main() {
    Canvas canvas(20, 10);
    canvas.DrawCircle(10, 5, 3, '*');
    canvas.FillCircle(15, 5, 2, '&');
    canvas.DrawRect(5, 3, 15, 7, '+');
    canvas.FillRect(2, 1, 18, 9, '=');
    canvas.DrawLine(2, 2, 18, 8, '-');
    canvas.Print();
    return 0;
}