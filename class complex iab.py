class Complex:
    def __init__(self, realpart, imagpart):
        self.r=realpart
        self.i=imagpart

re=float(input("Ingrese la parte real: "))
im=float(input("Ingrese la parte imaginaria: "))

x=Complex(re, im)
print("Real: ", x.r, "Imaginario: ", x.i)