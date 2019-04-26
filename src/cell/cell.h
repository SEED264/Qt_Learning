#ifndef _CELL_H_
#define _CELL_H_

#include <QtWidgets/QTableWidgetItem>

class Cell : public QTableWidgetItem {
public:
    Cell();

    QTableWidgetItem* clone() const;
    void setData(int role, const QVariant &value);
    QVariant data(int role) const;
    void setFormula(const QString &formula);
    QString formula() const;
    void setDirty();

private:
    QVariant value() const;
    QVariant evalExpression(const QString &str, int &pos) const;
    QVariant evalTerm(const QString &str, int &pos) const;
    QVariant evalFactor(const QString &str, int &pos) const;

    mutable QVariant cachedValue;
    mutable bool cacheIsDirty;
};

#endif // _CELL_H_