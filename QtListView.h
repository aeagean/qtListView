﻿/**********************************************************
 * Author: Qt君
 * 微信公众号: Qt君(首发)
 * Website: qtbig.com(后续更新)
 * Email:  2088201923@qq.com
 * QQ交流群: 732271126
 * LISCENSE: MIT
 ************************************************************/
#ifndef CPP_QT_LISTVIEW_H
#define CPP_QT_LISTVIEW_H

#include "BaseListModel.h"

template <class M>
class QtListView : public BaseListModel
{
public:
    QtListView(QObject* parent = 0) : BaseListModel(parent) { }

    QVariant at(int index);
    int size();

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;

protected:
    const QList<M *> getItemList();
    void appendItem(M *item);
    void removeItem(int index);
    void resetList(QList<M *> & itemList);

private:
    QList<M *> m_list;
};

#include "QtListViewImpl.h"

#endif // CPP_QT_LISTVIEW_H

