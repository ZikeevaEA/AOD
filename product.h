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
        // id продукта
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
        // Получение id
        int getIdProduct()
        {
            return id_product;
        }
        // Название продукта
        void setProductName(string name)
        {
            product_name = name;
        }
        // Возврат названия
        string getProductName()
        {
            return product_name;
        }
           // стоимость продукта
		void setCost(float cost_product)
        {
            cost = cost_product;
        }
        // Получение стоимости
        float getCost()
        {
            return cost;
        }
    private:
        int id_product;
        // Имя
        string product_name;
        // Фамилия
        float cost;
};
#endif // PRODUCT_H_INCLUDED
