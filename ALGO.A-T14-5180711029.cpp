#include<iostream>

using namespace std;

main(){

string barang[10],member,nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"},nomor[5]={"A001","A002","A003","A007","A008"};
int ug,harga[10],jumlahB,total,jumlah[10],totalx,totalsetelahdiskon;
int cari,carii;
float disc;

cout<<"\n =============================================";
cout<<"\n |                                           |";
cout<<"\n |             SELAMAT DATANG                |";
cout<<"\n |          DI TOKO MUDAH BELANJA            |";
cout<<"\n |    MARHABAN YA RAMADHAN 1440 HIJRIYAH     |";
cout<<"\n |                                           |";
cout<<"\n =============================================";
cout<<endl<<endl;

    cout<<" Apakah anda member : ";cin>>member;
if(member=="t"||member=="Y")
{
    cout<<" Inputkan nama : ";cin>>nama[0];
}
if(member=="y"||member=="Y")
{nama[0]="Bayu";nama[1]="Irvan";nama[2]="Susiati";nama[3]="Diana";nama[4]="Roni";

    cout<<" Inputkan no identitas : ";cin>>nomor[0];
    if(nomor[0]=="A001")
        {cout<<"Nama :"<<nama[0]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}

   else if(nomor[0]=="A002")
        {cout<<"Nama :"<<nama[1]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}

   else if(nomor[0]=="A003")
        {cout<<"Nama :"<<nama[2]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}

   else if(nomor[0]=="A007")
        {cout<<"Nama :"<<nama[3]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}

   else if(nomor[0]=="A008")
        {cout<<"Nama :"<<nama[4]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}
}

//OUTPUT
cout<<"Inputkan berapa macam barang yang dibeli :";cin>>jumlahB;
cout<<endl;
for(int i=0;i<jumlahB;i++){

    cout<<" Data ke-"<<i+1<<endl;
    cout<<" Barang yang akan dibeli : ";cin>>barang[i];
    cout<<" Inputkan harga barang   Rp. ";cin>>harga[i];
    cout<<" jumlah yang akan dibeli : ";cin>>jumlah[i];cout<<endl;
    total=harga[i]*jumlah[i];
    totalx=harga[i]*jumlah[i]*0.05;
    totalsetelahdiskon=total-totalx;
}
if(member=="t"||member=="T")
{

    cout<<"jumlah barang yang dibeli :"<<jumlahB<<endl;
    cout<<"Harga barang       :"<<harga<<endl;
    cout<<"Total pembayaran   Rp. "<<totalx<<endl;

}
else if(member=="y"||member=="Y")
{

    cout<<"Diskon sebesar     Rp."<<totalx<<endl;
    cout<<"Total pembayaran sebelum  Rp."<<total<<endl;
    cout<<"Total pembayaran setelah   Rp."<<totalsetelahdiskon<<endl;
    cout<<"Masukkan Uang : ";cin>>ug;
    cout<<"kembalian     : "<<ug-(totalsetelahdiskon-disc);
}
cout<<" \nSEARCHING HARGA BARANG"<<endl;
cout<<" \nMasukan harga yang dicari: ";cin>>cari;
int i;
 for (i=0;i<=jumlahB;i++)
{
if (cari==harga[i])
{
carii = i;
cout<<" data tersebut ditemukan pada inputan ke: "<<carii+1;
cout<<endl;
}
else
{cout<<" "<<endl;}
}
}
