#ifndef QUIT_H
#define QUIT_H

#include <QWidget>
#include <fstream>
#include <iostream>

using namespace std;

namespace Ui {
class quit;
}

class quit : public QWidget
{
    Q_OBJECT

public:
    explicit quit(QWidget *parent = nullptr);
    ~quit();
    void string_writeconfig(string file, string config_option) {
        ofstream fhandler;
        fhandler.open(file);
        fhandler << config_option;
        fhandler.close();
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_backBtn_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::quit *ui;
};

#endif // QUIT_H