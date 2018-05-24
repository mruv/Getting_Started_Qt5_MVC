
#ifndef DBRSCHEMA_h
#define DBRSCHEMA_h


#include "abstractresource.h"
#include "resourcetype.h"

#include <QTreeWidgetItem>
#include <QString>


// Database Resource Schema
class DbrSchema : public AbstractResource {


public:
	explicit DbrSchema(const QString&, const QString&, QTreeWidgetItem * = Q_NULLPTR);
	~DbrSchema();

	QString SchemaName() const;
	QString ConnectionName() const;

private:

	Q_OBJECT

	
	QString mSchemaName;
	QString mConnectionName;
};



#endif