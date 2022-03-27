#include <iostream>
#include <memory>
#include "excel_changer.hpp"
#include <vector>
using namespace std;
using namespace libxl;

std::ostream & operator<<(std::ostream & os, MyCell & obj) 
{ 
    if(obj.m_Type == CELLTYPE_NUMBER)
    {
        os << obj.numValue;
    }
    if(obj.m_Type == CELLTYPE_STRING)
    {
        os << obj.strValue;
    }     
    return os;
}

void BookDeleter::operator()(Book* b) 
{
    // cout << "release dat maderfaker!" <<endl;
    // b->release(); 
}

NewSheet::NewSheet(const string& templateName) : 
    m_TemplateName(templateName),
    m_FileName(templateName),
    m_NewBook(xlCreateXMLBook()),
    m_Book(xlCreateXMLBook()),
    m_Sheet(nullptr)
{
    string secpart = "_FORMATED";
    m_FileName.insert(m_FileName.end()-5, secpart.begin(), secpart.end());
}

NewSheet::~NewSheet()
{
    // bad code! but fuck it
    // if(!m_Book->save(m_FileName.c_str()))
    // {
    //     cout << "Damn I cant save that file:" << m_FileName << endl;
    // }
    // cout << "File: " << m_FileName << " saved" << endl;
}
void NewSheet::FormatData()
{
    cout << m_Data.size() << " " << m_Data[1].size() <<endl;

    // instantiate vector object of type std::vector<int>
    std::vector<std::vector<int>> matrix;
    int default_value = 1;
    // resize the vector to `M` elements of type std::vector<int>,
    // each having size `N` and default value
    MyCell x(2);
    m_NewData.resize(m_Data.size()*2, std::vector<MyCell>(m_Data[1].size()/2, x));

    cout << m_NewData.size() << " " << m_NewData[1].size() <<endl;
    for(int col = 0; col<m_Data.size(); col++)
    {
        // std::vector<MyCell> v;
        for(int row = 1; row<=m_Data[1].size(); row=row+2)
        {
            m_NewData[col*2][row/2] = m_Data[col][row-1];
            m_NewData[col*2+1][row/2] = m_Data[col][row+1-1];
            // cout << "1[" << col*2<<"]["<<"["<<row/2<<"]"<< " = [" << col<<"]["<<row-1<<"]" <<endl;
            // cout << "2[" << col*2+1<<"]["<<"["<<row/2<<"]"<< " = [" << col<<"]["<<"["<<row-1+1<<"]" <<endl;
            // m_NewData[row][col] = 
        }
        // cout <<endl;
        // m_Data.push_back(v);
    }

    // for(auto& i : m_NewData)
    // {
    //     for(auto& j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout <<endl;
    // }
}

void NewSheet::SaveData()
{
    Book* book = xlCreateXMLBook();
    Sheet* sheet = book->addSheet("none");
    for(int col = 0; col<m_NewData.size(); col++)
    {
        // std::vector<MyCell> v;
        for(int row = 0; row<m_NewData[1].size(); row++)
        {
            sheet->writeNum(row+1, col, m_NewData[col][row]);
            if (sheet->cellType(row+1, col) != CELLTYPE_NUMBER)
            {
                sheet->writeNum(row+1, col, m_NewData[col][row]);
            }
        }
    }
    book->save(m_FileName.c_str());
    book->release();
}


ostream & operator<<(ostream& os, NewSheet& ns)
{
    for(auto& i : ns.m_Data)
    {
        for(auto& j : i)
        {
            os << j << " ";
        }
        os <<endl;
    }
    return os;
}

void NewSheet::CopyData()
{
    ReloadBook();

    int col = m_Sheet->firstCol()+1;
    const int initRow = m_Sheet->firstRow()+3;
    int row = initRow;
    int maxRow = 4;
    int maxCol = 4;
    while(m_Sheet->cellType(maxRow, 5) == CELLTYPE_NUMBER)
    {
        maxRow++;
    }
    while(m_Sheet->cellType(5, maxCol) == CELLTYPE_NUMBER)
    {
        maxCol++;
    }
    cout<< "max Column " <<maxCol << " max Row " <<maxRow <<endl;

    for(int col = m_Sheet->firstRow()+1; col<maxCol; col++)
    {
        std::vector<MyCell> v;
        for(int row = initRow; row<maxRow; row++)
        {
            if (m_Sheet->cellType(row, col) == CELLTYPE_NUMBER)
            {
                v.push_back(m_Sheet->readNum(row, col));
            }
            else
            {
                cout << "Ola chyba cos tu namieszala :/ | " << m_TemplateName << " | row " << row << " | col" << col <<endl; 
                throw std::runtime_error("wrong cell format");
            }
               
        }
        m_Data.push_back(v);
        ReloadBook();
    }

    // cout<<endl <<"row= "<< row<<" col= "<<col<<" num= "<< m_Sheet->readNum(20, 128) <<endl;
    // cout<<endl <<"row= "<< row<<" col= "<<col<<" typ= "<< m_Sheet->cellType(20, 128) <<endl;
    // cout<<endl <<"row= "<< row<<" col= "<<col<<" str= "<< m_Sheet->readStr(20, 128) <<endl;
}

void NewSheet::ReloadBook()
{
    m_Book->release();
    m_Book = xlCreateXMLBook();
    if(m_Book->load(m_TemplateName.c_str()))
    {
        m_Sheet = m_Book->getSheet(0);
    }
}

void NewSheet::Initialize()
{

}

