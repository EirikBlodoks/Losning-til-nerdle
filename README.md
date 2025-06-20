# Losning-til-nerdle
Her ligger C++ kode som kan brukes til å løse oppgaver fra den populære Wordle-varianten "Nerdle, targets" (https://nerdlegame.com/s/targets/)  

Du kan bruke den ved å legge til tallene dine i 
std::vector<int> siffer={}; og 
int desiredResult = ;
på linje 6 og 7

Den er nokså upolert, og var ett prosjekt jeg slengte sammen på noen timer bare, og har derfor mange store mangler, planlegger i utgangspunktet ikkje å se meir på dette prosjektet, 
men dersom eg velge å sette meg ned med det igjen vil eg legge til funksjonalitetar som 
1. enklere å kunne bytte mellom ulike mengder input-tall, per no er den default på 6 og man må legge til noen få linjer i "variations.cpp" for å fikse det. Problemet er ikkje med å generere tallvariasjonar, men ved å generere operatorvariasjoner. Dette ble gjort litt fort og gale 
2. det er og ett behov for optimalisering av koden, da den nå tester ganske mange duplikater
3. polere looken så den er enklere å bruke, kanskje få inn et grafisk brukergrensesnitt
