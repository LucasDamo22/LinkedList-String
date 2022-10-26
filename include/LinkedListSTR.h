class LinkedListSTR{
    Nodo *head;
    Nodo *tail;
    int count;
public:
    LinkedListSTR();
    void add(std::string element);
    
    void addCheck(std::string element);
    void imprimeLista();
    void removeByElement(std::string element);
};