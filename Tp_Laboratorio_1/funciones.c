

int suma(int num1,int num2)
{
    int resultado;

    resultado=num1+num2;

    return resultado;
}

int resta(int num1,int num2)
{
    int resultado;

    resultado=num1-num2;

    return resultado;
}


float division(float num1,float num2)
{
    float resultado;

    resultado=num1/num2;





        return resultado;

}

int multiplicacion(int num1,int num2)
{
    int resultado;

    resultado=num1*num2;

    return resultado;

}

int factorial (int num1)
{
    int resultado;

    if(num1==1)
        return 1;
    resultado=num1* factorial(num1-1);
    return resultado;

}
