#ifndef MEMBERMANAGER_H
#define MEMBERMANAGER_H

#include "member.h"
#include <QList>
#include <QFile>
#include <QTextStream>

class MemberManager {
public:
    void addMember(const Member &member);
    bool removeMember(int id);
    Member* searchMember(int id);
    QList<Member> getAllMembers() const;

    void saveToFile(const QString &filename);
    void loadFromFile(const QString &filename);

private:
    QList<Member> members;
};

#endif // MEMBERMANAGER_H
