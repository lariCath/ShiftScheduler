#ifndef CREATESCHEDULE_H
#define CREATESCHEDULE_H

#include <iostream>
#include <fstream>
#include <string>
#include "managedateinput.h"
#include "shift.h"

void savetocsv(ManageDateInput *shiftdates, QList<Shift> morning, QList<Shift> evening);
void converttopdf();

#endif
