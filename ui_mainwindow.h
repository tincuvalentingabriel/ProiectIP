/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QComboBox *convert_unit;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *unit_1;
    QLineEdit *value;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *reset;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QComboBox *unit_2;
    QLineEdit *result;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QPushButton *convert;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(557, 434);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QLatin1String("alternate-background-color: rgb(170, 170, 127);\n"
"border-color: rgb(170, 0, 127);"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        formLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setWordWrap(true);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        formLayout_3->setLayout(2, QFormLayout::FieldRole, verticalLayout_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        convert_unit = new QComboBox(centralWidget);
        convert_unit->setObjectName(QStringLiteral("convert_unit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, convert_unit);


        gridLayout_2->addLayout(formLayout_3, 1, 0, 2, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        unit_1 = new QComboBox(centralWidget);
        unit_1->setObjectName(QStringLiteral("unit_1"));

        formLayout->setWidget(1, QFormLayout::FieldRole, unit_1);

        value = new QLineEdit(centralWidget);
        value->setObjectName(QStringLiteral("value"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(value->sizePolicy().hasHeightForWidth());
        value->setSizePolicy(sizePolicy2);

        formLayout->setWidget(3, QFormLayout::FieldRole, value);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer_2);


        gridLayout_2->addLayout(formLayout, 1, 1, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        reset = new QPushButton(centralWidget);
        reset->setObjectName(QStringLiteral("reset"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(reset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        unit_2 = new QComboBox(centralWidget);
        unit_2->setObjectName(QStringLiteral("unit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, unit_2);

        result = new QLineEdit(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        sizePolicy2.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, result);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(2, QFormLayout::FieldRole, verticalSpacer_3);


        gridLayout_2->addLayout(formLayout_2, 1, 4, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(-1, 34, -1, -1);
        convert = new QPushButton(centralWidget);
        convert->setObjectName(QStringLiteral("convert"));
        QIcon icon;
        icon.addFile(QStringLiteral("2000px-Right_arrow.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        convert->setIcon(icon);

        verticalLayout->addWidget(convert);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 2, 2, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 557, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(convert_unit, SIGNAL(currentIndexChanged(QString)), MainWindow, SLOT(SelectionUnit(QString)));
        QObject::connect(convert, SIGNAL(clicked()), MainWindow, SLOT(Transform()));
        QObject::connect(reset, SIGNAL(clicked()), MainWindow, SLOT(Reset()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Convertor", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">C</span></p><p><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">o</span></p><p><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">n</span></p><p><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">v</span></p><p><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">e</span></p><p><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">r</span></p><p><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">t</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Unit:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "From:", Q_NULLPTR));
        reset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "To:", Q_NULLPTR));
        convert->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
