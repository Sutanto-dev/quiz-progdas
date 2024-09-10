#include <stdio.h>
#include <stdlib.h>

int main(){

	
	int kembali, kembali2,ngulang, menu, menu2,hasil, menu3 ,total, uang , diskon;
	char pilih;
	
	int harga_putra_a ,harga_putra_b, harga_putra_c;
	
	int harga_putri_a, harga_putri_b, harga_putri_c;
 
	
	harga_putra_c = 10000000;
	harga_putra_b = 17000000;
	harga_putra_a = 20000000;
	kembali2 = 1;
	kembali = 1;
	ngulang = 1;
	harga_putri_a = 17000000;
	harga_putri_b = 10000000;
	harga_putri_c = 7000000;
	
	
	do{
		printf("\t\t\t======================\n");
		printf("\t\t\t     Kosan Ceria      \n");
		printf("\t\t\t======================\n");
		printf("\t\t\t|   1.Kosan Putra    |\n");
		printf("\t\t\t|   2.Kosan Putri    |\n");
		printf("\t\t\t|   3. Curhatan      |\n");
		printf("\t\t\t|   4.  Pembuat      |\n");
		printf("\t\t\t|   5.  Keluar       |\n");
		printf("\t\t\t======================\n");
		printf("\t\t\t    Masukan Menu : ");
			scanf("%d", &menu);
			
		switch(menu){
			
			case 1 :
				do{
					system("cls");
					printf("\t\t\t  ======================\n");
					printf("\t\t\t      |Kamar Putra|     \n");
					printf("\t\t\t  ======================\n");
					printf("\t\t\t==========================\n");
					printf("\t\t\t   | 1.Kamar Putra A  |  \n");
					printf("\t\t\t   | 2.Kamar Putra B  |  \n");
					printf("\t\t\t   | 3.Kamar Putra C  |  \n");
					printf("\t\t\t   | 4.Kembali        |  \n");
					printf("\t\t\t==========================\n");
					printf("\t\t\t    Masukan Menu : ");
						scanf("%d", &menu2);
						
					switch(menu2){
						case 1 :
							do{
								system("cls");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |Kamar Putra A|     \n");
								printf("\t\t\t   |Rp.20.000.000 Jt/Thn| \n");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |1. Sewa Awal  |   \n");
								printf("\t\t\t      |2. Perpanjang |   \n");
								printf("\t\t\t      |3. kembali    |   \n");
								printf("\t\t\t   ===================== \n");
								printf("\t\t\t     Masukan Menu : ");
									scanf("%d", &menu3);
								
								switch(menu3){
									case 1 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      |  Sewa Awal  |  \n");
										printf("\t\t\t      |Kamar Putra A|     \n");
										printf("\t\t\t   |Rp.20.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 20000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 20000000){
											total = uang - harga_putra_a ;
											printf("\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putra_a - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
									break;
									
									case 2 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      | Perpanjang  |  \n");
										printf("\t\t\t      |Kamar Putra A|     \n");
										printf("\t\t\t   |Rp.20.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 20000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 20000000){
											diskon = harga_putra_a * 0.05; 
											hasil = harga_putra_a - diskon;
											total = uang  - hasil ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putra_a - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
										
										
									break;
									
									case 3 :
										system("cls");
										kembali2 = 2;
									break;
								}
								
							}while(kembali2==1);	
							
							
						break;
						
						case 2 :
							do{
								system("cls");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |Kamar Putra B|     \n");
								printf("\t\t\t   |Rp.17.000.000 Jt/Thn| \n");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |1. Sewa Awal  |   \n");
								printf("\t\t\t      |2. Perpanjang |   \n");
								printf("\t\t\t      |3. kembali    |   \n");
								printf("\t\t\t   ===================== \n");
								printf("\t\t\t     Masukan Menu : ");
									scanf("%d", &menu3);
								
								switch(menu3){
									case 1 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      |  Sewa Awal  |  \n");
										printf("\t\t\t      |Kamar Putra B|     \n");
										printf("\t\t\t   |Rp.17.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 17000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 17000000){
											total = uang - harga_putra_b ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putra_b - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
									break;
									
									case 2 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      | Perpanjang  |  \n");
										printf("\t\t\t      |Kamar Putra B|     \n");
										printf("\t\t\t   |Rp.17.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 17000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 17000000){
											diskon = harga_putra_b * 0.03; 
											hasil = harga_putra_b - diskon;
											total = uang  - hasil ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putra_b - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
										
										
									break;
									
									case 3 :
										system("cls");
										kembali2 = 2;
									break;
								}
								
							}while(kembali2==1);	
							
							
						break;
						
						case 3 :
							do{
								system("cls");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |Kamar Putra C|     \n");
								printf("\t\t\t   |Rp.10.000.000 Jt/Thn| \n");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |1. Sewa Awal  |   \n");
								printf("\t\t\t      |2. Perpanjang |   \n");
								printf("\t\t\t      |3. kembali    |   \n");
								printf("\t\t\t   ===================== \n");
								printf("\t\t\t     Masukan Menu : ");
									scanf("%d", &menu3);
								
								switch(menu3){
									case 1 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      |  Sewa Awal  |  \n");
										printf("\t\t\t      |Kamar Putra C|     \n");
										printf("\t\t\t   |Rp.10.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 10000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 10000000){
											total = uang - harga_putra_c ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putra_c - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
									break;
									
									case 2 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      | Perpanjang  |  \n");
										printf("\t\t\t      |Kamar Putra c|     \n");
										printf("\t\t\t   |Rp.10.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 10000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 10000000){
											diskon = harga_putra_c * 0.02; 
											hasil = harga_putra_c - diskon;
											total = uang  - hasil ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putra_c - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
										
										
									break;
									
									case 3 :
										system("cls");
										kembali2 = 2;
									break;
								}
								
							}while(kembali2==1);	
							
							
						break;
						
						case 4 :
							system("cls");
							kembali = 2;
						break;
					}	
					
					
				}while(kembali==1);
				
			break;
			
			case 2 :
				do{
					system("cls");
					printf("\t\t\t  ======================\n");
					printf("\t\t\t      |Kamar Putri|     \n");
					printf("\t\t\t  ======================\n");
					printf("\t\t\t==========================\n");
					printf("\t\t\t   | 1.Kamar Putri A  |  \n");
					printf("\t\t\t   | 2.Kamar Putri B  |  \n");
					printf("\t\t\t   | 3.Kamar Putri C  |  \n");
					printf("\t\t\t   | 4.Kembali        |  \n");
					printf("\t\t\t==========================\n");
					printf("\t\t\t    Masukan Menu : ");
						scanf("%d", &menu2);
						
					switch(menu2){
						case 1 :
							do{
								system("cls");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |Kamar Putri A|     \n");
								printf("\t\t\t   |Rp.17.000.000 Jt/Thn| \n");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |1. Sewa Awal  |   \n");
								printf("\t\t\t      |2. Perpanjang |   \n");
								printf("\t\t\t      |3. kembali    |   \n");
								printf("\t\t\t   ===================== \n");
								printf("\t\t\t     Masukan Menu : ");
									scanf("%d", &menu3);
								
								switch(menu3){
									case 1 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      |  Sewa Awal  |  \n");
										printf("\t\t\t      |Kamar Putri A|     \n");
										printf("\t\t\t   |Rp.17.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 17000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 17000000){
											total = uang - harga_putri_a ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putri_a - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
									break;
									
									case 2 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      | Perpanjang  |  \n");
										printf("\t\t\t      |Kamar Putri A|     \n");
										printf("\t\t\t   |Rp.17.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 17000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 17000000){
											diskon = harga_putri_a * 0.03; 
											hasil = harga_putri_a - diskon;
											total = uang  - hasil ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putri_a - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
										
										
									break;
									
									case 3 :
										system("cls");
										kembali2 = 2;
									break;
								}
								
							}while(kembali2==1);	
							
							
						break;
						
						case 2 :
							do{
								system("cls");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |Kamar Putri B|     \n");
								printf("\t\t\t   |Rp.10.000.000 Jt/Thn| \n");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |1. Sewa Awal  |   \n");
								printf("\t\t\t      |2. Perpanjang |   \n");
								printf("\t\t\t      |3. kembali    |   \n");
								printf("\t\t\t   ===================== \n");
								printf("\t\t\t     Masukan Menu : ");
									scanf("%d", &menu3);
								
								switch(menu3){
									case 1 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      |  Sewa Awal  |  \n");
										printf("\t\t\t      |Kamar Putri B|     \n");
										printf("\t\t\t   |Rp.10.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 10000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 10000000){
											total = uang - harga_putri_b ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putri_b - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
									break;
									
									case 2 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      | Perpanjang  |  \n");
										printf("\t\t\t      |Kamar Putri B|     \n");
										printf("\t\t\t   |Rp.10.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 10000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 10000000){
											diskon = harga_putri_b * 0.05; 
											hasil = harga_putri_b - diskon;
											total = uang  - hasil ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putri_b - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
										
										
									break;
									
									case 3 :
										system("cls");
										kembali2 = 2;
									break;
								}
								
							}while(kembali2==1);	
							
							
						break;
						
						case 3 :
							do{
								system("cls");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |Kamar Putri C|     \n");
								printf("\t\t\t   |Rp.7.000.000 Jt/Thn| \n");
								printf("\t\t\t  ========================\n");
								printf("\t\t\t      |1. Sewa Awal  |   \n");
								printf("\t\t\t      |2. Perpanjang |   \n");
								printf("\t\t\t      |3. kembali    |   \n");
								printf("\t\t\t   ===================== \n");
								printf("\t\t\t     Masukan Menu : ");
									scanf("%d", &menu3);
								
								switch(menu3){
									case 1 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      |  Sewa Awal  |  \n");
										printf("\t\t\t      |Kamar Putri C|     \n");
										printf("\t\t\t   |Rp.7.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 7000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 7000000){
											total = uang - harga_putri_c ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putri_c - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
									break;
									
									case 2 :
										system("cls");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t      | Perpanjang  |  \n");
										printf("\t\t\t      |Kamar Putri c|     \n");
										printf("\t\t\t   |Rp.7.000.000 Jt/Thn| \n");
										printf("\t\t\t  ========================\n");
										printf("\t\t\t     Masukan Jumlah Uang : ");
											scanf("%d", &uang);
											
										if(uang == 7000000){
											printf("\n\t\t\t     Terima Kasih Silahkan Ambil Kunci Anda :) \n\n");
											printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}else if(uang > 7000000){
											diskon = harga_putri_c * 0.07; 
											hasil = harga_putri_c - diskon;
											total = uang  - hasil ;
											printf("\n\n\t\t\t  Kembalian Anda Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										
										}else{
											total = harga_putri_c - uang;
											printf("\n\n\t\t  Maaf Uang Anda Kurang Sebesar : %d\n\n\n", total);
											printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
												scanf("%s", &pilih);
												
											if(pilih == 'y' || pilih == 'Y'){
												system("cls");
												kembali2 = 1;
											}else{
												system("cls");
												kembali2=2;
											}
											
										}
										
										
										
									break;
									
									case 3 :
										system("cls");
										kembali2 = 2;
									break;
								}
								
							}while(kembali2==1);	
							
							
						break;
						
						case 4 :
							system("cls");
							kembali = 2;
						break;
					}	
					
					
				}while(kembali==1);
				
			break;
			
			case 3:
				system("cls");
				printf("\t\t\tSelamat Datang Di Menu Curhatan :D \n\n");
				printf("\t[ saya mengerjakan tugas ini dengan ikhlas dan penuh dengan kesabaran \n");
				printf("\t  dan juga penuh dengan sangat keseriusan dan teliti tentunya . \n");
				printf("\t terima kasih pak atas tugas nya,  susah pak sampe 900+ lines ... \n");
				printf("\t mohon maaf bila program nya ada kekurangan dan tidak sesuai dengan \n");
				printf("\t program punya bapak .. terimakasih :D ]  \n\n\n");
				printf("\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
					scanf("%s", &pilih);
					
				if(pilih == 'y' || pilih == 'Y'){
					system("cls");
					ngulang = 1;
				}else{
					exit(0);
				}
					
							
			break;
			
			case 4 :
				system("cls");
				printf("\t\t\t\tBagza Jaya Wiguna - X RPL\n\n\n");
				printf("\t\t\tApakah Anda Ingin Mengulanginya [Y/N] = ");
					scanf("%s", &pilih);
					
				if(pilih == 'y' || pilih == 'Y'){
					system("cls");
					ngulang = 1;
				}else{
					exit(0);
				}
					
				
				
			break;
			
			case 5 :
				exit(0);
			break;
		}
		
		
	}while(ngulang==1);
	
	
	
	
	return 0;
}
