#ifndef SINGLETON_P_H
#define SINGLETON_P_H


class Singleton_P
{
private:
    Singleton_P();
    static Singleton_P* instance;
    static int n_Instances;
public:
    static Singleton_P* getInstance();
};

#endif // SINGLETON_P_H
