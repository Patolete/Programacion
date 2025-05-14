class Fraccion:
        def __init__(self,num,denom):
            self.num = num
            self.denom = denom

        def mostrar(self):
            return(str(self.num) + "/" + str(self.denom))
        
        def por( self, fraccion2):
            resulNum = self.num * fraccion2.num
            resulDenom = self.denom * fraccion2.denom
            return Fraccion(resulNum, resulDenom)

        def dividido( self, fraccion2):
            resulNum = self.num * fraccion2.denom
            resulDenom = self.denom * fraccion2.num
            return Fraccion(resulNum, resulDenom)

        def mas( self, fraccion2):
            resulNum = (self.num * fraccion2.denom) + (self.denom * fraccion2.num)
            resulDenom = self.denom * fraccion2.denom
            return Fraccion(resulNum, resulDenom)
            
        def menos( self, fraccion2):
            resulNum = (self.num * fraccion2.denom) - (self.denom * fraccion2.num)
            resulDenom = self.denom * fraccion2.denom
            return Fraccion(resulNum, resulDenom)


opcion = 1

print ("Ingrese la primer fraccion\n")
fraccion1 = Fraccion(int(input()),int(input("--- \n ")))
resultado = Fraccion(0,0)

while (opcion <5):
	print ("Ingrese una opcion: \n 1 - Sumar \n 2 - Restar \n 3 - Multiplicar \n 4 - Dividir \n")
	opcion = int(input())

	if (opcion ==1 ):
		fraccion2 = Fraccion(int(input("Ingrese la segunda fraccion\n ")),int(input("--- \n ")))
		print ("La suma es \n " + fraccion1.mas(fraccion2).mostrar())

	if (opcion ==2 ):
		fraccion2 = Fraccion(int(input("Ingrese la segunda fraccion\n ")),int(input("--- \n ")))
		print ("La resta es \n " + fraccion1.menos(fraccion2).mostrar())

	if (opcion ==3 ):
		fraccion2 = Fraccion(int(input("Ingrese la segunda fraccion\n ")),int(input("--- \n ")))
		print ("La multiplicación es \n " + fraccion1.por(fraccion2).mostrar())

	if (opcion ==4 ):
		fraccion2 = Fraccion(int(input("Ingrese la segunda fraccion\n ")),int(input("--- \n ")))
		print ("La división es \n " + fraccion1.dividido(fraccion2).mostrar())
	input()
