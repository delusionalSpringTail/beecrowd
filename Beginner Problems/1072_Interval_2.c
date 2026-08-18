#include <stdio.h>

int main(){

    int howManyScanf,numbers,in =0 ,out=0;
    scanf("%d",&howManyScanf);

    for (int i = 0; i < howManyScanf; i++)
    {
        scanf("%d",&numbers);
        if (numbers >= 10 && numbers <= 20)
        {
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    
    return 0;
}