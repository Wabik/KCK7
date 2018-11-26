int dioda = 13;
int czas_krotkie = 250;
int czas_dlugie = 500;
int przerwa_miedzy_sygnalami=300;
int przerwa_miedzy_literami=1000;
int przerwa_miedzy_sekwwencjami=2000;
void setup(){
    pinMode(dioda, OUTPUT);
}
void loop(){
for (int i = 0; i < 3; i = i + 1){
        digitalWrite(dioda, HIGH); 
        delay(czas_krotkie);
        digitalWrite(dioda, LOW); 
        delay(przerwa_miedzy_sygnalami);
    }
    delay(przerwa_miedzy_literami);

for (int i = 0; i < 3; i = i + 1){
        digitalWrite(dioda, HIGH); 
        delay(czas_dlugie);
        digitalWrite(dioda, LOW); 
        delay(przerwa_miedzy_sygnalami);
    }
    delay(przerwa_miedzy_literami);
  
for (int i = 0; i < 3; i = i + 1){
        digitalWrite(dioda, HIGH); 
        delay(czas_krotkie);
        digitalWrite(dioda, LOW); 
        delay(przerwa_miedzy_sygnalami);
    }
    delay(przerwa_miedzy_sekwwencjami);


}