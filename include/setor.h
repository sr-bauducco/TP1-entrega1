#ifndef SETOR_H
#define SETOR_H


public class setor
{
    public:
        setor();
        virtual ~setor();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
}

#endif // SETOR.H
