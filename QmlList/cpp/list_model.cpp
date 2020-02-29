#include "list_model.h"


ListModel::ListModel(QObject *parent)
    : QAbstractListModel(parent)
{

}

void ListModel::registerTypes(const char *uri)
{
    qmlRegisterType<ListModel>(uri, 1, 0, "ListModel");
}

int ListModel::rowCount(const QModelIndex &p) const
{
    Q_UNUSED(p)
    return m_data.size();
}

QVariant ListModel::data(const QModelIndex &index, int role) const
{
    Q_UNUSED(role)
    return QVariant::fromValue(m_data[index.row()]);
}

QHash<int, QByteArray> ListModel::roleNames() const
{
    static QHash<int, QByteArray> *pHash;
    if (!pHash) {
        pHash = new QHash<int, QByteArray>;
        (*pHash)[Qt::UserRole + 1] = "dataObject";
    }
    return *pHash;
}

int ListModel::count() const
{
    return m_data.count();
}

void ListModel::append(QObject *o) {
    int i = m_data.size();
    beginInsertRows(QModelIndex(), i, i);
    m_data.append(o);

    // Emit changed signals
    emit countChanged(count());

    endInsertRows();
}

void ListModel::insert(QObject *o, int i)
{
    beginInsertRows(QModelIndex(), i, i);
    m_data.insert(i, o);
    o->setParent(this);

    // Emit changed signals
    emit countChanged(count());

    endInsertRows();
}

QObject* ListModel::get(int i)
{
    Q_ASSERT(i >= 0 && i <= m_data.count());
    return m_data[i];
}

QQmlListProperty<QObject> ListModel::content()
{
    return QQmlListProperty<QObject>(this,
                                     0,
                                     &ListModel::dataObjectAppend,
                                     &ListModel::dataObjectCount,
                                     &ListModel::dataObjectAt,
                                     &ListModel::dataObjectClear);
}

void ListModel::dataObjectAppend(QQmlListProperty<QObject> *list, QObject *o)
{
    ListModel *dom = qobject_cast<ListModel*>(list->object);
    if (dom && o) {
        dom->m_data.append(o);
    }
}

int ListModel::dataObjectCount(QQmlListProperty<QObject> *list)
{
    ListModel *dom = qobject_cast<ListModel*>(list->object);
    if (dom) {
        return dom->m_data.count();
    }
    return 0;
}

QObject *ListModel::dataObjectAt(QQmlListProperty<QObject> *list, int i)
{
    ListModel *dom = qobject_cast<ListModel*>(list->object);
    if (dom) {
        return dom->m_data.at(i);
    }
    return 0;
}

void ListModel::dataObjectClear(QQmlListProperty<QObject> *list)
{
    ListModel *dom = qobject_cast<ListModel*>(list->object);
    if (dom) {
        dom->m_data.clear();
    }
}