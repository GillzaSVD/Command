#pragma once

#include <QObject>

class Command : public QObject
{
public:
    Command();
    ~Command();
    virtual void execute() = 0;
};