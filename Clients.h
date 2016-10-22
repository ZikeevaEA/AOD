#ifndef CLIENTS_H
#define CLIENTS_H

#ifndef STRING
#define STRING
#include <string>
#endif // STRING

class Clients {
    public:
        Clients()
        {
            id_client=0;
            phone ="";
            name="";
            last_name="";
        }
        // id клиента
      void set_id_client(int id)
        {
            id_client = id;
        }
        // Получение id
        int get_id_client()
        {
            return id_client;
        }
        // Имя клиента
        void set_name(std::string client_name)
        {
            name = client_name;
        }
        // Возврат имени
        std::string get_name()
        {
            return name;
        }
        // Фамилия клиента
        void set_last_name(std::string client_last_name)
        {
            last_name = client_last_name;
        }
        // Возврат фамилии
        std::string get_last_name()
        {
            return last_name;
        }
        //Телефон
        void set_phone( std::string client_phone)
        {
            phone = client_phone;
        }
        std::string get_phone()
        {
         return phone;
        }
    private:
        int id_client;
        std::string phone;
        // Имя
        std::string name;
        // Фамилия
        std::string last_name;

};
#endif
