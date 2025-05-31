#include <iostream>
#include <string>

class Log {
  public:
    enum Level { ERROR = 0, WARN = 1, INFO = 2 };

  private:
    Level log_level = INFO;

  public:
    void set_level(Level level) { log_level = level; }

    void error(const std::string& msg) const {
        if (log_level >= ERROR)
            std::cout << "[ERROR] : " << msg << std::endl;
    }

    void warn(const std::string& msg) const {
        if (log_level >= WARN)
            std::cout << "[WARN] : " << msg << std::endl;
    }

    void info(const std::string& msg) const {
        if (log_level >= INFO)
            std::cout << "[INFO] : " << msg << std::endl;
    }
};
