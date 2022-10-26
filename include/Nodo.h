
class Nodo{
public:
    std::string nome;
    Nodo *prox;

    Nodo();
    Nodo(std::string nome);
    Nodo(std::string nome, Nodo *prox);
};