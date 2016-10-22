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
        // id �������
      void set_id_client(int id)
        {
            id_client = id;
        }
        // ��������� id
        int get_id_client()
        {
            return id_client;
        }
        // ��� �������
        void set_name(std::string client_name)
        {
            name = client_name;
        }
        // ������� �����
        std::string get_name()
        {
            return name;
        }
        // ������� �������
        void set_last_name(std::string client_last_name)
        {
            last_name = client_last_name;
        }
        // ������� �������
        std::string get_last_name()
        {
            return last_name;
        }
        //�������
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
        // ���
        std::string name;
        // �������
        std::string last_name;

};
#endif
