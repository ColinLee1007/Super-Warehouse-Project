#include "membermanager.h"
#include <QDebug>

void MemberManager::addMember(const Member &member) {
    members.append(member);
}

bool MemberManager::removeMember(int id) {
    for (int i = 0; i < members.size(); ++i) {
        if (members[i].getId() == id) {
            members.removeAt(i);
            return true;
        }
    }
    return false;
}

Member* MemberManager::searchMember(int id) {
    for (Member &m : members) {
        if (m.getId() == id) {
            return &m;
        }
    }
    return nullptr;
}

QList<Member> MemberManager::getAllMembers() const {
    return members;
}

// 🔹 Save members to a file
void MemberManager::saveToFile(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    out << "Name, ID, Type, Expiry Date, Total Spent\n";

    for (const Member &m : members) {
        out << m.getName() << "," << m.getId() << "," << m.getTypeAsString() << ","
            << m.getExpiryDate() << "," << m.getTotalSpent() << "\n";
    }
    file.close();
}

// 🔹 Load members from a file
void MemberManager::loadFromFile(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    members.clear();

    if (!in.atEnd()) in.readLine(); // Skip header row

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() < 5) continue;

        QString name = parts[0];
        int id = parts[1].toInt();
        Member::MembershipType type = (parts[2] == "Basic") ? Member::BASIC : Member::PREFERRED;
        QString expiryDate = parts[3];
        double totalSpent = parts[4].toDouble();

        members.append(Member(name, id, type, expiryDate, totalSpent));
    }
    file.close();
}
