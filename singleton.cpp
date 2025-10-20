#include <iostream>
using namespace std;

//клас-одинак//
class Logger {
private:
    static Logger* instance;
    Logger() {} //приватний конструктор//

public:
    static Logger* getInstance() {
        if (instance == nullptr) {
            instance = new Logger();
        }
        return instance;
    }

    void log(const string& message) {
        cout << "Log: " << message << endl;
    }
};

// ініціалізація статичного члена
Logger* Logger::instance = nullptr;

int main() {
    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();

    logger1->log("Hello from logger!");
    logger2->log("This is the same instance.");

    return 0;
}