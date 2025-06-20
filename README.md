# Losning-til-nerdle
Her ligger C++ kode som kan brukes til å løse oppgaver fra den populære Wordle-varianten "Nerdle, targets" (https://nerdlegame.com/s/targets/)  

Du kan bruke den ved å legge til tallene dine i 
std::vector<int> siffer={}; og 
int desiredResult = ;
på linje 6 og 7 og kjøre programmet. 

Da får du en output som 
1. viser hvor mange mulige løsninger programmet har funnet (dette skal stå to ganger, for å teste at løsningene for hvor man skal ha tallene og hvor man skal ha operasjonene stemmer overens)
2. hvilken rekkefølge tallene skal stå i
3. hvilken rekkefølge operasjonene skal stå i, operasjonene er representert som tall hvor  0 = +, 1 = -, 2 = *, 3 = /
PEMDAS er ikke fulgt, men heller jobber man fra venstre mot høyre.

--- EKSEMPEL ---
6 std::vector<int> siffer={1,2,3,4,5,6};
7 int desiredResult =10; 
kjøres og man får denne outputen

107 107                   //107 løsninger på oppgaven
size^, tall v             //
2, 7, 80, 8, 4, 11,       
 operasjoner v            //Dette leses som ((2+7)*80 + 8 )/4 +11
02030                     //+, *, +, /, +



Den er nokså upolert, og var ett prosjekt jeg slengte sammen på noen timer bare, og har derfor mange store mangler, planlegger i utgangspunktet ikkje å se meir på dette prosjektet, 
men dersom eg velge å sette meg ned med det igjen vil eg legge til funksjonalitetar som 
1. enklere å kunne bytte mellom ulike mengder input-tall, per no er den default på 6 og man må legge til noen få linjer i "variations.cpp" for å fikse det. Problemet er ikkje med å generere tallvariasjonar, men ved å generere operatorvariasjoner. Dette ble gjort litt fort og gale. 
2. det er og ett behov for optimalisering av koden, da den nå tester ganske mange duplikater (i form av eks. 3+6 = 6+3 
3. polere looken så den er enklere å bruke, kanskje få inn et grafisk brukergrensesnitt
4. Skrive ut alle mulige løsninger på oppgaven, evt. lage en algoritme som velger den mest optimale løsningen (nå velger den bare den løsningen med "lavest" verdi i en sort algoritme)
