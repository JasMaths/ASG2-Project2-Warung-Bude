#include<stdio.h>


int main(){
// Masukkan data-data yang akan kita pakai untuk memilih suatu data
    int pilih, premium,dollar, rupiah,quant,nomer,banyak1,banyak2,hasil1,hasil2;
    char C[255], S1[255], S2[255], S3[255], M[255], M2[255];
    float fah, celcius;
	// Print sistem, tanggal, dan daftar pilihan pada sistem
  	printf("System: Windows OSX\n");
  	printf("Mon Mar 30 15:21:14 2020\n");
    printf("1.Add Dish\n2.Remove Dish\n3.Add Customer\n4.Search Customer\n5.View Warteg\n6.Order\n7.Payment\n8.Exit warteg\n\n");
    printf("masukkan pilihan: ");
    scanf("%d",&pilih);
  // memakai switch case agar saat run sistem, kita dapat memilih pilihan yang ada pada daftar
    switch(pilih) {
	// Kita print "Add Dish" untuk menampilkan pilihan pertama
              case 1: 
              printf("Add Dish\n");
              printf("Insert the name of dish : ");
	// Memakai scanf agar saat menjalankan sistem kita dapat menginput nama makanan yang kita inginkan
              scanf ("%s", &C);
	// Memakai scanf agar saat menjalankan sistem kita dapat menginput harga makanan yang ada
              scanf("Price of the dish: %d",&rupiah);
               scanf("Quantity of the dish: %d",&quant);
              printf("The dish has been added");
	// Memakai break, agar sistem tidak melakukan run terus-menerus
              break;

              case 2:
	// Kita print "Remove Dish" untuk menampilkan pilihan kedua
              printf("Remove Dish\n");
              printf("%-3s","Bude's Menu\n");
              printf("============\n");
	// Membuat tabel untuk nomer,nama,quantity, dan price
              printf("|%-3s|%-3s|%-3s|%-3s|\n","No.","Name","Quantity","Price");
              printf("|%-3s|%-3s|%-3s|%-3s|\n","1","Telur asin","040","Rp2500");
              printf("|%-3s|%-3s|%-3s|%-3s|\n","2","Tempe orek","030","Rp13000");
              printf("|%-3s|%-3s|%-3s|%-3s|\n","3","Buncis","001","Rp6000");
              printf("============\n");
              printf("Insert dish's name to be deleted: Telur asin\n");
              printf("The dish has been removed!\n");
              printf("Press enter to continue...\n");
	// Memakai break, agar sistem tidak melakukan run terus-menerus
              break;

              case 3:
	// Kita print "Add Customer" untuk menampilkan pilihan ketiga
              printf("Add Customer\n");
              printf("Insert the customer's name:");
	      scanf("%s\n",&S1);
               printf("Insert the customer's name:");
               scanf("%s",&S2);
              printf("Customer has been added\n");
              printf("Press enter to continue\n");
	// Memakai break, agar sistem tidak melakukan run terus-menerus
              break;
            
              case 4:
	// Kita print "Search Customer" untuk menampilkan pilihan keempat
              printf("Search Customer\n");
              printf("Insert the customer’s name to be searched:");
              scanf("%s",&S3);
              printf("%s is not present\n",S3);
              printf("Press enter to continue...\n");
	// Memakai break, agar sistem tidak melakukan run terus-menerus
              break;
              
               case 5:
	// Kita print "View Warteg" untuk menampilkan pilihan kelima
              printf("View Warteg\n");
              printf("Customer's List");
              printf("12. %s",S2);
              printf("Press enter to continue...\n");
	// Memakai break, agar sistem tidak melakukan run terus-menerus
              break;
              
               case 6:
	// Kita print "Order" untuk menampilkan pilihan keenam
              printf("Order\n");
              printf("Insert the customer’s name: %s",S2);
              printf("Insert the amount of dish: ");
              scanf("%d",&nomer);
              printf("[1] Insert the dish's name and quantity:");
            scanf("%s %d",&M,&banyak1);
              printf("[2] Insert the dish's name and quantity:");
            scanf("%s %d",&M2,&banyak2);
              printf("Order Success!\n");
              printf("Press enter to continue...\n");
	// Memakai break, agar sistem tidak melakukan run terus-menerus
              break;
              
               case 7:
	// Kita print "Payment" untuk menampilkan pilihan ketujuh
              printf("Payment\n");
              printf("Insert the customers' index:");
              scanf("%d",&nomer);
              scanf("%s",&S2);
              printf("[1]");
              scanf("%s %d",&M,&banyak1);
              if(M=="Telur asin") hasil1=banyak1*2500;
              else if(M=="Tempe orek") hasil1=banyak1*13000;
              else if(M=="Buncis") hasil1=banyak1*6000;
              printf("[2]");
              scanf("%s %d\n",&M2,&banyak2);
              getchar();
              if(M2=="Telur asin") hasil2=banyak2*2500;
              else if(M2=="Tempe orek") hasil2=banyak2*13000;
              else if(M2=="Buncis") hasil2=banyak2*6000;
              printf("Total: Rp%d\n",hasil1+hasil2);
              printf("Press enter to continue...\n");
	// Memakai break, agar sistem tidak melakukan run terus-menerus
              break;
              
              case 8:
	// Kita print "Exit Warteg" untuk menampilkan pilihan kedelapan
              	printf("Exit Warteg\n");
              	printf("Please expand your terminal to full screen!\n");
              	printf("Please enter to continue...\n");
              default:
              printf("input hanya dari 1-8 !!!");
        }
// Bagian terakhir, print kata "terima kasih"
    printf("\nTerimakasih");
    
}
