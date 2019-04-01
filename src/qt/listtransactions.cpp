#include "listtransactions.h"
#include "transactiontablemodel.h"
ListTransactions::ListTransactions(QWidget *parent):
   QListView(parent),
   m_lastRow(-1)
{
   // We need to enable mouse-tracking because we need to know
   // about every mouse-movement.
   setMouseTracking(true);
}


void ListTransactions::mouseMoveEvent(QMouseEvent *event)
{
   QAbstractItemModel *m(model());
   // Only do something when a model is set.
   if (m)
   {
      QModelIndex index = indexAt(event->pos());
      TransactionTableModel* tr= static_cast<TransactionTableModel*>(m);

      if (index.isValid())
      {
         // When the index is valid, compare it to the last row.
         // Only do something when the the mouse has moved to a new row.
            QRect recIndex = visualRect(index);
          if (index.row() != m_lastRow && event->pos().x() >=  width()-60)
          {
              if(recIndex.height() > 64){
                    if(event->pos().y() < recIndex.y() + recIndex.height()/2.5){
                        m_lastRow = index.row();
                        // Request the data for the MyMouseCursorRole.


                        tr->setHover(m_lastRow);
                        int height_s = height();
                        setFixedHeight(height_s+1);
                        setCursor(Qt::PointingHandCursor);
                        setFixedHeight(height_s);
                    }
              }
              else{
                  m_lastRow = index.row();
                  // Request the data for the MyMouseCursorRole.


                  tr->setHover(m_lastRow);
                  int height_s = height();
                  setFixedHeight(height_s+1);
                  setCursor(Qt::PointingHandCursor);
                  setFixedHeight(height_s);
              }


          }else if(index.row() == m_lastRow ){
              if(event->pos().x() <  width()-60){
                  m_lastRow = -1;
                  tr->setHover(-1);
                  int height_s = height();
                      setCursor(Qt::ArrowCursor);
                  setFixedHeight(height_s+1);
                  setFixedHeight(height_s);
              }
              else{
                  if(recIndex.height() > 64){
                        if(event->pos().y() > recIndex.y() + recIndex.height()/2.5){
                            m_lastRow = -1;
                            tr->setHover(-1);
                            int height_s = height();

                            setFixedHeight(height_s+1);
                            setFixedHeight(height_s);
                        }
                  }

              }

          }
          if(recIndex.height() > 64){
            if(event->pos().y() > recIndex.y() + recIndex.height()/2.5)
                setCursor(Qt::PointingHandCursor);
            else if(event->pos().x() <  width()-60)
                setCursor(Qt::ArrowCursor);
          }else if(event->pos().x() <  width()-60){
             setCursor(Qt::ArrowCursor);
          }

      }
      else
      {
         if (m_lastRow != -1)
         {
            // Set he mouse-cursor to the default when it isn't already.

             tr->setHover(-1);
         }
         m_lastRow = -1;
      }
   }
   QListView::mouseMoveEvent(event);
}

void ListTransactions::leaveEvent(QEvent * event){
    QListView::leaveEvent(event);
    QAbstractItemModel *m(model());
    TransactionTableModel* tr= static_cast<TransactionTableModel*>(m);
    m_lastRow = -1;
    tr->setHover(m_lastRow);
    int height_s = height();
    setFixedHeight(height_s+1);
    setFixedHeight(height_s);
        setCursor(Qt::ArrowCursor);
}
void ListTransactions::enterEvent(QEvent * event){
    QListView::enterEvent(event);
    QAbstractItemModel *m(model());
    // Only do something when a model is set.
    if (m)
    {
       QModelIndex index = indexAt(QCursor::pos());
       TransactionTableModel* tr= static_cast<TransactionTableModel*>(m);
       if (index.isValid())
       {
          // When the index is valid, compare it to the last row.
          // Only do something when the the mouse has moved to a new row.
           QRect recIndex = visualRect(index);

          if (index.row() != m_lastRow && QCursor::pos().x() >=  x() + width()-60)
          {
              if(recIndex.height() > 64){
                    if(QCursor::pos().y() < recIndex.y() + recIndex.height()/2.5){
                        m_lastRow = index.row();

                        tr->setHover(m_lastRow);
                        setCursor(Qt::PointingHandCursor);

                    }
              }
              else{
                  m_lastRow = index.row();
                  // Request the data for the MyMouseCursorRole.


                  tr->setHover(m_lastRow);
          ;
                  setCursor(Qt::PointingHandCursor);
              }

          }else if(index.row() == m_lastRow ){
              if(QCursor::pos().x() <  width()-60){
                  m_lastRow = -1;
                  tr->setHover(-1);
                      setCursor(Qt::ArrowCursor);

              }
              else{
                  if(recIndex.height() > 64){
                        if(QCursor::pos().y() > recIndex.y() + recIndex.height()/2.5){
                            m_lastRow = -1;
                            tr->setHover(-1);
                                setCursor(Qt::ArrowCursor);

                        }
                  }

              }

          }
          if(recIndex.height() > 64){
            if(QCursor::pos().y() > recIndex.y() + recIndex.height()/2.5)
                setCursor(Qt::PointingHandCursor);
            else if(QCursor::pos().x() <  width()-60)
                setCursor(Qt::ArrowCursor);
          }else if(QCursor::pos().x() <  width()-60){
             setCursor(Qt::ArrowCursor);
          }
       }
       else
       {
          if (m_lastRow != -1)
          {
             // Set he mouse-cursor to the default when it isn't already.

              tr->setHover(-1);

          }
          m_lastRow = -1;
       }
    }
    int height_s = height();
    setFixedHeight(height_s+1);
    setFixedHeight(height_s);
}
