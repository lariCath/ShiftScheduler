#include "createschedule.h"
#include <string>
#include<QList>

using namespace std;

void savetocsv(ManageDateInput *shiftdates, QList<Shift> morning, QList<Shift> evening){
    QDate startDate = shiftdates->GetStartDate();
    QDate endDate = shiftdates->GetEndDate();

    std::ofstream outputFile;
    std::ofstream fs;
    outputFile.open("Schedule.csv");

    outputFile << "Time";
    for(QDate day=startDate; day<=endDate; day=day.addDays(1)){
        outputFile << "," << day.toString().toStdString();
    }
    outputFile << std::endl;
    outputFile << "8:00 - 12:00";
    for(Shift &employee : morning) {
        outputFile << "," << employee.GetName().toStdString();
    }
    outputFile << std::endl;

    outputFile << "12:00 - 18:00";
    for(Shift &employee : evening) {
        outputFile << "," << employee.GetName().toStdString();
    }
//    outputFile.close();
    return;

}

