#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Diary
{
    string Name;
    std::vector<string> Entries;
    int Count = 0;
    Diary(const string& name) : Name(name){};

    void AddEntry(const string& entry)
    {
        Entries.push_back(std::to_string(Count++) + " " + entry);
    }

    void SaveDiary()
    {
        // SingleResponsibility violation
    }
};

struct PersistanceMenager
{
    void SaveDiary(const Diary& diary, const string& filename)
    {
        ofstream os(filename);
        os<<diary.Name <<endl;
        for (auto& entry : diary.Entries)
        {
            os <<entry <<endl;
        }
    }
};



int main()
{
    cout<<"Hello World" << endl;
    Diary d("my Diary");
    d.AddEntry("dupa jasia");
    d.AddEntry("Ala ma kota");
    PersistanceMenager pm;
    pm.SaveDiary(d, "text.txt");
    return 0;
}