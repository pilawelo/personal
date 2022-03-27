#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

enum class Color : int
{
    red,
    green,
    blue
};
enum class Size
{
    large,
    medium,
    small,
};

class Product
{
public:
    string m_Name;
    Color m_Color;
    Size m_Size;
    /* data */
public:

    Product(const string name, const Color color, const Size size);
};

Product::Product(const string name, const Color color, const Size size) :
    m_Name(name), m_Color(color), m_Size(size)
{
}

template <typename T>
struct Specification
{
    virtual bool IsSatisfied(T* item) = 0;
};

template <typename T>
struct Filter
{
    virtual vector<T*> DoFiltering(vector<T*> items, Specification<T>& spec) = 0;
};


struct SizeSpecification  : Specification<Product>
{
    Size m_Size;

    SizeSpecification(const Size s) : m_Size(s) {};
    
    virtual bool IsSatisfied(Product* item) override
    {
        return (item->m_Size == m_Size) ? true : false;
    }
};

struct ColorSpecification : Specification<Product>
{
    Color m_Color;
    virtual bool IsSatisfied(Product* item) override
    {
        return (item->m_Color == m_Color) ? true : false;
    }
};

struct ProductFilter : Filter<Product>
{
    virtual vector<Product*> DoFiltering(vector<Product*> items, Specification<Product>& spec) override
    {
        vector<Product*> filtered;
        for (auto& p : items)
        {
            if (spec.IsSatisfied(p))
            {
                filtered.push_back(p);
            }
        }
        return filtered;
    }
};





int main()
{
    Product apple{"apple", Color::green, Size::small};
    Product tree{"tree", Color::green, Size::large};
    Product house{"house",Color::blue,Size::large};

    vector<Product*> items = { &apple, &tree, &house};
    cout<<"Hello World" << endl;
    SizeSpecification sizeSpec{Size::large};
    ProductFilter pf;
    vector<Product*> p = pf.DoFiltering(items, sizeSpec);
    for(const auto& i : p)
    {
        cout<<i->m_Name << endl;
    }
    return 0;
}