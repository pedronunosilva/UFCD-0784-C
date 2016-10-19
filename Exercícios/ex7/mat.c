

double soma (double num1, double num2){

    return (double)(num1 + num2);

}

double subtracao (double num1, double num2){

    return (double)(num1 - num2);

}

double divisao (double num1, double num2){

    if(num1 == 0 || num2 == 0){

        return 0;
    } else {

        return (double)(num1 / num2);
    }
}

double multiplicacao (double num1, double num2){

    return (double)(num1 * num2);

}


int factorial (int numero) {

    if (numero==0 || numero==1)
        {
            return 1;
        }
    return (numero * factorial (numero - 1) );
}

double quadrado (double numero) {

    return  numero*numero;
}

double dobro (double numero) {

    return  2*numero;
}


double maximo (double *v, int tamanho) {

    double max = v[0];
    int i = 0;

    for(i = 1; i < tamanho; i++){

        if (max < v[i]){

            max = v[i];
        }
    }

    return  max;
}

double minimo (double *v, int tamanho) {

    double min = v[0];
    int i = 0;

    for(i = 1; i < tamanho; i++){

        if (min > v[i]){

            min = v[i];
        }
    }

    return  min;
}

double amplitude (double *v, int tamanho) {


    return  maximo(v, tamanho) - minimo(v, tamanho);
}


double somatorio (double *v, int tamanho) {

    double soma = 0;
    int i = 0;

    for(i = 0; i < tamanho; i++){

        soma = soma + v[i];

    }

    return  soma;
}


double media (double *v, int tamanho) {

    double media = 0;

    media = somatorio(v, tamanho) / tamanho;

    return  media;
}
