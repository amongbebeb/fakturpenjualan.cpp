#include <iostream>
#include <string>

using namespace std;

void Judul1(){
cout << "\n\t\t\t\t FAKTUR PENJUALAN TOKO MAJU" << endl;
cout << "-----------------------------------------------------------------------------------------------" << endl;
}

void Garis(){
cout << "-----------------------------------------------------------------------------------------------" << endl;
}

void Judul2(string namapelanggan, string tanggal, string email){
cout << "Nama Pelanggan : " << namapelanggan << endl;
cout << "Tanggal : " << tanggal << "\t\t\t\tE-mail : " << email << endl;
Garis();
cout << "\tNo" << "\tJumlah" << "\t\tNama Barang" << "\t\tSatuan" << "\t\tHarga" << "\
t\tBiaya" << endl;
Garis();
}

float persentase_diskon(int totalbiaya){
float pd;
if (totalbiaya > 500000 && totalbiaya < 600000)
{
pd = 0.05;
}else if (totalbiaya > 601000 && totalbiaya < 800000)
{
pd = 0.075;
}else if (totalbiaya > 801000)
{
pd = 0.10;
}else
{
pd = 0;
}
return pd;
}

void Judul3(int jumlah[], string namabarang[], string satuan[], int harga[]){
int biaya = 0;
int totalbiaya = 0;
int k = 0, no =1;
int diskon = 0;
int bayar = 0;
while (k < 4){
float pd = persentase_diskon (totalbiaya);
biaya = jumlah[k] * harga[k];
totalbiaya = totalbiaya + biaya;
diskon = totalbiaya * pd;
bayar = totalbiaya - diskon;
cout << "\n\t" << no << "\t" << jumlah[k] << "\t\t" << namabarang[k] << "\t\t" <<
satuan[k] << "\t\t" << harga[k] << "\t\t" << biaya << endl;
k++;
no++;
}

Garis();
cout << "\t\t\t\t\t\t\t\t\tTotal Biaya Rp. " << totalbiaya << endl;
cout << "\t\t\t\t\t\t\t\t\t Diskon Rp. " << diskon << endl;
cout << "\t\t\t\t\t\t\t\t\t Bayar Rp. " << bayar << endl;
}

int main(int argc, char const *argv[]){
string namapelanggan = "Siraj Syafiq";
string tanggal = "20 Agustus 2000";
string email = "siarjsyafiq@gmail.com";
int jumlah[] = {4, 7, 10, 3};
string namabarang[] = {"Kertas HVS 80gr", "Marker(spidol)", "Penghapus Papan", "Doube Folio"};
string satuan[] = {"Rim", "Lusin", "Lusin", "Kodi"};
int harga[] = {80000, 50000, 25000, 5000};

Judul1();
Judul2(namapelanggan, tanggal, email);
Judul3(jumlah, namabarang, satuan, harga);

getchar();
return 0;
}
