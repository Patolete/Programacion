import operator
class pariente:
    def __init__ (self,nombre,app,edad,parentezco):
        self.nombre = nombre
        self.app = app
        self.edad = edad
        self.parentezco = parentezco
parientes = []
parientes_orden = []
abuelos = []
padres = []
hermanos = []
bul = False
while bul == False:
    pariente1 = pariente(
        input("Nombre: "),
        input("Apellido: "),
        input("Edad: "),
        input("Parentezco: "))
    parientes.append(pariente1)
    if pariente1.parentezco.lower() == "abuelo":
        abuelos.append(pariente1)
    if pariente1.parentezco.lower() == "padre":
        padres.append(pariente1)
    if pariente1.parentezco.lower() == "hermano":
        hermanos.append(pariente1)
    rta = input("Ingresar otro pariente?(s/n) ")
    if rta == "s" or rta == "S":
        bul = False
    else:
        bul = True
for i in range(len(parientes)):
    print("Nombre, apellido y parentezco de pariente", i+1, ":")
    print(parientes[i].nombre)
    print(parientes[i].app)
    print(parientes[i].edad)
    print(parientes[i].parentezco)

parientes_orden = sorted(parientes, key = operator.attrgetter('edad'))

opcion = 0
while opcion != 5:
    print("       -MENU-")
    print("1- Mostrar abuelos")
    print("2- Mostrar padres")
    print("3- Mostrar hermanos")
    print("4- Mostrar parientes enorden ascendente")
    print("5- SALIR")
    opcion = int(input())
    if opcion == 1:
        for i in range(len(abuelos)):
            print("Nombre, apellido y edad del abuelo", i+1, ":")
            print(abuelos[i].nombre)
            print(abuelos[i].app)
            print(abuelos[i].edad)
    if opcion == 2:
        for i in range(len(padres)):
            print("Nombre, apellido y edad del padre", i+1, ":")
            print(padres[i].nombre)
            print(padres[i].app)
            print(padres[i].edad)
    if opcion == 3:
        for i in range(len(hermanos)):
            print("Nombre, apellido y edad del hermano", i+1, ":")
            print(hermanos[i].nombre)
            print(hermanos[i].app)
            print(hermanos[i].edad)
    if opcion == 4:
        for i in range(len(parientes_orden)):
            print("Nombre, apellido y parentezco de pariente", i+1, ":")
            print(parientes_orden[i].nombre)
            print(parientes_orden[i].app)
            print(parientes_orden[i].edad)
            print(parientes_orden[i].parentezco)
