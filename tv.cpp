#include <iostream>
#include <string>
using namespace std;

class tv {
    public:
        void jenistv(string tv);
        string merktv;
        void ukurantv(string ukuran);
    	void hargatv (int harga);
                
        };
    int main(){
    tv lcd,led,tvtabung,tvplasma; 

	lcd.merktv			="merk toshiba ";
	led.merktv			="merk samsung ";
	tvtabung.merktv		="merk lg ";
	tvplasma.merktv		="merk sharp ";
	
	cout << "Tv lcd: \n";
	cout << (lcd.merktv);
	lcd.ukurantv("40inch");
	lcd.hargatv(100000);
	cout <<"===================================\n";
	
	cout << "Tv led: \n";
	cout << (led.merktv);
	led.ukurantv("50inch");
	led.hargatv(200000);
	cout <<"===================================\n";
	
	cout << "Tv tabung: \n";
	cout << (tvtabung.merktv);
	tvtabung.ukurantv("60inch");
	tvtabung.hargatv(300000);
	cout <<"===================================\n";
	
	cout << "Tv plasma: \n";
	cout << (tvplasma.merktv);
	tvplasma.ukurantv("70inch");
	tvplasma.hargatv(400000);
	cout <<"===================================\n";
	
}
void tv::jenistv(string tv){
	cout <<"\n"<<"merk "<<tv<<endl;
}	
void tv::ukurantv(string ukuran){
	cout <<"\n"<<"ukuran "<<ukuran<<endl;
}
void tv::hargatv(int harga){
	cout <<"\n"<<"harga "<<harga<<endl;

}
