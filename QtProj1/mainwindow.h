#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "list.h"
#include "QCryptographicHash"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    const QByteArray hash = "4ba29b9f9e5732ed33761840f4ba6c53";
    Ui::MainWindow *ui;
    list *window;
};
#endif // MAINWINDOW_H
