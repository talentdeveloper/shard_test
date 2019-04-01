#ifndef RPCConsole_Widget_H
#define RPCConsole_Widget_H

#include <QWidget>

namespace Ui {
    class RPCConsole_Widget;
}
class ClientModel;

/** Local Bitcoin RPC console. */
class RPCConsole_Widget: public QWidget
{
    Q_OBJECT

public:
    explicit RPCConsole_Widget(QWidget *parent = 0);
    ~RPCConsole_Widget();

    enum Tabs {
        Info = 0,
        Console = 1,
        Network = 3,
    };

    void setClientModel(ClientModel *model);
    void setCurrentTab(Tabs tab);

    enum MessageClass {
        MC_ERROR,
        MC_DEBUG,
        CMD_REQUEST,
        CMD_REPLY,
        CMD_ERROR
    };

protected:
    virtual bool eventFilter(QObject* obj, QEvent *event);

private slots:
    void on_lineEdit_returnPressed();
    void on_tabWidget_currentChanged(int index);
    /** open the debug.log from the current datadir */
    void on_openDebugLogfileButton_clicked();
    /** display messagebox with program parameters (same as bitcoin-qt --help) */
    void on_showCLOptionsButton_clicked();
    /** change the time range of the network traffic graph */
    void on_sldGraphRange_valueChanged(int value);
    /** update traffic statistics */
    void updateTrafficStats(quint64 totalBytesIn, quint64 totalBytesOut);
    /** clear traffic graph */
    void on_btnClearTrafficGraph_clicked();

public slots:
    void clear();
    void message(int category, const QString &message, bool html = false);
    /** Set number of connections shown in the UI */
    void setNumConnections(int count);
    /** Set number of blocks shown in the UI */
    void setNumBlocks(int count);
    /** Go forward or back in history */
    void browseHistory(int offset);
    /** Scroll console view to end */
    void scrollToEnd();
signals:
    // For RPC command executor
    void stopExecutor();
    void cmdRequest(const QString &command);

private:
    static QString FormatBytes(quint64 bytes);
    void setTrafficGraphRange(int mins);

    Ui::RPCConsole_Widget *ui;
    ClientModel *clientModel;
    QStringList history;
    int historyPtr;

    void startExecutor();
};

#endif // RPCConsole_Widget_H
