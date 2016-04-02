#ifndef CELL_HPP
#define CELL_HPP
#include <QGraphicsItem>


class Cell:public QGraphicsItem
{
public:
    Cell();

private:
    bool m_cellEmpty;

    // QGraphicsItem interface
public:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    QString m_text;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // CELL_HPP
