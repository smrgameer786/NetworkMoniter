/********************************************************************************
** Form generated from reading UI file 'addipdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDIPDIALOG_H
#define UI_ADDIPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddIPDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txtName;
    QLabel *label_2;
    QLineEdit *txtIP;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSave;
    QPushButton *btnCancel;

    void setupUi(QDialog *AddIPDialog)
    {
        if (AddIPDialog->objectName().isEmpty())
            AddIPDialog->setObjectName("AddIPDialog");
        AddIPDialog->resize(496, 302);
        AddIPDialog->setMinimumSize(QSize(350, 180));
        AddIPDialog->setStyleSheet(QString::fromUtf8("QDialog{\n"
"    background:#ffffff;\n"
"}\n"
"\n"
"QLineEdit{\n"
"    border:1px solid #cccccc;\n"
"    border-radius:4px;\n"
"    padding:5px;\n"
"    min-height:28px;\n"
"}\n"
"\n"
"QPushButton{\n"
"    min-height:32px;\n"
"    border:1px solid #cccccc;\n"
"    border-radius:4px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background:#f0f0f0;\n"
"}"));
        layoutWidget = new QWidget(AddIPDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1, 1, 491, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        txtName = new QLineEdit(layoutWidget);
        txtName->setObjectName("txtName");

        verticalLayout->addWidget(txtName);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        txtIP = new QLineEdit(layoutWidget);
        txtIP->setObjectName("txtIP");

        verticalLayout->addWidget(txtIP);

        layoutWidget1 = new QWidget(AddIPDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 230, 491, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget1);
        btnSave->setObjectName("btnSave");

        horizontalLayout->addWidget(btnSave);

        btnCancel = new QPushButton(layoutWidget1);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(AddIPDialog);

        QMetaObject::connectSlotsByName(AddIPDialog);
    } // setupUi

    void retranslateUi(QDialog *AddIPDialog)
    {
        AddIPDialog->setWindowTitle(QCoreApplication::translate("AddIPDialog", "Add IP Address", nullptr));
        label->setText(QCoreApplication::translate("AddIPDialog", "Device Name:", nullptr));
        label_2->setText(QCoreApplication::translate("AddIPDialog", "IP Address:", nullptr));
        btnSave->setText(QCoreApplication::translate("AddIPDialog", "Save Ip", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddIPDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddIPDialog: public Ui_AddIPDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDIPDIALOG_H
