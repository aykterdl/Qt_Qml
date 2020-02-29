#pragma once
#include <QAbstractListModel>
#include <QObject>
#include <QQmlListProperty>
#include <QtQml>

class ListModel: public QAbstractListModel
{
	Q_OBJECT
	Q_DISABLE_COPY(ListModel)	

	Q_PROPERTY(int count READ count NOTIFY countChanged)
	Q_PROPERTY(QQmlListProperty<QObject> content READ content)

	Q_CLASSINFO("DefaultProperty","content")

	public:
    explicit ListModel(QObject *parent = nullptr);
    static void registerTypes(const char *uri);
    QQmlListProperty<QObject> content();

    int rowCount(const QModelIndex &p) const;
    QVariant data(const QModelIndex &index, int role) const;
    QHash<int, QByteArray> roleNames() const;

    int count() const;

public slots:
    Q_INVOKABLE void append(QObject* o);
    Q_INVOKABLE void insert(QObject* o, int i);
    Q_INVOKABLE QObject* get(int i);

    static void dataObjectAppend(QQmlListProperty<QObject> *list, QObject *e);
    static int dataObjectCount(QQmlListProperty<QObject> *list);
    static QObject* dataObjectAt(QQmlListProperty<QObject> *list, int i);
    static void dataObjectClear(QQmlListProperty<QObject> *list);

signals:
    void countChanged(int count);

private:
    QList<QObject*> m_data;
};
