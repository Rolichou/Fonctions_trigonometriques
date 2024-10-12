#include<iostream>

 /*declaration des fonctions*/
    float factoriel(int a);
    float puissance (float x, int n);
    float conversion (float j);
    float sinus ( float m);
    float cosinus ( float k);

 int main(int argc, char**argv){
   
    int v;
do{
    std:: cout << "Bonjour monsieur ou madame ce programme permet de determiner le cosinus, le sinus ou la tangente d'un angle selon l'option choisie"<< std::endl;

    int r,n=0;
    float ang, sin_ang=0, cos_ang=0, tan_ang;
    float a, b, c;
    std:: cout<<"Hello pour calculer le sinus d'un angle(en degre) entrer 1"<<std:: endl;
    std:: cout<<"      pour calculer le cosinus d'un angle(en degre) entrer 2 "<<std:: endl;
    std:: cout<<"      pour calculer la tangente d'un angle(en degre) entrer 3"<<std:: endl;
    std:: cin>>r;
    std:: cout<<"       Entrer la mesure de cet angle en degre"<<std:: endl;
    std:: cin>> ang;
/*conversion de l'angle entré en degré en radian*/
    float rad = conversion(ang);
/* execution du code selon l'option choisie*/
    if(r==1){
        sin_ang= sinus(rad);
        std:: cout<<"le sinus de "<< ang << " degre est :   "<< sin_ang<< std::endl;

    } else if( r==2){
        cos_ang= cosinus(rad);
            std:: cout<<"le cosinus de "<< ang << "degre est:   "<< cos_ang<< std::endl;
    
    }else if ( r==3){
       sin_ang= sinus(rad);
       cos_ang= cosinus(rad);
        tan_ang=sin_ang/cos_ang;
        std:: cout<<"la tangente de "<< ang << " degre est:  "<< tan_ang<< std::endl;
    }

     std:: cin>>v;
}while (v!=0);
  
    return 0;
 }

/* Fonction factoriel*/
float factoriel(int n){
    float fact=1;
    int i;
    if( n==1 || n==0){
        fact=1;
    }else {
        fact=n*(n-1);
        for(i=2; i<=(n-1); i++){
            fact = fact*(n-i);
        }
    }
    return fact;
 }
/* Fonction puissance*/
float puissance(float x,int n){
    float puis=1;
    int i;
    if( n==0){
        puis = 1;
    } else if (n==0 && x==0){
        return 0;
    }else{
        for(i=1;i<=n; i++){
            puis = puis*x;
            }
        }
    return puis;
 }
/* Fonction conversion*/
 float conversion (float j){
    const float pi=3.1415926536;
    float rad= (j*pi)/180; 
    return rad;
 }
/* Fonction cosinus*/
 float cosinus(float k){
    float cos;
    cos= 1 - (puissance (k,2)/factoriel(2)) + (puissance (k,4)/factoriel(4)) - (puissance (k,6)/factoriel(6));
    return cos;
 }
/* Fonction sinus*/
 float sinus ( float m){
    float sin;
    sin = m - (puissance (m,3)/factoriel(3)) + (puissance (m,6)/factoriel(6)) - (puissance (m,9)/factoriel(9));
    return sin;
 }