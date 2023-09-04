#include <iostream>
using namespace std;



int main()
{
    int datos[]={2,4,5,1,0,20,30,10,50,3,7,9,12,13,90,87,65,43,70,34,45,6,19,67,99,56,76,17,65,70};
    int n=30;
    int i;
    int j;
   
    
    for (i=1; i<n; i++){
         for (j=0 ; j<n - 1; j++){
               if (datos[j] > datos[j+1]){
                    n = datos[j];
                    datos[j] = datos[j+1];
                   datos[j+1] = n;
}
}
}
for (size_t i = 0; i < n; i++) {
        std::cout << datos[i] << ' ';
    }

   
    
    return 0;
}