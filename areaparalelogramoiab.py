#area del paralelogramo

class Paralelogramo:
    def __init__(self, base, altura):
        self.b=base
        self.h=altura
        
base=float(input("Base: "))
altura=float(input("Altura: "))

a=Paralelogramo(base,altura)
area=a.b*a.h     
print("El area del paralelogramo es: ", area)
