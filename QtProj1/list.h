#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include <QJsonObject>
#include <QJsonParseError>
#include <QFile>
#include <QStandardItem>
#include <QJsonObject>
#include <QJsonParseError>
#include <QFile>
#include <QLabel>
#include <QLineEdit>
#include "QSignalMapper"
#include <QJsonDocument>
#include <QJsonArray>
#include "QClipboard"
#include <openssl/evp.h>

namespace Ui {
class list;
}

class list : public QDialog
{
    Q_OBJECT

public:
    explicit list(QWidget *parent = nullptr);
    ~list();
    QJsonDocument doc;
    QByteArray key = "4ba29b9f9e5732ed33761840f4ba6c53";
    QJsonParseError docError;
    QFile file;

    QVector<QVector<QString>> dataVector;

    QList<QWidget *> widgetList;

private slots:

    int copy_login(int id);
    int copy_pass(int id);

    void on_find_textChanged(const QString &arg1);

private:
    Ui::list *ui;
};

#endif // LIST_H
