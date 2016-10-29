#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <string>
using std::string;

class Product{

    public:
        Product()
        {
            id_product = 0;
            product_name = "";
            cost = 0.0; //^_^
        }
        // id ��������
        Product(int id_product, string product_name, float cost)
        {
            this -> id_product = id_product;
            this -> product_name = product_name;
            this -> cost = cost;
        }
      void setIdProduct(int id)
        {
            id_product = id;
        }
        // ��������� id
        int getIdProduct()
        {
            return id_product;
        }
        // �������� ��������
        void setProductName(string name)
        {
            product_name = name;
        }
        // ������� ��������
        string getProductName()
        {
            return product_name;
        }
           // ��������� ��������
		void setCost(float cost_product)
        {
            cost = cost_product;
        }
        // ��������� ���������
        float getCost()
        {
            return cost;
        }
    private:
        int id_product;
        // ���
        string product_name;
        // �������
        float cost;
};
#endif // PRODUCT_H_INCLUDED
