#include "coincontroltreewidget.h"
#include "coincontroldialog.h"

CoinControlTreeWidget::CoinControlTreeWidget(QWidget *parent) :
    QTreeWidget(parent)
{
 setStyleSheet("QTreeWidget {\n    show-decoration-selected: 1;\nborder:0px;\n}\n\nQTreeWidget::item {\n     border: 1px solid #d9d9d9;\n    border-top-color: transparent;\n    border-bottom-color: transparent;\n}\n\nQTreeWidget::item:hover {\n    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e7effd, stop: 1 #cbdaf1);\n    border: 1px solid #bfcde4;\n}\n\nQTreeWidget::item:selected {\n    border: 1px solid #567dbc;\n}\n\nQTreeWidget::item:selected:active{\n    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ea1f1, stop: 1 #567dbc);\n}\n\nQTreeWidget::item:selected:!active {\n    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6b9be8, stop: 1 #577fbf);\n}\nQHeaderView::section\n    {\n    spacing: 10px;\n    background-color:#003750;\n    color: white;\n    padding:5px;\n    font-weight:bold;\n    font-size:12px;\n    border: 0px;\n    text-align: right;\n    font-family: arial;\n    }\n\nQTreeWidget::branch {\n        background: palette(base);\n}\n\nQTreeWidget::branch:has-siblings:!adjoins-item {\n        background: cyan;\n}\n\nQTreeWidget::branch:has-siblings:adjoins-item {\n        background: red;\n}\n\nQTreeWidget::branch:!has-children:!has-siblings:adjoins-item {\n        background: blue;\n}\n\nQTreeWidget::branch:closed:has-children:has-siblings {\n        background: pink;\n}\n\nQTreeWidget::branch:has-children:!has-siblings:closed {\n        background: gray;\n}\n\nQTreeWidget::branch:open:has-children:has-siblings {\n        background: magenta;\n}\n\nQTreeWidget::branch:open:has-children:!has-siblings {\n        background: green;\n}");
}

void CoinControlTreeWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space) // press spacebar -> select checkbox
    {
        event->ignore();
        int COLUMN_CHECKBOX = 0;
        this->currentItem()->setCheckState(COLUMN_CHECKBOX, ((this->currentItem()->checkState(COLUMN_CHECKBOX) == Qt::Checked) ? Qt::Unchecked : Qt::Checked));
    }
    else if (event->key() == Qt::Key_Escape) // press esc -> close dialog
    {
        event->ignore();
        CoinControlDialog *coinControlDialog = (CoinControlDialog*)this->parentWidget();
        coinControlDialog->done(QDialog::Accepted);
    }
    else
    {
        this->QTreeWidget::keyPressEvent(event);
    }
}
