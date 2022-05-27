#include "interactive.h"
#include <iostream>


Interactive::Interactive(int x, int y, Background* parent):RegularMove(x, y, parent)
{
    setFocus();
}

// toma é dent le coma

void Interactive::keyPressEvent(QKeyEvent* event)
{
    switch (event->key())
    {
    case Qt::Key_Up:
        arrow_pressed("UP");
        break;
    case Qt::Key_Down:
        arrow_pressed("DOWN");
        break;
    case Qt::Key_Left:
        arrow_pressed("LEFT");
        break;
    case Qt::Key_Right:
        arrow_pressed("RIGHT");
        break;
    default:
        QString text = event->text();
        if (text.size() == 1)
        {
            QChar ch = text[0];
            if (ch.isLetterOrNumber())
            {
                std::cout << ch.toLatin1() << std::endl;
                key_pressed(ch.toLatin1());
            }
        }
    }
}
