import random

class mastermind:
    def __init__(self):
        self.fichas = []

    def inicializar(self,lista):
        self.fichas = lista

    def inicializarRandom (self, dificultad):
        if (dificultad.lower() == "facil"):
            for _ in range(4): 
                ficha = random.choice(["rojo","azul","verde","amarillo"])
                while ficha in self.fichas:
                    ficha = random.choice(["rojo","azul","verde","amarillo"])
                self.fichas.append(ficha)
        elif (dificultad.lower() == "medio"):
            for _ in range(4): 
                ficha = random.choice(["rojo","azul","verde","amarillo"])
                self.fichas.append(ficha)
        else:
            for _ in range(4): 
                self.fichas.append(random.choice(["rojo","azul","verde","amarillo","naranja","lila"]))
    
    def chequeo (self,solucion):
        fichas = self.fichas[:]
        pista = ["errado","errado","errado","errado"]
        for i in range (len(solucion)):
            for j in range ( len(fichas) ):
               # print(solucion[i],i,fichas[j],j)
                if solucion[i] == fichas[j] and i == j:
                    pista [i] = "toque"
                    fichas[j] = " "
                    break
        for i in range (len(solucion)):
            for j in range ( len(fichas) ):
               # print(solucion[i],i,fichas[j],j)
                if solucion[i] == fichas[j] and pista[i] != "toque":
                    pista[i] = "roce"
                    fichas[j] = " "
                
        pista.sort()
        return pista
    
    def mostrar(self):
        print(self.fichas)
    
                
#de aca  completar el codigo principal

jug = True
while jug == True:
    lista = ["","","",""]
    resultado = []
    num = False
    intentos = 0
    juego = mastermind()
    pista = []
    while num == False:
        pjs = int(input("Ingrese el numero de jugadores(max 2): "))
        if pjs <= 2:
            num = True
    cols = 0
    solucion = ["", "", "", ""]
    if pjs == 1:
        dificultad = input("Elija la dificultad(Facil, Medio o Dificil): ")
        juego.inicializarRandom(dificultad)
        while juego.chequeo(solucion) != ["toque","toque","toque","toque"] and intentos <= 9:
            cols = 4
            for j in range(len(pista)):
                print("Intentos:")
                print(pista[j])
                print("Resultado:")
                print(resultado[j])
            for i in range(cols):
                solucion[i] = input("Ingrese un color: ")
            pista.append(solucion)
            resultado.append(juego.chequeo(solucion))
            #print(juego.chequeo(solucion))
            print("Intentos y resultados anteriores:")
            intentos += 1
        if intentos <= 9:
            print("Ganaste!!!!!!")
            print("Te tomo: ", intentos, " intentos")
        else:
            print("Perdiste!!!!!!")
            print("La respuesta era: ")
            juego.mostrar()
    elif pjs == 2:
        long = 4
        for i in range(long):
            lista[i] = input("Que color desea cargar? ")
        juego.inicializar(lista)
        while juego.chequeo(solucion) != ["toque","toque","toque","toque"] and intentos <= 9:
            for j in range(len(pista)):
                print("Intentos:")
                print(pista[j])
                print("Resultado:")
                print(resultado[j])
            for i in range(long):
                solucion[i] = input("Ingrese un color: ")
            pista.append(solucion)
            resultado.append(juego.chequeo(solucion))
            #print(juego.chequeo(solucion))
            print("Intentos y resultados anteriores:")
            intentos += 1
        if intentos <= 9:
            print("Ganaste!!!!!!")
            print("Te tomo: ", intentos, " intentos")
        else:
            print("Perdiste!!!!!!")
            print("La respuesta era: ")
            juego.mostrar()
    jugar = input("Quiere seguir jugando? ")
    if jugar.lower() == "no":
        jug = False




    
