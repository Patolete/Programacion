i = 0
canSecreto2 = 0
guion = []
incorrecto = []
vidas = 0
hombrecito = ["  O  ","  I  ","/ I \\","  I  ","/ \\"]  # Corrección en la representación del hombrecito

# ApuestaCorrecta y SecretoCorrecto deberían inicializarse como False
apuestaCorrecta = False  
secretoCorrecto = False  

cont = 0

secreto = input("Palabra Secreta:").lower()
canSecreto = len(secreto)

if canSecreto <= 1 or not secreto.isalpha():
    secretoCorrecto = True

while secretoCorrecto:
    if canSecreto <= 1 or not secreto.isalpha():  
        print("Palabra Incompatible")
        secreto = input("Palabra Secreta:").lower()
        canSecreto = len(secreto)
    else:
        secretoCorrecto = False

while canSecreto > 0:
    guion.append("_")
    canSecreto -= 1
    canSecreto2 += 1

while vidas < 6 and "_" in guion:  
    apuesta = input("Apuesta una letra:").lower()  # Mover esta línea aquí
    canApuesta = len(apuesta)

    if canApuesta != 1 or not apuesta.isalpha():
        apuestaCorrecta = True

    while apuestaCorrecta:  
        if canApuesta != 1 or not apuesta.isalpha():
            print("Letra Incompatible/Repetida")
            apuesta = input("Apuesta una letra:").lower()
            canApuesta = len(apuesta)
        else:
            apuestaCorrecta = False

    if apuesta not in secreto and apuesta not in incorrecto:
        print("Letra Incorrecta")
        incorrecto.append(apuesta)
        print(incorrecto)
        print(guion)

        print(hombrecito[vidas])
        vidas += 1
    else:
        for idx, letra in enumerate(secreto):
            if letra == apuesta:
                guion[idx] = apuesta
        print(guion)
        print(apuesta)
        
print("El juego ha terminado.")
