#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

class Product{

string name;
double unit_price;


public:
    int cnt;

    Product(string name,int c,double price):name(name),cnt(c),unit_price(price){


    }

    void display(){

        cout << "name: "<<name << " count: " <<cnt << " Unit Price: " << unit_price << " Total Price:" << getTotalPrice() << endl;


    }

    void setUnitPrice(int price){
        this->unit_price = price;
    }

     double getUnitPrice(){
        return unit_price;
    }


    int getTotalPrice(){

        return cnt*unit_price;

    }

};




//compare function based on count
bool compare_count(Product p1, Product p2){

    return p1.cnt < p2.cnt; //ascending order
}


//compare function based on unit price
bool compare_price(Product p1, Product p2){

    return p1.getUnitPrice() < p2.getUnitPrice(); //ascending order
}

//compare function based on total price
bool compare_byTotalPrice(Product p1, Product p2){

    return p1.getTotalPrice() > p2.getTotalPrice(); //ascending order
}

int main(){

    vector<Product> productList{Product("banana",10,6),Product("Orange",9,90)};

    Product p1("Mango",3,55);

    productList.push_back(p1);
    productList.push_back(Product("Litchi",10,10));

    productList[0].cnt = 12;

    int index = productList.size();
    productList[index-1].setUnitPrice(15);


    sort(productList.begin(),productList.end(),compare_count);
    cout << "Sort by Product Count" << endl;
    for(Product x:productList){
        x.display();

    }

    cout << "\n" << endl;
    sort(productList.begin(),productList.end(),compare_price);
    cout << "Sort by Product Price" << endl;
    for(Product x:productList){

        x.display();

    }

    cout << "\n" << endl;
    sort(productList.begin(),productList.end(),compare_byTotalPrice);
    cout << "Sort by Product Total Price" << endl;
    for(Product x:productList){
            x.display();

        }









}



