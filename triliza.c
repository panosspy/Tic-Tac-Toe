#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int spexti(char f[16])
{
     int i;
     do{
         printf("Einai i seira sou dose mou to tetragono pou thes na bi to stixio sou ksekinodas apo to 0 mexrti to 15\n");   
         scanf("%d",&i);
         if (f[i]!='X' && f[i]!='O')
            break;
     }
     while(f[i]!=EOF);     
     return i;
}
  
int smix(char f[16])
{
     int i;
     srand(time(NULL));   
     printf("\nEinai i seira tou ipologisti. Perimenete!\n\n");
     if (f[0]==f[0+1] && f[0]==f[0+2] && f[0+3]!='X' && f[0+3]!='O' ){
        i=0+3;
        return i;
     }
     if (f[4]==f[4+1] && f[4]==f[4+2] && f[4+3]!='X' && f[4+3]!='O'){
        i=4+3;
        return i;
     }
     if (f[8]==f[8+1] && f[8]==f[8+2] && f[8+3]!='X' && f[8+3]!='O'){
        i=8+3;
        return i;
     }
     if (f[12]==f[12+1] && f[12]==f[12+2] && f[12+3]!='X' && f[12+3]!='O'){
        i=12+3;
        return i;
     }
     if (f[0]==f[0+1] && f[0]==f[0+3] && f[0+2]!='X' && f[0+2]!='O'){
        i=0+2;
        return i;
     }
     if (f[4]==f[4+1] && f[4]==f[4+3] && f[4+2]!='X' && f[4+2]!='O'){
        i=4+2;
        return i;
     }
     if (f[8]==f[8+1] && f[8]==f[8+3] && f[8+2]!='X' && f[8+2]!='O'){
        i=8+2;
        return i;
     }
     if (f[12]==f[12+1] && f[12]==f[12+3] && f[12+2]!='X' && f[12+2]!='O'){
        i=12+2;
        return i;
     }
     if (f[0]==f[0+2] && f[0]==f[0+3] && f[0+1]!='X' && f[0+1]!='O'){
        i=0+1;
        return i;
     }
     if (f[4]==f[4+2] && f[4]==f[4+3] && f[4+1]!='X' && f[4+1]!='O'){
        i=4+1;
        return i;
     }
     if (f[8]==f[8+2] && f[8]==f[8+3] && f[8+1]!='X' && f[8+1]!='O'){
        i=8+1;
        return i;
     }
     if (f[12]==f[12+2] && f[12]==f[12+3] && f[12+1]!='X' && f[12+1]!='O'){
        i=12+1;
        return i;
     }
     if (f[0+1]==f[0+2] && f[0+1]==f[0+3] && f[0]!='X' && f[0]!='O'){
        i=0;
        return i;
     }
     if (f[4+1]==f[4+2] && f[4+1]==f[4+3] && f[4]!='X' && f[4]!='O'){
        i=4;
        return i;
     }
     if (f[8+1]==f[8+2] && f[8+1]==f[8+3] && f[8]!='X' && f[8]!='O'){
        i=8;
        return i;
     }
     if (f[12+1]==f[12+2] && f[12+1]==f[12+3] && f[12]!='X' && f[12]!='O'){
        i=12;
        return i;
     }
     if (f[0]==f[4] && f[0]==f[8] && f[12]!='X' && f[12]!='O'){
        i=12;
        return i;
     }
     if (f[0]==f[4] && f[0]==f[12] && f[8]!='X' && f[8]!='O'){
        i=8;
        return i;
     }
     if (f[0]==f[8] && f[0]==f[12] && f[4]!='X' && f[4]!='O'){
        i=4;
        return i;
     }
     if (f[4]==f[8] && f[4]==f[12] && f[0]!='X' && f[0]!='O'){
        return 0;
     }
     if (f[1]==f[5] && f[1]==f[9] && f[13]!='X' && f[13]!='O'){
        i=13;
        return i;
     }
     if (f[1]==f[5] && f[1]==f[13] && f[9]!='X' && f[9]!='O'){
        i=9;
        return i;
     }
     if (f[1]==f[9] && f[1]==f[13] && f[5]!='X' && f[5]!='O'){
        i=5;
        return i;
     }
     if (f[5]==f[9] && f[5]==f[13] && f[1]!='X' && f[1]!='O'){
        return 1;
     }
     if (f[2]==f[6] && f[2]==f[10] && f[14]!='X' && f[14]!='O'){
        i=14;
        return i;
     }
     if (f[2]==f[6] && f[2]==f[14] && f[10]!='X' && f[10]!='O'){
        i=10;
        return i;
     }
     if (f[2]==f[10] && f[2]==f[14] && f[6]!='X' && f[6]!='O'){
        i=6;
        return i;
     }
     if (f[6]==f[10] && f[6]==f[14] && f[2]!='X' && f[2]!='O'){
        return 2;
     }
     if (f[3]==f[7] && f[3]==f[11] && f[15]!='X' && f[15]!='O'){
        i=15;
        return i;
     }
     if (f[3]==f[7] && f[3]==f[15] && f[11]!='X' && f[11]!='O'){
        i=11;
        return i;
     }
     if (f[3]==f[11] && f[3]==f[15] && f[7]!='X' && f[7]!='O'){
        i=7;
        return i;
     }
     if (f[7]==f[11] && f[7]==f[15] && f[3]!='X' && f[3]!='O'){
        return 3;
     }
     if (f[0]==f[5] && f[0]==f[10] && f[15]!='X' && f[15]!='O'){
         i=15;
         return i;
     }
     if (f[0]==f[5] && f[0]==f[15] && f[10]!='X' && f[10]!='O'){
         i=10;
         return i;
     }
     if (f[0]==f[10] && f[0]==f[15] && f[5]!='X' && f[5]!='O'){
         i=5;
         return i;
     }
     if (f[5]==f[10] && f[5]==f[15] && f[0]!='X' && f[0]!='O'){
         i=0;
         return i;
     }
     if (f[3]==f[6] && f[3]==f[9] && f[12]!='X' && f[12]!='O'){
         i=12;
         return i;
     }
     if (f[3]==f[6] && f[3]==f[12] && f[9]!='X' && f[9]!='O'){
         i=9;
         return i;
     }
     if (f[3]==f[9] && f[3]==f[12] && f[6]!='X' && f[6]!='O'){
         i=6;
         return i;
     }
     if (f[6]==f[9] && f[6]==f[12] && f[3]!='X' && f[3]!='O'){
         i=3;
         return i;
     }
     do{
        i = rand() % 16;
        if (f[i]!='X' && f[i]!='O')
           break; 
     }
     while(f[i]!=EOF);
     return i;    
}

void emfanisi(char z[4][4])
{
     int a,b;
     
     for (a=0;a<4;a++){
         for (b=0;b<4;b++){
             printf(" %c|",z[a][b]);
             }
         printf("\n");
         printf(" -  -  -  -\n");  
     }
         
}

int elnikiti(char z[4][4],char x)
{
     int a,b;
     for (a=0;a<4;a++){
         for (b=0;b<4;b++){
             if (z[a][b]==z[a+1][b] && z[a][b]==z[a+2][b] && z[a][b]==z[a+3][b] && (z[a][b]=='X' || z[a][b]=='O')){
                if (x=='p'){
                     printf("Sixaritiria molis kataferate na nikisete!!!!\n");
                     return 3;
                }
                else{
                     printf("Distixos molis xasate :(\n");
                     return 3;
                }                                     
             }   
             if (z[a][b]==z[a][b+1] && z[a][b+1]==z[a][b+2] && z[a][b+2]==z[a][b+3] && (z[a][b]=='X' || z[a][b]=='O')){
                if (x=='p'){
                     printf("Sixaritiria molis kataferate na nikisete!!!!\n");
                     return 3;
                }
                else{
                     printf("Distixos molis xasate :(\n");
                     return 3;
                }
             }   
             if (z[0][0]==z[1][1] && z[0][0]==z[2][2] && z[0][0]==z[3][3] && (z[0][0]=='X' || z[0][0]=='O')){
                if (x=='p'){
                     printf("Sixaritiria molis kataferate na nikisete!!!!\n");
                     return 3;
                }
                else{
                     printf("Distixos molis xasate :(\n");
                     return 3;
                }
             }
             if (z[0][3]==z[1][2] && z[0][3]==z[2][1] && z[0][3]==z[3][0] && (z[0][3]=='X' || z[0][3]=='O')){
                if (x=='p'){
                     printf("Sixaritiria molis kataferate na nikisete!!!!\n");
                     return 3;
                }
                else{
                     printf("Distixos molis xasate :(\n");
                     return 3;
                }
             }                          
         }
     }
     return 0;                 
                     
}

int gemp(char z[4][4])
{
    int a,b,i=0;
    
    for (a=0;a<4;a++){
        for (b=0;b<4;b++){
            if ( z[a][b]=='X' || z[a][b]=='O'){
                 i++;
            }
        }
    }
    return i;
}








int main(int argc, char *argv[])
{
  int i,a,b,y,j,g,t;
  char x,p,u;
  char z[4][4]={" "};
  char f[16];
  char l='p';
  char k='u';
  
  srand(time(NULL));
  
  emfanisi(z);
  printf("Ean thes na ksekinisis protos pata y ean oxi n\n");
  switch (x=getchar())
  {       
         case'n':  
              u = 'X';
              p = 'O';
              a = rand() % 4;
              b = rand() % 4;
              z[a][b] = u; 
              emfanisi(z);
              break;
         case'y':
              p = 'X';
              u = 'O';
              break;
         default:
              break;
  }
  
  g=0;
  for (a=0;a<4;a++){
      for (b=0;b<4;b++){
          f[g]=z[a][b];
          g++;
      }
  }
  
  
  
  for (i=0;i<9;i++){      
      
      t=gemp(z);
      if (t==16){
         printf("Distixos molis gemise o pinakas etsi to pexnidi ginete isopalia\n");
         system("PAUSE");
         return 0;
      }
      g=spexti(f);
      f[g]=p;
      g=0;
      for (a=0;a<4;a++){
          for (b=0;b<4;b++){
              z[a][b]=f[g];
              g++;
          }
      }
      emfanisi(z);
      y=elnikiti(z,l);
      if (y==3){
           system("PAUSE");	
           return 0;
      }
      t=gemp(z);
      if (t==16){
         printf("Distixos molis gemise o pinakas etsi to pexnidi ginete isopalia\n");
         system("PAUSE");
         return 0;
      }       
      g=smix(f);
      f[g]=u;
      g=0;
      for (a=0;a<4;a++){
          for (b=0;b<4;b++){
              z[a][b]=f[g];
              g++;
          }
      }
      emfanisi(z);
      y=elnikiti(z,k);
      if (y==3){
           system("PAUSE");	
           return 0;
      }      
  } 
     
       
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
