#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>




//Burak Önce   20120205052
//kullanıcıdan alınan dizi elemanlarını büyükten küçüğe sıralar


int main() {

int a[9]={65,55,34,21,5,5,2,2,-4},atama; //diziyi ve döngü için gerekli elemanı belirleriz




for(int x=0; x<9; x++){ // dizi sıralanması için döngü

  for(int y=0; y<9; y++)

      if(a[x] < a[y]){

        atama=a[x];  //dizi içi yer değiştirme
        a[x]=a[y];
        a[y]=atama;

      
      }

}
for(int x=0, y=8 ; x<9 ; x++,y--){
printf("%d",a[y]);

if(x<8)
printf(",");


}

  return 0;
}