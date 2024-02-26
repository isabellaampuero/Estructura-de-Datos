def factorial(num):
    if (num==0):
        return 1;
    else:
        return num*factorial(num-1);
    
numero = int(input("Ingrese el valor entero a sacar el factorial: "))
#resultado=factorial(numero)
print("El factorial de ", n," es: ", fact(numero))

#recursividad es 