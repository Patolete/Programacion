print("")
jugar = 1
while jugar == 1:
    jugar = int(input("Jugar? 1 = Si, 2 = No "))
    import random
    import math
    puntos = random.randint(0, 25)
    class Persona:
        def __init__(self, nombre, edad, altura, signo, colorPelo, subcultura):
            self.nombre = nombre
            self.edad = edad
            self.altura = altura
            self.signo = signo
            self.colorPelo = colorPelo
            self.subcultura = subcultura

    print("")
    persona1 = Persona(
        nombre = input("Nombre: "),
        edad = int(input("Edad: ")),
        altura = int(input("Altura en cm: ")),
        signo =  int(input("Elemento Zodiacal (1-Tierra (Tauro, Virgo y Capricornio), 2-Agua (Piscis, Escorpio y Cancer), 3-Fuego (Aries, Leo y Sagitario) y 4-Viento (Libra, Acuario y Geminis)): ")),
        colorPelo = int(input("Color de pelo (1-Rubio/a, 2-Morocho/a, 3-Castaño/a): ")),
        subcultura = int(input("Subcultura (1-Tincho/Milipili, 2-Turro/a, 3-Otaku, 4-Emo, 5-Jueguitos): "))
    )

    print("")
    persona2 = Persona(
        nombre = input("Nombre: "),
        edad = int(input("Edad: ")),
        altura = int(input("Altura en cm: ")),
        signo =  int(input("Elemento Zodiacal (1-Tierra (Taurus, Virgo y Capricornio), 2-Agua (Piscis, Escorpio y Cancer), 3-Fuego (Aries, Leo y Sagitario) y 4-Viento (Libra, Acuario y Geminis)): ")),
        colorPelo = int(input("Color de pelo (1-Rubio/a, 2-Morocho/a, 3-Castaño/a): ")),
        subcultura = int(input("Subcultura (1-Tincho/Milipili, 2-Turro/a, 3-Otaku, 4-Emo, 5-Jueguitos): "))
    )


    difE = persona1.edad-persona2.edad
    difE = math.fabs(difE)

    difA = persona1.altura-persona2.altura
    difA = math.fabs(difA)


    #Nombre
    nombre1 = persona1.nombre
    nombre2 = persona2.nombre

    nombres = []
    puntosT = []

    if nombre2 < nombre1:
        nombres = nombre1 + nombre2
    else:
        nombres = nombre2 + nombre1
    for letra in nombres:
        puntosletra = nombres.count(letra)
        if puntosletra != 0:
            puntosT.append(puntosletra)
        nombres = nombres.replace(letra, "")

    puntosR = []

    while len(puntosT) > 2:
        for i in range((len(puntosT)//2)):
            puntosR.append(puntosT[i] + puntosT[len(puntosT)-i-1])
        if len(puntosT) % 2 != 0:
            puntosR.append(puntosT[(len(puntosT)//2)+1])
        puntosT = puntosR
        puntosR = []

    puntosT = puntosT[0] + puntosT[1]*0.1
    puntos += int(puntosT)


    #Edad
    if difE<=2:
        puntos += 10
    elif 2<difE<5:
        puntos += 7
    elif 5<=difE<7:
        puntos += 4
    elif 7<=difE<10:
        puntos += 1


    #Signos
    if difA<=2:
        puntos += 10
    elif 2<difA<5:
        puntos += 7
    elif 5<=difA<7:
        puntos += 4
    elif 7<=difA<10:
        puntos += 1


    #Color de Pelo
    if persona1.colorPelo == persona2.colorPelo:
        puntos = puntos + 15
    elif persona1.colorPelo == 1 and persona2.colorPelo == 2 or persona1.colorPelo == 2 and persona2.colorPelo == 1:
        puntos = puntos + 10
    elif persona1.coloPelocolorPelo == 1 and persona2.colorPelo == 3 or persona1.colorPelo == 3 and persona2.colorPelo == 1:
        puntos = puntos + 10
    elif persona1.colorPelo == 3 and persona2.colorPelo == 2 or persona1.colorPelo == 2 and persona2.colorPelo == 3:
        puntos = puntos + 10


    #Subcultura
    if persona1.subcultura == persona2.subcultura:
        puntos = puntos + 10
    elif persona1.subcultura == 1 and persona2.subcultura == 2 or persona1.subcultura == 2 and persona2.subcultura == 1:
        puntos = puntos + 7
    elif persona1.subcultura == 1 and persona2.subcultura == 3 or persona1.subcultura == 3 and persona2.subcultura == 1:
        puntos = puntos + 2
    elif persona1.subcultura == 3 and persona2.subcultura == 2 or persona1.subcultura == 2 and persona2.subcultura == 3:
        puntos = puntos + 1
    elif persona1.subcultura == 1 and persona2.subcultura == 4 or persona1.subcultura == 4 and persona2.subcultura == 1:
        puntos = puntos + 3
    elif persona1.subcultura == 1 and persona2.subcultura == 5 or persona1.subcultura == 5 and persona2.subcultura == 1:
        puntos = puntos + 6
    elif persona1.subcultura == 4 and persona2.subcultura == 2 or persona1.subcultura == 2 and persona2.subcultura == 4:
        puntos = puntos + 1
    elif persona1.subcultura == 2 and persona2.subcultura == 5 or persona1.subcultura == 5 and persona2.subcultura == 2:
        puntos = puntos + 4
    elif persona1.subcultura == 4 and persona2.subcultura == 3 or persona1.subcultura == 3 and persona2.subcultura == 4:
        puntos = puntos + 9
    elif persona1.subcultura == 5 and persona2.subcultura == 3 or persona1.subcultura == 3 and persona2.subcultura == 5:
        puntos = puntos + 9
    elif persona1.subcultura == 5 and persona2.subcultura == 4 or persona1.subcultura == 4 and persona2.subcultura == 5:
        puntos = puntos + 7
    print(puntos)