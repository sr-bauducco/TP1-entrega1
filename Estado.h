#ifndef ESTADO_H_INCLUDED
#define ESTADO_H_INCLUDED
using namespace std;

class Estado{
    private:
        string nomeEstado;
        std::vector<std::string> estadosValidos = {
            "Previsto",
            "Liquidado",
            "Inadimplente"
        };
    public:
        Estado(std::string  nomeEstado = ""){
            setEstado(nomeEstado);
        }

        bool setEstado(string nomeEstado){
            if (validarEstado(nomeEstado)) {
            this->nomeEstado = nomeEstado;
            return true;
        } else {
            return false;
        }
    }

        bool validarEstado(std::string nome) const {
        for (const auto& setor : estadosValidos) {
            if (nome == setor) {
                return true;
            }
        }
        return false;
    }
        string getEstado(){
            return nomeEstado;
        }

        };


#endif // ESTADO_H_INCLUDED
