#include "game_2048.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game_2048 w;
    w.show();
    return a.exec();
}
