#ifndef MEMBER_H
#define MEMBER_H

#include <QString>

class Member {
public:
    enum MembershipType { BASIC, PREFERRED };

    Member(QString name, int id, MembershipType type, QString expiryDate, double totalSpent = 0.0);

    QString getName() const;
    int getId() const;
    MembershipType getType() const;
    QString getExpiryDate() const;
    double getTotalSpent() const;
    double getRebate() const;
    QString getTypeAsString() const;

    // 🔹 Setters for updating member details
    void setName(const QString &newName);
    void setExpiryDate(const QString &newExpiry);
    void setType(MembershipType newType);
    void setTotalSpent(double amount);

    QString toString() const;

private:
    QString name;
    int id;
    MembershipType type;
    QString expiryDate;
    double totalSpent;
};

#endif // MEMBER_H
