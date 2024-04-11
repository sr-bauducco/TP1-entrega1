#ifndef CODIGOTITULO_H_INCLUDED
#define CODIGOTITULO_H_INCLUDED
using namespace std;

class CodigoTitulo{
private:
    string opr;
    string codigo;
    string codigoTodo;
    vector < std::string> oprValidos = {
        "CDB",
        "CRA",
        "CRI",
        "LCA",
        "LCI",
        "DEB"
    };

public:
    CodigoTitulo(){
    }
    bool setCodigoTitulo(string opr, string codigo){
        for (const auto& oprV : oprValidos){
            if (opr == oprV) {
                this-> opr == oprV;
                cout << "operacao valida";
                return true;
            }
        }
        cout << "operacao invalida";
        return false;
    }
    std::string getCodigoTitulo() const{

        return "" + opr + "" + codigo ;
    }
};


#endif // CODIGOTITULO_H_INCLUDED
