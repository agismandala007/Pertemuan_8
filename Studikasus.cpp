#include <iostream>
#include <string>
using namespace std;

class Menu{
  public:
    void databarang();
    void proses();
    void totalpenjualan();
  private:
    string barang[6] = {"Samsung Evo", "SanDisk 16GB", "Logitech M170", "WD Green 120GB", "Garmin Venu SQ", "Epson L3210 AIO"};
    int stok_harga[6][2] = {{30, 200000}, {45, 60000}, {55, 120000}, {23, 400000}, {12, 3100000}, {14, 2500000}};
    int total_penjualan=0, penjualan[6];
    
};

void Menu::proses(){
  for(int i=0; i<6; i++){
    penjualan[i]=stok_harga[i][0]*stok_harga[i][1];
    total_penjualan+=penjualan[i];
  }
}

void Menu::databarang(){
  cout<<"Diketahui Data Barang sebagai berikut : "<<endl;
  cout<<"+-----------------------------------+"<<endl;
  cout<<"| Nama Barang      | Stok | Harga   |"<<endl;
  cout<<"+-----------------------------------+"<<endl;
  for (int i=0; i<6; i++){
    cout<<"| "<<barang[i];
    for(int y=16; y>=barang[i].length(); y--){
      cout<<" ";
    }
    cout<<"|  "<<stok_harga[i][0]<<"  | "<<stok_harga[i][1];
    for(int y=7; y>=to_string(stok_harga[i][1]).length(); y--){
      cout<<" ";
    }
    cout<<"|"<<endl;
  }
  cout<<"+-----------------------------------+"<<endl;
}

void Menu::totalpenjualan(){
  cout<<endl<<endl<<"Total Penjualan :"<<endl;
  cout<<"+-------------------------------------------+"<<endl;
  cout<<"| Nama Barang      | Stok Terjual | Harga   |"<<endl;
  cout<<"+-------------------------------------------+"<<endl;
  for(int i=0; i<6; i++){
    cout<<"| "<<barang[i];
    for(int y=16; y>=barang[i].length(); y--){
      cout<<" ";
    }
    cout<<"|      "<<stok_harga[i][0]<<"      | "<<penjualan[i];
    for(int y=7; y>=to_string(penjualan[i]).length(); y--){
      cout<<" ";
    }
    cout<<"|"<<endl;
  }
  cout<<"+-------------------------------------------+"<<endl;
  cout<<"| Total Harga                     | "<<total_penjualan<<"|"<<endl;
  cout<<"+-------------------------------------------+"<<endl;
}

int main(){
  Menu a;
  a.databarang();
  a.proses();
  a.totalpenjualan();
}
