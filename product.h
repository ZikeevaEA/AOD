#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
#endif // PRODUCT_H_INCLUDED

#ifndef STRING
#define STRING
#include <string>
#endif // STRING

class Products {

    public:
        Products()
        {
            id_product=0;
            product_name="";
            cost=0.0; //^_^
        }
        // id ��������
      void set_id_product(int id)
        {
            id_product = id;
        }
        // ��������� id
        int get_id_product()
        {
            return id_product;
        }
        // �������� ��������
        void set_product_name(std::string name)
        {
            product_name = name;
        }
        // ������� ��������
        std::string get_product_name()
        {
            return product_name;
        }
           // ��������� ��������
      void set_cost(float cost_product)
        {
            cost = cost_product;
        }
        // ��������� ���������
        float get_cost()
        {
            return cost;
        }
    private:
        int id_product;
        // ���
        std::string product_name;
        // �������
        float cost;
};
