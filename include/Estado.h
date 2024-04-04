#ifndef ESTADO_H
#define ESTADO_H


class Estado
{
    public:
        Estado(string estado);

        str Getestado_atual() { return estado_atual; }

        void Setestado_atual(str val) { estado_atual = val; }

        str estado_atual; //!< Member variable "estado_atual"

    protected:

    private:
};

#endif // ESTADO_H
