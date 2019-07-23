#ifndef FLGWEIGHT_H
#define FLGWEIGHT_H

#include <iostream>

class IPlayer
{
public:
    virtual ~IPlayer() {}

    //分配武器
    virtual void assignWeapon(std::string weapon) = 0;

    virtual void mission() = 0;

protected:
    std::string m_task; //内部状态
    std::string m_weapon; //外部状态
};

#endif // FLGWEIGHT_H
