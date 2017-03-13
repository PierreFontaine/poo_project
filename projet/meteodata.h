#ifndef METEODATA_H
#define METEODATA_H

#include<QtNetwork>
#include<string>

class MeteoData{
    protected:
        //TCP CO
        QTcpSocket *_socket;
        quint16 _tailleMessage;
        //API DATA
        std::string _url;
        std::string _units;
        std::string _appid;
        //RELEVENT DATA
        std::string _ville;
        double _humidity;
        double _pressure;

    public:
        //Constructeur pour notre requete API
        MeteoData(std::string url,std::string units,std::string appid);
        void donneesRecues();
        void requete();
};

#endif // METEODATA_H
