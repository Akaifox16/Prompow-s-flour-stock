#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

struct bread{
    string name;// name = ชื่อหนมปัง    
    int  stock , cost , day ,sold ; /*
        stock = จน ที่ผลิต
        cost = ราคา่
        day = ผลิตมาแล้วกี่วัน
        sold = ขายไปแล้วเท่าไหร่
    */
};

int main(){
    ifstream file ("today_baked.txt");
    string textline;
    vector<bread> list;
    char name[50];
    while(getline(file , textline)){
        bread tmp;
        tmp.day = 0;
        tmp.sold = 0;
        sscanf(textline.c_str() , "%[^:]: %d %d" ,name , &tmp.stock , &tmp.cost);
        tmp.name = name;
        list.push_back(tmp);
    }

    for(int i = 0 ; i < list.size() ; i++){
        int num;
        cout << list[i].name << setw(10) << "sold?" << ":  ";
        cin >> num;
        list[i].sold=num;
       // cout << list[i].sold;

    }
       
            // << "stock = "<< list[i].stock
            // << "\ncost = " << list[i].cost
            // << "\nday = " << list[i].day
            // << "\nsold = " << list[i].sold << "\n\n";

 //จบ 1 วัน
    for (int i = 0; i < list.size(); i++)
    {
        list[i].day += 1; 
        if(list[i].day>2 && list[i].day<5){
            list[i].cost = 0.3*list[i].cost ;
        }else if(list[i].day>=5){
            list[i].stock = 0;
        }

        cout<< list[i].name << ":\n"
             << "stock = "<< list[i].stock
             << "\ncost = " << list[i].cost
             << "\nday = " << list[i].day
             << "\nsold = " << list[i].sold << "\n\n";
    }

}