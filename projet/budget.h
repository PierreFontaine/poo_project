#ifndef BUDGET_H
#define BUDGET_H


class Budget{
    private:
        double salaireMensuel;
        double depenseActuel;
        double solde;
    public:
        //Coplien forme
        Budget();
        Budget(const Budget&);
        ~Budget();
        Budget& operator=(const Budget&);
        //Setter Getter
        void setSalaireMensuel(double);
        void setDepenseActuel(double);
        void setSolde(double);
        double getSalaireMensuel()const;
        double getDepenseActuel()const;
        double getSolde()const;
        //fonction sur budget
        void augmenterDepenseDe(double);

};

#endif // BUDGET_H
