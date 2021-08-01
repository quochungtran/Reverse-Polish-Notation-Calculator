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

class CalculatorException : public std::runtime_error
{
    std::string info;

public:
    CalculatorException(const std::string &str) : runtime_error{str} {}
    std::string getInfo() const { return info; }
};
#endif