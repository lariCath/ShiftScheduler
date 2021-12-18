#include "createschedule.h"
#include <string>

using namespace std;

void savetocsv(ManageDateInput *shiftdates){
    QDate startDate = shiftdates->GetStartDate();
    QDate endDate = shiftdates->GetEndDate();

    std::ofstream outputFile;
    std::ofstream fs;
    outputFile.open("Schedule.csv");

    outputFile << "Time" << ",";
      for(QDate day=startDate; day<=endDate; day=day.addDays(1)){
          outputFile << day.toString().toStdString() << ",";
      }
    outputFile << std::endl;
    outputFile << "8:00 - 12:00" << std::endl;
    outputFile << "12:00 - 18:00" << std::endl;
    outputFile.close();
    return;

}

