#ifndef ENGINE_H
#define ENGINE_H


class Engine
{
public:
    Engine();
    void execute();
    void executeOperation();
    static void executeList();
private:
    void printAgain();
    void print();
    void printParam();

};

#endif // ENGINE_H
