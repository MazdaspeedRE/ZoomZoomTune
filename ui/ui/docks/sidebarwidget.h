#ifndef SIDEBARWIDGET_H
#define SIDEBARWIDGET_H

#include <QWidget>

namespace lt
{
struct TableDefinition;
}

class QLabel;
class QLineEdit;
class QToolButton;

class SidebarWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SidebarWidget(QWidget * parent = nullptr);

public slots:
    void fillTableInfo(const lt::TableDefinition * table);

private slots:
    void on_treeToolButton_clicked(bool checked);

private:
    QToolButton * tableInfoButton_;
    QWidget * tableInfo_;

    QLabel * tableDescription_;

    QLineEdit * tableName_;
    QLineEdit * tableOffset_;
    QLineEdit * tableWidth_;
    QLineEdit * tableHeight_;
    QLineEdit * tableRange_;
    QLineEdit * tableUnit_;
    QLineEdit * tableDataType_;
};

#endif // SIDEBARWIDGET_H
