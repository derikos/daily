#ifndef IMMORTAL_H
#define IMMORTAL_H


class Immortal
{
private:
    Immortal();
    static Immortal* s_Instance;
public:
    static Immortal* getInstance();
};

#endif // IMMORTAL_H
