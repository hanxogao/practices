#ifndef SALES_DATA
#define SALES_DATA
#include<iostream>
struct Sales_data{
    //数据成员
    unsigned units_sold = 0;
    std::string bookNo;
    double revenue = 0.0;
    //函数
    //const作用：修改隐式this指针的类型
    std::string isbn() const { return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

#endif