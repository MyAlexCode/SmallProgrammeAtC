#include<stdio.h>


int etos,epilogi_pinaka,epilogi_etous,epilogi_pinaka_etous,xronologia;
int pinakas_etous1[30][30],pinakas_etous2[30][30],pinakas_etous3[30][30],timi1=0,timi2=0,timi3=0,seira,pinakas_mines[30][30],minas,imera,arithmos;
int sinexeia,i,k;

main(){
for (i=1; i<=4; i++){
  for(k=1; k<=28; k++){
pinakas_etous1[i][k]=++timi1;
}}

pinakas_etous1[4][21]=0;




for (i=1; i<=1; i++){
  for(k=5; k<=28; k++){
pinakas_etous2[i][k]=++timi2;
}}
for (i=2; i<=4; i++){
  for(k=1; k<=28; k++){
pinakas_etous2[i][k]=++timi2;
}}
pinakas_etous2[4][20]=0;



for (i=1; i<=1; i++){
  for(k=21; k<=28; k++){
pinakas_etous3[i][k]=++timi3;
}}
for (i=2; i<=5; i++){
  for(k=1; k<=28; k++){
pinakas_etous3[i][k]=++timi3;
}}




printf("Το πρόγραμμα αυτό βρίσκει τη μέρα πέφτει μια συγκεκριμένη ημερομηνία από το 1801 έως το 2099  \n" );
printf("  \n" );
printf("Εισήγαγε το έτος οι τιμές που πρέπει να δώσεις είναι ανάμεσα στο ~ 1801 ~και το ~ 2099 ~  \n " );
scanf("%d",&etos);
do{
if (etos<1801 || etos>2099){
 printf ("Το έτος που δώσατε δεν είναι μέσα στα όρια που ζητάει το πρόγραμμα\nΟι τιμές που πρέπει να δώσετε είναι από το 1801 έως και το 2099  \n");
sinexeia=0;
scanf("%d",&etos);
}
if (etos>=1801 || etos<=2099){
sinexeia=11;
 }
}while (sinexeia !=11);
xronologia=etos%100;

epilogi_pinaka_etous=etos/100;

if(epilogi_pinaka_etous==18 || etos==1900){
for (i=1; i<=4; i++){
  for(k=1; k<=28; k++){if (pinakas_etous1[i][k]==xronologia){ seira=k;}
}}}


if((epilogi_pinaka_etous==19 || etos==2000) && etos!=1900){for (i=1; i<=1; i++){
  for(k=5; k<=28; k++){if (pinakas_etous2[i][k]==xronologia){seira=k;}}}
for (i=2; i<=4; i++){
  for(k=1; k<=28; k++){if (pinakas_etous2[i][k]==xronologia){seira=k;}
}}}


if(epilogi_pinaka_etous==20 && etos!=2000){for (i=1; i<=1; i++){
  for(k=21; k<=28; k++){if (pinakas_etous3[i][k]==xronologia){seira=k;}}}
for (i=2; i<=5; i++){
  for(k=1; k<=28; k++){if (pinakas_etous3[i][k]==xronologia){seira=k;}
}}}

pinakas_mines[1][1]=4;
pinakas_mines[1][2]=5;
pinakas_mines[1][3]=6;
pinakas_mines[1][4]=0;
pinakas_mines[1][5]=2;
pinakas_mines[1][6]=3;
pinakas_mines[1][7]=4;
pinakas_mines[1][8]=5;
pinakas_mines[1][9]=0;
pinakas_mines[1][10]=1;
pinakas_mines[1][11]=2;
pinakas_mines[1][12]=3;
pinakas_mines[1][13]=5;
pinakas_mines[1][14]=6;
pinakas_mines[1][15]=0;
pinakas_mines[1][16]=1;
pinakas_mines[1][17]=3;
pinakas_mines[1][18]=4;
pinakas_mines[1][19]=5;
pinakas_mines[1][20]=6;
pinakas_mines[1][21]=1;
pinakas_mines[1][22]=2;
pinakas_mines[1][23]=3;
pinakas_mines[1][24]=4;
pinakas_mines[1][25]=6;
pinakas_mines[1][26]=0;
pinakas_mines[1][27]=1;
pinakas_mines[1][28]=2;

pinakas_mines[2][1]=0;
pinakas_mines[2][2]=1;
pinakas_mines[2][3]=2;
pinakas_mines[2][4]=3;
pinakas_mines[2][5]=5;
pinakas_mines[2][6]=6;
pinakas_mines[2][7]=0;
pinakas_mines[2][8]=1;
pinakas_mines[2][9]=3;
pinakas_mines[2][10]=4;
pinakas_mines[2][11]=5;
pinakas_mines[2][12]=6;
pinakas_mines[2][13]=1;
pinakas_mines[2][14]=2;
pinakas_mines[2][15]=3;
pinakas_mines[2][16]=4;
pinakas_mines[2][17]=6;
pinakas_mines[2][18]=0;
pinakas_mines[2][19]=1;
pinakas_mines[2][20]=2;
pinakas_mines[2][21]=4;
pinakas_mines[2][22]=5;
pinakas_mines[2][23]=6;
pinakas_mines[2][24]=0;
pinakas_mines[2][25]=2;
pinakas_mines[2][26]=3;
pinakas_mines[2][27]=4;
pinakas_mines[2][28]=5;

pinakas_mines[3][1]=0;
pinakas_mines[3][2]=1;
pinakas_mines[3][3]=2;
pinakas_mines[3][4]=4;
pinakas_mines[3][5]=5;
pinakas_mines[3][6]=6;
pinakas_mines[3][7]=0;
pinakas_mines[3][8]=2;
pinakas_mines[3][9]=3;
pinakas_mines[3][10]=4;
pinakas_mines[3][11]=5;
pinakas_mines[3][12]=0;
pinakas_mines[3][13]=1;
pinakas_mines[3][14]=2;
pinakas_mines[3][15]=3;
pinakas_mines[3][16]=5;
pinakas_mines[3][17]=6;
pinakas_mines[3][18]=0;
pinakas_mines[3][19]=1;
pinakas_mines[3][20]=3;
pinakas_mines[3][21]=4;
pinakas_mines[3][22]=5;
pinakas_mines[3][23]=6;
pinakas_mines[3][24]=1;
pinakas_mines[3][25]=2;
pinakas_mines[3][26]=3;
pinakas_mines[3][27]=4;
pinakas_mines[3][28]=6;

pinakas_mines[4][1]=3;
pinakas_mines[4][2]=4;
pinakas_mines[4][3]=5;
pinakas_mines[4][4]=0;
pinakas_mines[4][5]=1;
pinakas_mines[4][6]=2;
pinakas_mines[4][7]=3;
pinakas_mines[4][8]=5;
pinakas_mines[4][9]=6;
pinakas_mines[4][10]=0;
pinakas_mines[4][11]=1;
pinakas_mines[4][12]=3;
pinakas_mines[4][13]=4;
pinakas_mines[4][14]=5;
pinakas_mines[4][15]=6;
pinakas_mines[4][16]=1;
pinakas_mines[4][17]=2;
pinakas_mines[4][18]=3;
pinakas_mines[4][19]=4;
pinakas_mines[4][20]=6;
pinakas_mines[4][21]=0;
pinakas_mines[4][22]=1;
pinakas_mines[4][23]=2;
pinakas_mines[4][24]=4;
pinakas_mines[4][25]=5;
pinakas_mines[4][26]=6;
pinakas_mines[4][27]=0;
pinakas_mines[4][28]=2;

pinakas_mines[5][1]=5;
pinakas_mines[5][2]=6;
pinakas_mines[5][3]=0;
pinakas_mines[5][4]=2;
pinakas_mines[5][5]=3;
pinakas_mines[5][6]=4;
pinakas_mines[5][7]=5;
pinakas_mines[5][8]=0;
pinakas_mines[5][9]=1;
pinakas_mines[5][10]=2;
pinakas_mines[5][11]=3;
pinakas_mines[5][12]=5;
pinakas_mines[5][13]=6;
pinakas_mines[5][14]=0;
pinakas_mines[5][15]=1;
pinakas_mines[5][16]=3;
pinakas_mines[5][17]=4;
pinakas_mines[5][18]=5;
pinakas_mines[5][19]=6;
pinakas_mines[5][20]=1;
pinakas_mines[5][21]=2;
pinakas_mines[5][22]=3;
pinakas_mines[5][23]=4;
pinakas_mines[5][24]=6;
pinakas_mines[5][25]=0;
pinakas_mines[5][26]=1;
pinakas_mines[5][27]=2;
pinakas_mines[5][28]=4;

pinakas_mines[6][1]=1;
pinakas_mines[6][2]=2;
pinakas_mines[6][3]=3;
pinakas_mines[6][4]=5;
pinakas_mines[6][5]=6;
pinakas_mines[6][6]=0;
pinakas_mines[6][7]=1;
pinakas_mines[6][8]=3;
pinakas_mines[6][9]=4;
pinakas_mines[6][10]=5;
pinakas_mines[6][11]=6;
pinakas_mines[6][12]=1;
pinakas_mines[6][13]=2;
pinakas_mines[6][14]=3;
pinakas_mines[6][15]=4;
pinakas_mines[6][16]=6;
pinakas_mines[6][17]=0;
pinakas_mines[6][18]=1;
pinakas_mines[6][19]=2;
pinakas_mines[6][20]=4;
pinakas_mines[6][21]=5;
pinakas_mines[6][22]=6;
pinakas_mines[6][23]=0;
pinakas_mines[6][24]=2;
pinakas_mines[6][25]=3;
pinakas_mines[6][26]=4;
pinakas_mines[6][27]=5;
pinakas_mines[6][28]=0;


pinakas_mines[7][1]=3;
pinakas_mines[7][2]=4;
pinakas_mines[7][3]=5;
pinakas_mines[7][4]=0;
pinakas_mines[7][5]=1;
pinakas_mines[7][6]=2;
pinakas_mines[7][7]=3;
pinakas_mines[7][8]=5;
pinakas_mines[7][9]=6;
pinakas_mines[7][10]=0;
pinakas_mines[7][11]=1;
pinakas_mines[7][12]=3;
pinakas_mines[7][13]=4;
pinakas_mines[7][14]=5;
pinakas_mines[7][15]=6;
pinakas_mines[7][16]=1;
pinakas_mines[7][17]=2;
pinakas_mines[7][18]=3;
pinakas_mines[7][19]=4;
pinakas_mines[7][20]=6;
pinakas_mines[7][21]=0;
pinakas_mines[7][22]=1;
pinakas_mines[7][23]=2;
pinakas_mines[7][24]=4;
pinakas_mines[7][25]=5;
pinakas_mines[7][26]=6;
pinakas_mines[7][27]=0;
pinakas_mines[7][28]=2;

pinakas_mines[8][1]=6;
pinakas_mines[8][2]=0;
pinakas_mines[8][3]=1;
pinakas_mines[8][4]=3;
pinakas_mines[8][5]=4;
pinakas_mines[8][6]=5;
pinakas_mines[8][7]=6;
pinakas_mines[8][8]=1;
pinakas_mines[8][9]=2;
pinakas_mines[8][10]=3;
pinakas_mines[8][11]=4;
pinakas_mines[8][12]=6;
pinakas_mines[8][13]=0;
pinakas_mines[8][14]=1;
pinakas_mines[8][15]=2;
pinakas_mines[8][16]=4;
pinakas_mines[8][17]=5;
pinakas_mines[8][18]=6;
pinakas_mines[8][19]=0;
pinakas_mines[8][20]=2;
pinakas_mines[8][21]=3;
pinakas_mines[8][22]=4;
pinakas_mines[8][23]=5;
pinakas_mines[8][24]=0;
pinakas_mines[8][25]=1;
pinakas_mines[8][26]=2;
pinakas_mines[8][27]=3;
pinakas_mines[8][28]=5;


pinakas_mines[9][1]=2;
pinakas_mines[9][2]=3;
pinakas_mines[9][3]=4;
pinakas_mines[9][4]=6;
pinakas_mines[9][5]=0;
pinakas_mines[9][6]=1;
pinakas_mines[9][7]=2;
pinakas_mines[9][8]=4;
pinakas_mines[9][9]=5;
pinakas_mines[9][10]=6;
pinakas_mines[9][11]=0;
pinakas_mines[9][12]=2;
pinakas_mines[9][13]=3;
pinakas_mines[9][14]=4;
pinakas_mines[9][15]=5;
pinakas_mines[9][16]=0;
pinakas_mines[9][17]=1;
pinakas_mines[9][18]=2;
pinakas_mines[9][19]=3;
pinakas_mines[9][20]=5;
pinakas_mines[9][21]=6;
pinakas_mines[9][22]=0;
pinakas_mines[9][23]=1;
pinakas_mines[9][24]=3;
pinakas_mines[9][25]=4;
pinakas_mines[9][26]=5;
pinakas_mines[9][27]=6;
pinakas_mines[9][28]=1;


pinakas_mines[10][1]=4;
pinakas_mines[10][2]=5;
pinakas_mines[10][3]=6;
pinakas_mines[10][4]=1;
pinakas_mines[10][5]=2;
pinakas_mines[10][6]=3;
pinakas_mines[10][7]=4;
pinakas_mines[10][8]=6;
pinakas_mines[10][9]=0;
pinakas_mines[10][10]=1;
pinakas_mines[10][11]=2;
pinakas_mines[10][12]=4;
pinakas_mines[10][13]=5;
pinakas_mines[10][14]=6;
pinakas_mines[10][15]=0;
pinakas_mines[10][16]=2;
pinakas_mines[10][17]=3;
pinakas_mines[10][18]=4;
pinakas_mines[10][19]=5;
pinakas_mines[10][20]=0;
pinakas_mines[10][21]=1;
pinakas_mines[10][22]=2;
pinakas_mines[10][23]=3;
pinakas_mines[10][24]=5;
pinakas_mines[10][25]=6;
pinakas_mines[10][26]=0;
pinakas_mines[10][27]=1;
pinakas_mines[10][28]=3;



pinakas_mines[11][1]=0;
pinakas_mines[11][2]=1;
pinakas_mines[11][3]=2;
pinakas_mines[11][4]=4;
pinakas_mines[11][5]=5;
pinakas_mines[11][6]=6;
pinakas_mines[11][7]=0;
pinakas_mines[11][8]=2;
pinakas_mines[11][9]=3;
pinakas_mines[11][10]=4;
pinakas_mines[11][11]=5;
pinakas_mines[11][12]=0;
pinakas_mines[11][13]=1;
pinakas_mines[11][14]=2;
pinakas_mines[11][15]=3;
pinakas_mines[11][16]=5;
pinakas_mines[11][17]=6;
pinakas_mines[11][18]=0;
pinakas_mines[11][19]=1;
pinakas_mines[11][20]=3;
pinakas_mines[11][21]=4;
pinakas_mines[11][22]=5;
pinakas_mines[11][23]=6;
pinakas_mines[11][24]=1;
pinakas_mines[11][25]=2;
pinakas_mines[11][26]=3;
pinakas_mines[11][27]=4;
pinakas_mines[11][28]=6;



pinakas_mines[12][1]=2;
pinakas_mines[12][2]=3;
pinakas_mines[12][3]=4;
pinakas_mines[12][4]=6;
pinakas_mines[12][5]=0;
pinakas_mines[12][6]=1;
pinakas_mines[12][7]=2;
pinakas_mines[12][8]=4;
pinakas_mines[12][9]=5;
pinakas_mines[12][10]=6;
pinakas_mines[12][11]=0;
pinakas_mines[12][12]=2;
pinakas_mines[12][13]=3;
pinakas_mines[12][14]=4;
pinakas_mines[12][15]=5;
pinakas_mines[12][16]=0;
pinakas_mines[12][17]=1;
pinakas_mines[12][18]=2;
pinakas_mines[12][19]=3;
pinakas_mines[12][20]=5;
pinakas_mines[12][21]=6;
pinakas_mines[12][22]=0;
pinakas_mines[12][23]=1;
pinakas_mines[12][24]=3;
pinakas_mines[12][25]=4;
pinakas_mines[12][26]=5;
pinakas_mines[12][27]=6;
pinakas_mines[12][28]=1;



printf("Εισήγαγε το μήνα του έτους που ψάχνεις οι τιμές  που πρέπει να δώσεις είναι ανάμεσα στο 1 και το 12 \n " );
scanf("%d",&minas);
do{
if (minas<1 || minas>12){
 printf ("Ο μήνας  που δώσατε δεν είναι μέσα στα όρια που ζητάει το πρόγραμμα\nΟι τιμές που πρέπει να δώσετε είναι από το 1 έως και το 12\n");
sinexeia=0;
scanf("%d",&minas);
}
if (minas>=1 || minas<=12){
sinexeia=11;
 }
}while (sinexeia !=11);



if (minas==1||minas==3||minas==5||minas==7||minas==8||minas==10||minas==12){printf("Εισήγαγε την ημερομηνία του μήνα που ψάχνεις οι τιμές  που πρέπει να δώσεις είναι ανάμεσα στο 1 και το 31 \n " );
scanf("%d",&imera);
do{
if (imera<1 || imera>31){
 printf ("Ο ημερομηνία  που δώσατε δεν είναι μέσα στα όρια που ζητάει το πρόγραμμα\nΟι τιμές που πρέπει να δώσετε είναι από το 1 έως και το 31\n");
sinexeia=0;
scanf("%d",&imera);
}
if (imera>=1 || imera<=31){
sinexeia=11;
 }
}while (sinexeia !=11);
}

if (minas==2){printf("Εισήγαγε την ημερομηνία του μήνα που ψάχνεις οι τιμές  που πρέπει να δώσεις είναι ανάμεσα στο 1 και το 29 \n " );
scanf("%d",&imera);
do{
if (imera<1 || imera>29){
 printf ("Ο ημερομηνία  που δώσατε δεν είναι μέσα στα όρια που ζητάει το πρόγραμμα\nΟι τιμές που πρέπει να δώσετε είναι από το 1 έως και το 29\n");
sinexeia=0;
scanf("%d",&imera);
}
if (imera>=1 || imera<=29){
sinexeia=11;
 }
}while (sinexeia !=11);
}

if (minas==4||minas==6||minas==9||minas==11){printf("Εισήγαγε την ημερομηνία του μήνα που ψάχνεις οι τιμές  που πρέπει να δώσεις είναι ανάμεσα στο 1 και το 30 \n " );
scanf("%d",&imera);
do{
if (imera<1 || imera>30){
 printf ("Ο ημερομηνία  που δώσατε δεν είναι μέσα στα όρια που ζητάει το πρόγραμμα\nΟι τιμές που πρέπει να δώσετε είναι από το 1 έως και το 30\n");
sinexeia=0;
scanf("%d",&imera);
}
if (imera>=1 || imera<=30){
sinexeia=11;
 }
}while (sinexeia !=11);
}

arithmos=pinakas_mines[minas][seira];
arithmos=arithmos+imera;

if (arithmos==1||arithmos==8||arithmos==15||arithmos==22||arithmos==29||arithmos==36){printf("Η μέρα που ψάχνεις είναι Κυριακή\n ");}
if (arithmos==2||arithmos==9||arithmos==16||arithmos==23||arithmos==30||arithmos==37){printf("Η μέρα που ψάχνεις είναι Δευτέρα \n ");}
if (arithmos==3||arithmos==10||arithmos==17||arithmos==24||arithmos==31){printf("Η μέρα που ψάχνεις είναι Τρίτη \n  ");}
if (arithmos==4||arithmos==11||arithmos==18||arithmos==25||arithmos==32){printf("Η μέρα που ψάχνεις είναι Τετάρτη  \n ");}
if (arithmos==5||arithmos==12||arithmos==19||arithmos==26||arithmos==33){printf("Η μέρα που ψάχνεις είναι Πέμπτη \n  ");}
if (arithmos==6||arithmos==13||arithmos==20||arithmos==27||arithmos==34){printf("Η μέρα που ψάχνεις είναι Παρασκευή \n  ");}
if (arithmos==7||arithmos==14||arithmos==21||arithmos==28||arithmos==35){printf("Η μέρα που ψάχνεις είναι Σάββατο \n  ");}
}
