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
   painter->drawRect(0,0,50,50);
   painter->drawText(10,10,m_text);
}

void Cell::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    event->accept();
}

void Cell::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    m_text = "x";
}
