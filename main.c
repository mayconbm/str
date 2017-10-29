#include <stdio.h>

    int i=0, op=1, j=0, dev;
    char str[99][99],pesquisar[99];


void cad(){
                    flush_in();
                    puts("str: ");
                    gets(str[i]);
                    i++;
}

void pes(){

    j=0;
                    flush_in();
                    puts("pesquisar: ");
                    gets(pesquisar);

                    while (j<i){

                     if(strcmp(str[j],pesquisar)==0){
                        printf("STR %d sao iguais\n",j);
                    }else{
                    printf("STR %d Diferentes\n",j);
                    }
                    j++;
                    }
}

void mos(){

    j=0;

    while (j<i){
        printf("%d: %s\n",j,str[j]);
        j++;
    }
}

void flush_in()
{
   int ch;
   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main ()
{

    while(op!=0){
        printf("op 1=cadastrar: 2=pesquisar: 3=mostrar");
        scanf("%d",&dev);

        switch(dev){

        case 1:
        cad();
        break;

        case 2:
        pes();
        break;

        case 3:
        mos();
        break;


        }

        printf("0(zero) para parar: ");
        scanf("%d",&op);

    }

    system("pause");

  return 0;
}
