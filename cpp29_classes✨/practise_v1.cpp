#include <iostream>
using namespace std;

int main() {
    class Log {
      public:
        const int log_level_error   = 0;
        const int log_level_warning = 1;
        const int log_level_info    = 2;

      private:
        int log_level = log_level_info;

      public:
        void set_log_level(int value) { log_level = value; }
        void warn(const char* msg) {
            if (log_level >= log_level_warning)
                cout << "[WARN] : " << msg << endl;
        }
        void info(const char* msg) {
            if (log_level >= log_level_info)
                cout << "[INFO] : " << msg << endl;
        }
        void error(const char* msg) {
            if (log_level >= log_level_error)
                cout << "[ERROR] : " << msg << endl;
        }
    };

    Log log;

    log.set_log_level(0);
    log.warn("hello world!");
    log.error("hello world!");
    log.info("hello world!");
    return 0;
}
