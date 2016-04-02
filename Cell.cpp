#include "Cell.hpp"
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
Cell::Cell():QGraphicsItem()

{

}

QRectF Cell::boundingRect() const
{
    return QRectF(0,0,50,50);
}

void Cell::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRect rect = QRect(0, 0, 50, 50);
    QFont font = painter->font();
    font.setPointSize(font.pointSize()*3);

    painter->drawRect(rect);
    painter->setFont(font);
    painter->drawText(rect,Qt::AlignCenter,m_text);
}


void Cell::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    event->accept();
}

void Cell::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    m_text = "X";
    update();
}
