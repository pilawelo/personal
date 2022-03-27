#include <iostream>
#include "excel_changer.hpp"

#include "libxl.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <memory>

using namespace std;
using namespace libxl;

int main()
{
     std::vector<std::shared_ptr<NewSheet>> files = 
    {
        make_shared<NewSheet>("/home/user/Ola/files/IOA_BALAS.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_CHRZASTEK.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_CZUCZMAN.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_FRACZEK.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_GAIDZIK.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_GALKOWSKI.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_GORACY.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_GORZALA.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_IWASZKO.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_KUBIAK.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_KWAPISZ.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_MIKOLAJEWSKA.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_NAZARKIEWICZ.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_OSADNIK.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_PALAC.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_PASIEK.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_PIOTROWSKI.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_RYCHTER.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_STAWECKA.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_SZCZYPIOR.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_SZPIEGA.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_SZRYT.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_SZWED.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_WARSKA_KUBIAK.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_WEISS.xlsx"),
        make_shared<NewSheet>("/home/user/Ola/files/IOA_ZIELINSKI.xlsx")
    };
    
    for (auto& f : files)
    {
        f->CopyData();
        f->FormatData();
        f->SaveData();
    }
    // NewSheet ns("/home/user/Ola/files/IOA_BALAS.xlsx");

    // ns.Initialize();
    // cout << "Lets make Ola Happy :D " <<endl;
    // ns.CopyHeader(3);
    // ns.CopyData();
    // cout<< ns <<endl;
    // ns.FormatData();
    // ns.SaveData();

    return 0;
}