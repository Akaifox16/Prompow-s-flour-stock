#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

struct bread{
    string name;// name = ชื่อหนมปัง    
    int  stock , cost , day ,sold ; /*
        stock = จน ที่ผลิต
        cost = ราคา
        day = ผลิตมาแล้วกี่วัน
        sold = ขายไปแล้วเท่าไหร่
    */
};

int calamount(int sold,int cost){  
    int amount;
    amount = sold * cost;
    return amount; 
}


int main(){
cout <<"MENU:"<<setw(43)<<"sell dai :"<<setw(15)<<"InStock :"<<setw(13)<<"amount :"<<endl <<endl;
bread cream = {"creame brelee\t\t",8,55,0,1};
bread wholewheat = {"wholewheat bread\t",6,55,0,2};
bread toast = {"toast ham & cheese\t",8,65,0,3};
bread bunny = {"bunny butter cream\t",3,75,0,4};
bread carrot = {"carrot cake\t\t",5,75,0,5}; 

//ต้นน้ำคงไม่เห็นอะไรช่ะ5555

vector<bread> listgoods;

listgoods.push_back (wholewheat);
listgoods.push_back (toast);
listgoods.push_back (cream);
listgoods.push_back (bunny);
listgoods.push_back (carrot);

int total = 0;

for(int i =0;i<listgoods.size();i++){ 
cout << listgoods[i].name <<setw(25) << listgoods[i].sold <<setw(15) << listgoods[i].stock <<setw(15) << calamount(listgoods[i].sold,listgoods[i].cost)<<endl;
total += calamount(listgoods[i].sold,listgoods[i].cost);
}

cout  << endl <<"TOTAL: "<< setw(73) << total;
// version คอปเตอร์คนขยันz แต่คงไม่ได้ใช้มั้งนะ
// [
// listgoods[0].name = creame brulee;
// listgoods[1].name = wholewheat bread;
// listgoods[2].name = toast ham & cheese;
// listgoods[3].name = bunny butter cream;
// listgoods[4].name = carrot cake;

// listgoods[0].stock = 8;
// listgoods[1].stock = 6;
// listgoods[2].stock = 8;
// listgoods[3].stock = 3;
// listgoods[4].stock = 5;

// listgoods[0].cost = ;
// listgoods[1].cost = ;
// listgoods[2].cost = ;
// listgoods[3].cost = ;
// listgoods[4].cost = ;

// listgoods[0].day = ;
// listgoods[1].day = ;
// listgoods[2].day = ;
// listgoods[3].day = ;
// listgoods[4].day = ;

// listgoods[0].sold = ;
// listgoods[1].sold = ;
// listgoods[2].sold = ;
// listgoods[3].sold = ;
// listgoods[4].sold = ;

// listgood.insert(listgoods.begin()); ไม่เอาๆ

// ]

//ขอลองฝึกเล่นvectorแปป

    return 0;
}