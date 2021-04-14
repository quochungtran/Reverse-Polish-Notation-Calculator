#ifndef CalculatorException_h
#define CalculatorException_h
#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QHeaderView>
#include <QDebug>
#include <QPushButton>
#include <QString>


using namespace std;

class CalculatorException : public std::runtime_error
{
    string info;

public:
    CalculatorException(const string &str) : runtime_error{str} {}
    string getInfo() const { return info; }
};
#endif