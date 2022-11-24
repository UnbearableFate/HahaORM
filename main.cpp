//#include <google/protobuf/descriptor.h>

#include <iostream>

#include "CompanyRepository.h"
#include "DBConnector.h"
using namespace std;

int main() {
    DBConnector dbc;
    CompanyRepository rep(&dbc);
    auto res = rep.selectAll();
    for (auto r : res) {
        cout << r.id() << " " << r.name() << "" << r.last_year_income() << endl;
    }
    return 0;
}