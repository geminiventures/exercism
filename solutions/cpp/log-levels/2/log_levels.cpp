#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int substring = line.find("]: ");
    return line.substr(substring + 3);
}

std::string log_level(std::string line) {
    // return the log level
    return line;
}

std::string reformat(std::string line) {
    // return the reformatted message
    return line;
}
}  // namespace log_line
