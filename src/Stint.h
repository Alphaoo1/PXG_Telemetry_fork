#ifndef STINT_H
#define STINT_H

#include <QVector>
#include <QStringList>
#include <QDateTime>

#include "Lap.h"
#include "Tyres.h"
#include "UdpSpecification.h"

class Stint : public Lap
{
public:
	Stint(const QStringList& dataNames = {});

	QString description() const;

	int nbLaps() const;

	// Saving - Loading
	static Stint* fromFile(const QString& filename);

	QVector<float> lapTimes;

protected:
	virtual void saveData(QDataStream& out) const;
	virtual void loadData(QDataStream& in);
};

#endif // STINT_H
