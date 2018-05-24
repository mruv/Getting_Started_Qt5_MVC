
#ifndef TABWIDGET_H
#define TABWIDGET_H

#include "tabledatapage.h"

#include <QTabWidget>
#include <QWidget>
#include <QString>
#include <QSqlDatabase>


class TabWidget : public QTabWidget {


public:
	explicit TabWidget(QWidget * = Q_NULLPTR);
	~TabWidget();

	void SetupUi();
	void Style();

public slots:
	void OnCloseTabRequest(int);
	void OnAddTab(TableDataPage *);

private:

	Q_OBJECT
};


#endif