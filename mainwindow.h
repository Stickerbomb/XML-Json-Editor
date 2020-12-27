#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qserializer.h"
#include <QMainWindow>
#include <QStandardItemModel>
#include <QtXml>

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
    void on_choose_file_button_clicked();

    void on_choose_file_button_2_clicked();

    void on_Load_from_json_Button_clicked();

    void on_Save_to_json_Button_clicked();

private:
    QSerializer serializer;
    QJsonDocument jsondocument;
    QDomDocument document;
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    void read(QString _noed);
    void write(QStandardItem *item, QDomDocument &dom_root);
    void traverseShow(const QDomNode &_elem, QStandardItem *subModel);
};
#endif // MAINWINDOW_H