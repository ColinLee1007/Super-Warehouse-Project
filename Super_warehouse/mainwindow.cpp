#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    memberManager.loadFromFile("members.txt");

    // Connect UI buttons to corresponding functions
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::addMember);
    connect(ui->removeButton, &QPushButton::clicked, this, &MainWindow::removeMember);
    connect(ui->searchButton, &QPushButton::clicked, this, &MainWindow::searchMember);
    connect(ui->displayButton, &QPushButton::clicked, this, &MainWindow::displayAllMembers);
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::updateMember);
    connect(ui->readButton, &QPushButton::clicked, this, &MainWindow::readFromFile());
}

MainWindow::~MainWindow()
{
    memberManager.saveToFile("members.txt");
    delete ui;
}

// 🔹 Add a new member
void MainWindow::addMember()
{
    QString name = ui->nameInput->text();
    int id = ui->idInput->text().toInt();
    QString expiry = ui->expiryInput->text();
    bool isPreferred = ui->typeInput->isChecked();
    Member::MembershipType type = isPreferred ? Member::PREFERRED : Member::BASIC;

    if (name.isEmpty() || id <= 0 || expiry.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter valid member details.");
        return;
    }

    memberManager.addMember(Member(name, id, type, expiry));
    QMessageBox::information(this, "Success", "Member added successfully!");
}

// 🔹 Remove an existing member
void MainWindow::removeMember()
{
    int id = ui->idInput->text().toInt();
    if (memberManager.removeMember(id)) {
        QMessageBox::information(this, "Success", "Member removed.");
    } else {
        QMessageBox::warning(this, "Error", "Member not found.");
    }
}

// 🔹 Search for a member by ID
void MainWindow::searchMember()
{
    int id = ui->idInput->text().toInt();
    Member *m = memberManager.searchMember(id);

    if (m) {
        QMessageBox::information(this, "Member Found", m->toString());
    } else {
        QMessageBox::warning(this, "Error", "Member not found.");
    }
}

// 🔹 Display all members
void MainWindow::displayAllMembers()
{
    QList<Member> members = memberManager.getAllMembers();
    QString list;

    for (const Member &m : members) {
        list += m.toString() + "\n";
    }

    QMessageBox::information(this, "All Members", list.isEmpty() ? "No members found." : list);
}

// 🔹 Update an existing member
void MainWindow::updateMember()
{
    int id = ui->idInput->text().toInt();
    Member *m = memberManager.searchMember(id);

    if (!m) {
        QMessageBox::warning(this, "Error", "Member not found!");
        return;
    }

    // Get updated values
    QString newName = ui->nameInput->text();
    QString newExpiry = ui->expiryInput->text();
    bool isPreferred = ui->typeInput->isChecked();
    Member::MembershipType newType = isPreferred ? Member::PREFERRED : Member::BASIC;

    if (newName.isEmpty() || newExpiry.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter valid member details.");
        return;
    }

    // Apply updates
    m->setName(newName);
    m->setExpiryDate(newExpiry);
    m->setType(newType);

    memberManager.saveToFile("members.txt");

    QMessageBox::information(this, "Success", "Member updated successfully!");
}
