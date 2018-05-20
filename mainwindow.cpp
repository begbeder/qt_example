#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createitemwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Добавляем обработчики событий нажатия кнопок
    connect(ui->createItemButton, SIGNAL(clicked()),this, SLOT(createItemButton_clicked()));
    connect(ui->createItemButton_2, SIGNAL(clicked()),this, SLOT(createItemButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createItemButton_clicked()
{
    // По клику на кнопку создается экземпляр нового окна
    // Создание экземпляра класса CreateItemWindow
    // this - контекстный объект родительского класса
    CreateItemWindow createItemWindow;

    // Вызов необходимых методов
    createItemWindow.setModal(true);
    createItemWindow.exec();
}
