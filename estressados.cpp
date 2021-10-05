#include <iostream>
using namespace std;

bool existe(int x)
{   
    const int tam = 3;
    int vet[tam] = {5, -15, 20};
    bool repete = false;
    for(int i = 0; i < tam; i++) {
        if(vet[i] == x) {
            repete = true;
            break;
        }
    }
    return repete;
}

int contar(int x)
{
    const int tam = 4;
    int vet[tam] = {-1, 20, -1, -99};
    int cont = 0;
    for(int i =0;i < tam; i++) {
        if(vet[i] == x){
            cont +=1;
        }
    }
    return cont;
}

int procurar_valor(int x)
{
    const int tam = 4;
    int vet[tam] = {-1, -50, -1, -99};
    int posicao = -1;
    for(int i = 0; i < tam; i++) {
        if(vet[i] == x) {
            posicao = i;
            break;
        }
    }
    return posicao;
}

int procurar_valor_apartir(int x, int inicio)
{
    const int tam = 6;
    int vet[tam] = {5, 3, -1, -50, -1, -99};
    int posicao = -1;
    for(int i = inicio; i < tam; i++) {
        if(vet[i] == x) {
            posicao = i;
            break;
        }
    }
    return posicao;
}

int procurar_menor() 
{
    const int tam = 6;
    int vet[tam] = {5, 3, -1, -50, -1, -99};
    int menor = 200;
    for(int i = 0; i < tam; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
        }
    }
    return menor;
}

int procurar_menor_pos()
{
    const int tam = 6;
    int vet[tam] = {15, 9, 14, 27, -93, -72};
    int menor = 200;
    int m_posicao = -1;
    for(int i = 0; i < tam; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
            m_posicao = i;
        }
    }
    return  m_posicao;
}

int procurar_menor_pos_apartir(int ini)
{
    const int tam = 6;
    int vet[tam] = {-75, 3, -1, -50, -1, 10};
    int menor = 200;
    int m_posicao = -1;
    for(int i = ini; i < tam; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
            m_posicao = i;
        }
    }
    return  m_posicao;
}

int procurar_melhor_pos_se()
{
    const int tam = 6;
    int vet[tam] = {5, 3, -1, -50, 1, -99};
    int menor = 101;
    int posicao = -1;
    for(int i = 0; i < tam; i++) {
        if(vet[i] < menor && vet[i] > 0) {
            menor = vet[i];
            posicao = i;
        }
    }
    return posicao;
}


int main()
{
    cout << procurar_melhor_pos_se() << "\n";
    return 0;
}