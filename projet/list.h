#ifndef LIST_H
#define LIST_H
#include<QDebug>
template <class T>
class List{
protected:
    struct cellule{
        cellule *suivant;
        T valeur;
    };
    typedef cellule* liste;
    liste _l;
public:
    List();
    ~List();
    List(const& List);
    List& operator=(const& List);

    void insertElemAtPos(int pos,T elt);
    void deleteElemAtPos(int pos);
    int getElemAtPos(int pos)const;
    int getLength()const;
    bool isEmpty()const;

};

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : constructeur, init mémoire
 remarque:
 ©2017
 */
template <class T>
List<T>::List(){
    _l = NULL;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : détruire l'objet list
 remarque:
 ©2017
 */
template <class T>
List<T>::~List(){
    if(_l){
        delete _l;
    }
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : inserer un element à une certaine pos
 remarque:
 ©2017
 */
template <class T>
void List<T>::insertElemAtPos(int pos, T elt){
    liste tmp,aux;
    int i,nbE;

    if(isEmpty()){
        if(pos == 1){
            _l = new cellule;
            _l->valeur = elt;
            _l->suivant = NULL;
        } else {
            qDebug()<<'erreur de pos';
        }
    } else {
        nbE = getLength();
        i = 0;
        aux = _l;
        if(pos < 1 || pos > nbE+1){
            qDebug()<<"erreur de position";
        } else {
            while(i != (pos - 1)){
                i++;
                aux = aux->suivant;
            }

            tmp = new cellule;
            tmp->valeur = elt;

            if(pos != 1){
                if(aux != NULL){
                    tmp->suivant = aux->suivant;
                } else {
                    tmp->suivant = NULL;
                }
                aux->suivant = tmp;
            } else {
                tmp->suivant = aux;
                _l = tmp;
            }
        }
    }
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : supprimer un elt à une pos
 remarque:
 ©2017
 */
template <class T>
void List<T>::deleteElemAtPos(int pos){
    liste temp,aux;
    int i;

    if(isEmpty()){
        qDebug() << "liste vide";
    } else if((pos < 1) || (pos > getLength())){
        qDebug() << "erreur de position";
    }else if (pos != 1){
        i = 1;
        aux = _l;
        temp = new cellule;
        while(i != (pos -1)){
            aux = aux->suivant;
            i++;
        }
        temp = aux->suivant;
    } else {
        temp = _l;
        _l = temp->suivant;
    }
    delete temp;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : return si la liste est vide
 remarque:
 ©2017
 */
template <class T>
bool List<T>::isEmpty(){
    return (_l == NULL);
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     : return la longueur de la liste
 remarque:
 ©2017
 */
template <class T>
int List<T>::getLength(){
    int i;
    liste celluleActuel;

    celluleActuel = _l;
    i = 0;

    while(celluleActuel != NULL){
        celluleActuel = celluleActuel->suivant;
        i++;
    }
    return i;
}

/*
 author  : Fontaine pierre
 mail    : pierre.ftn64@gmail.com
 but     :return la valeur de l'elt à la pos demandé
 remarque:
 ©2017
 */
template <class T>
int List<T>::getElemAtPos(int pos) const{
    int i;
    liste aux;
    i = 1;
    if(_l != NULL){
        if(pos < 1 || pos>getLength()){
            qDebug()<<"erreur de position";
        } else {
            aux = _l;
            while(i < pos){
                aux = aux->suivant;
                i++;
            }
            return (aux->valeur);
        }
    }
    return (-1);
}

#endif // LIST_H
