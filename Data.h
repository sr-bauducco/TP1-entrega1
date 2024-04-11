#include <iostream>
#include <sstream>
#include <stdexcept>
#include <algorithm>
#include <iomanip>
class Data {
private:
    int dia, mes, ano;

public:
    Data(const std::string& data_str) {
        std::stringstream ss(data_str);
        char delimiter;
        ss >> dia >> delimiter >> mes >> delimiter >> ano;

        if (!data_valida()) {
            throw std::invalid_argument("Data invalida!");
        }
    }

    bool data_valida() {
        int meses_31_dias[] = {1, 3, 5, 7, 8, 10, 12};
        if (mes < 1 || mes > 12) {
            return false;
        }
        if (std::find(std::begin(meses_31_dias), std::end(meses_31_dias), mes) != std::end(meses_31_dias)) {
            if (dia < 1 || dia > 31) {
                return false;
            }
        } else if (mes == 2) {
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                if (dia < 1 || dia > 29) {
                    return false;
                }
            } else {
                if (dia < 1 || dia > 28) {
                    return false;
                }
            }
        } else {
            if (dia < 1 || dia > 30) {
                return false;
            }
        }

        return true;
    }
    std::string getData() const {
        std::stringstream ss;
        ss << std::setw(2) << std::setfill('0') << dia << "-"
           << std::setw(2) << std::setfill('0') << mes << "-"
           << ano;
        return ss.str();
    }
};
