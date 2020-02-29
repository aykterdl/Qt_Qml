#include "backend.h"

backend::backend(QObject *parent) :
    QObject(parent)
{
}

QString backend::userName()
{
    return m_userName;
}

void backend::setUserName(const QString &userName)
{
    if (userName == m_userName)
        return;

    m_userName = userName;
    emit userNameChanged();
}
