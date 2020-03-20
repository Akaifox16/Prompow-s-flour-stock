#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;


struct bread{
    string name;// name = ชื่อหนมปัง    
    int  stock , day ,sold ;
    float cost ; /*
        stock = จน ที่ผลิต
        cost = ราคา่
        day = ผลิตมาแล้วกี่วัน
        sold = ขายไปแล้วเท่าไหร่
    */
};

int calamount(int sold,int cost){  
    int amount;
    amount = sold * cost;
    return amount; 
}

void Show(vector<bread> &listgoods){
    int total = 0;

    for(int i =0;i<listgoods.size();i++){ 
        cout << listgoods[i].name <<setw(25) << listgoods[i].sold <<setw(15) << listgoods[i].stock <<setw(15) << calamount(listgoods[i].sold,listgoods[i].cost)<<endl;
        total += calamount(listgoods[i].sold,listgoods[i].cost);
    }

    cout  << endl <<"TOTAL: "<< setw(73) << total;
}


int main(){
    ifstream file ("today_baked.txt");
    string textline;
    vector<bread> list;
    char name[50];
    while(getline(file , textline)){
        bread tmp;
        tmp.day = 0;
        tmp.sold = 0;
        sscanf(textline.c_str() , "%[^:]: %d %f %d" ,name , &tmp.stock , &tmp.cost, &tmp.day);
        tmp.name = name;
        list.push_back(tmp);
    }

    while(true){
        int act ;
        cout << "Choose Action :\n[1]: list \n[2]: sold \n [3]: end day\n[4]: exit \nUser: ";
        cin >> act ;

        if(act == 1) {
            for(int i = 0 ; i < list.size() ; i++){
                cout << list[i].name << ":\n"
                     << "stock = "<< list[i].stock
                     << "\ncost = " << list[i].cost
                     << "\nday = " << list[i].day
                     << "\nsold = " << list[i].sold << "\n\n";
    }
    cout << "-----------------------------------------\n" ;
        }else if(act == 2){
            for(int i = 0 ; i < list.size() ; i++){
        int num;
        cout << list[i].name << setw(10) << "sold?" << ":  ";
        cin >> num;
        list[i].sold=num;
       // cout << list[i].sold;

    }

        }else if(act == 3){
            Show(list);
        for (int i = 0; i < list.size(); i++)
        {
            list[i].day += 1; 
            if(list[i].day>2 && list[i].day<5){
                list[i].cost = 0.3*list[i].cost ;
            }else if(list[i].day>=5){
                list[i].stock = 0;
            }
        }break;
       /* cout<< list[i].name << ":\n"
             << "stock = "<< list[i].stock
             << "\ncost = " << list[i].cost
             << "\nday = " << list[i].day
             << "\nsold = " << list[i].sold << "\n\n";*/
        }

        else cout << "ERROR!\n";

    }
    /*for (int i = 0; i < list.size(); i++)
    {
        cout << list[i].name << ": " <<"\n" ;
        cin >> list[i].sold;
        list.push_back(tmp);
    }*/
    
}
