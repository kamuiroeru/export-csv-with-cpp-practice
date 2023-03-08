#include <fstream>
#include <iostream>
#include <string>

int main(void) {
    std::ofstream ofs("./example.csv");
    ofs << "column1,column2,column3" << std::endl;
    ofs << "0,1,2" << std::endl;
    ofs << "3,4,5" << std::endl;
    ofs << "6,7,8" << std::endl;

    return 0;
}

