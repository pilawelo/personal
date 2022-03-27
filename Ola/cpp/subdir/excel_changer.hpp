#ifndef EXCEL_CHANGER_HPP
#define EXCEL_CHANGER_HPP
#include <string>
#include "libxl.h"
#include <memory>
#include <vector>


struct BookDeleter {
  void operator()(libxl::Book* b);
};


class MyCell
{
public:
    // a lot of implicite conversions and other bad stuff but fuck it for now
    double numValue = {2};
    std::string strValue = "";
    int m_Size = {1};
    // const libxl::CellType m_Type;
    libxl::CellType m_Type;

    void setSize(int size) { m_Size = size;};
    MyCell(double d) : numValue(d), m_Type(libxl::CELLTYPE_NUMBER){};
    MyCell(const char* s) : strValue(s), m_Type(libxl::CELLTYPE_STRING){};
    operator double() { return numValue; };
    operator std::string() { return strValue; };

    // MyCell & operator= (MyCell & rhs) {
    //     MyCell x = MyCell(2);
    //     return x;
    // }

    friend std::ostream & operator<<(std::ostream & os, MyCell & obj);
};



class NewSheet
{
private:
    typedef std::shared_ptr<MyCell> cell_t; 

    std::string m_TemplateName;
    std::string m_FileName;
    // std::unique_ptr<libxl::Book, BookDeleter> m_TemplateBook;
    // std::unique_ptr<libxl::Book, BookDeleter> m_Book;
    libxl::Book* m_NewBook;
    libxl::Book* m_Book;
    libxl::Sheet* m_Sheet;
    std::vector<std::vector<MyCell>> m_Header;
    std::vector<std::vector<MyCell>> m_Data;
    std::vector<std::vector<MyCell>> m_NewData;

public:
    NewSheet(const std::string& templateName);
    ~NewSheet();
    void Initialize();
    void ReloadBook();
    void CopyData();
    void FormatData();
    void SaveData();

    friend std::ostream & operator<<(std::ostream & os, NewSheet & obj);
};



#endif