#ifndef ADDPERSONDIALOG_H
#define ADDPERSONDIALOG_H

#include <QDialog>

namespace Ui {
class AddPersonDialog;
}

class AddPersonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPersonDialog(QWidget *parent = nullptr);
    ~AddPersonDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddPersonDialog *ui;
};

#endif // ADDPERSONDIALOG_H
