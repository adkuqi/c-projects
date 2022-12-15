#include <stdio.h>
#include <stdlib.h>

int leseNote();
void notenAusgeben(int[], int );
void haeufigkeitAusgeben(int[], int );
float durchschnitt(int noten[],int notenAnzahl);
int nichtAngetreten(int noten[], int notenAnzahl);

int main() {

    int notenAnzahl = 10;
    int noten[notenAnzahl];


    for(int i = 0; i < notenAnzahl; i++){
        printf("Bitte geben Sie die %d. Note ein: \n",i + 1);
        noten[i] = leseNote();
    }

    int auswahl;
    do {
    printf("Schreibe 1 fuer 'Notenausgabe', 2 fuer 'Durchschnitt', 3 fuer 'Nicht mitgeschrieben', 4 fuer 'Haeufigkeit', 5 fuer 'Notenaktualisierung' oder 6 fuer 'Beenden': \n");
    scanf("%d", &auswahl);
    
    switch(auswahl) {
        case 1: 
            notenAusgeben(noten,notenAnzahl);
            break;
        case 2:
            float schnitt = durchschnitt(noten, notenAnzahl);
            printf("Der Durchschnitt betraegt: %.2f.\n",schnitt);
            break;
        case 3:
            int nichtMitgeschrieben = nichtAngetreten(noten, notenAnzahl);
            printf("%d Schueler nicht angetreten.\n",nichtMitgeschrieben);
            break;
        case 4:
            haeufigkeitAusgeben(noten,notenAnzahl);
            break;
        case 5:
            printf("Welche Note wollen Sie aktualisieren?\n");
            int notenStelle;
            scanf("%d", &notenStelle);
            printf("Geben Sie die neue Note ein: \n");
            int neueNote = leseNote();
            noten[notenStelle] = neueNote;
            break;
        case 6:
            printf("Tschuess!\n");
            break;
        default:
            printf("Bitte korrigieren Sie die Eingabe!\n");
            break;
    }
    } while(auswahl != 6);
    system("pause\n");
    return 0;
}

void haeufigkeitAusgeben(int noten[], int notenAnzahl) {
    int haeufigkeit[6];
    for(int i=0;i<6;i++){
        haeufigkeit[i] = 0;
    }
    for(int i = 0; i < notenAnzahl; i++) {
        haeufigkeit[ noten[i] ]++;
    }
    for(int i = 0; i < 6; i++){
        printf("Die Note %d kommt %d mal vor.\n",i,haeufigkeit[i]);
    }    
}

int nichtAngetreten(int noten[], int notenAnzahl){
    int anzahl = 0;
    for(int i = 0; i < notenAnzahl; i++) {
        if(noten[i] == 0){
            anzahl++;
        }
    }
    return anzahl;
}

float durchschnitt(int noten[],int notenAnzahl){
    float summe = 0;
    int valideNoten = 0;
    for(int i = 0; i < notenAnzahl; i++) {
        if(noten[i] != 0) {  
            summe += noten[i];         
            valideNoten++;
        }
    }
    return summe / valideNoten;
}

void notenAusgeben(int noten[], int notenAnzahl){
    for(int i = 0; i < notenAnzahl; i++){
        printf("%d. Note: %d \n",i,noten[i]);
    }
}



int leseNote(){
    int eingabe;
    do{
        scanf("%d", &eingabe);
        if(eingabe < 0 || eingabe > 5){
            printf("Diese Note ist ungueltig. Bitte nochmal eingeben: \n");
        }
    }while(eingabe < 0 || eingabe > 5);
    return eingabe;
}