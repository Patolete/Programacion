class ComandaEmp:
    def __init__(self, nombre, envio, tipoE, cantidad, precio, direccion):
        self.nombre = nombre
        self.envio = envio
        self.tipoE = tipoE
        self.cantidad = int(cantidad)
        self.precio = int(precio)
        self.direccion = direccion

bul = False
resp = True
direcc = ""
print("COMANDA 1")
print("")

#valido el nombre
nom = input("Ingrese su nombre: ")
if type(nom) != str:
    resp = False
while resp == False:
    print("Nombre invalido")
    nom = input("Ingrese su nombre: ")
    
#valido el tipo
tipo = input("Ingrese el tipo de empandas: ")
if type(nom) != str:
    resp = False
while resp == False:
    print("Tipo de Empanadas Invalida")
    tipo = input("Ingrese el tipo de empandas: ")
    
#valido la cantidad
can = int(input("Ingrese la cantidad de empanadas: "))
if type(can) != int or can < 1:
    resp = False
while resp == False:
    print("Cantidad Invalida")
    can = input("Ingrese la cantidad de empandas: ")
    
#valido el precio
cost = int(input("Ingrese el precio de las empanadas: "))
if type(cost) != int or cost < 1:
    resp = False
while resp == False:
    print("Precio Invalido")
    cost = input("Ingrese el precio de las empandas: ")
comanda1 = ComandaEmp(
    nom,
    bul,
    tipo,
    can,
    cost,
    direcc
    )
rta = input("¿Es con envio?s/n ")
if rta == "s" or rta == "S":
    bul = True
    comanda1.precio += 500
if comanda1.cantidad > 12:
    comanda1.precio *= 0.8
if bul == True:
    direcc = input("Ingrese su direccion: ")

print(comanda1.nombre)
print(comanda1.envio)
print(comanda1.tipoE)
print(comanda1.cantidad)
print(comanda1.precio)
print(comanda1.direccion)

bul = False
resp = True
direcc = ""
print("COMANDA 2")
print("")

#valido el nombre
nom = input("Ingrese su nombre: ")
if type(nom) != str:
    resp = False
while resp == False:
    print("Nombre invalido")
    nom = input("Ingrese su nombre: ")
    
#valido el tipo
tipo = input("Ingrese el tipo de empandas: ")
if type(nom) != str:
    resp = False
while resp == False:
    print("Tipo de Empanadas Invalida")
    tipo = input("Ingrese el tipo de empandas: ")
    
#valido la cantidad
can = int(input("Ingrese la cantidad de empanadas: "))
if type(can) != int or can < 1:
    resp = False
while resp == False:
    print("Cantidad Invalida")
    can = input("Ingrese la cantidad de empandas: ")
    
#valido el precio
cost = int(input("Ingrese el precio de las empanadas: "))
if type(cost) != int or cost < 1:
    resp = False
while resp == False:
    print("Precio Invalido")
    cost = input("Ingrese el precio de las empandas: ")
comanda2 = ComandaEmp(
    nom,
    bul,
    tipo,
    can,
    cost,
    direcc
    )
rta = input("¿Es con envio?s/n ")
if rta == "s" or rta == "S":
    bul = True
    comanda2.precio += 500
if comanda2.cantidad > 12:
    comanda2.precio *= 0.8
if bul == True:
    direcc = input("Ingrese su direccion: ")

print(comanda2.nombre)
print(comanda2.envio)
print(comanda2.tipoE)
print(comanda2.cantidad)
print(comanda2.precio)
print(comanda2.direccion)
bul = False
resp = True
direcc = ""
print("COMANDA 3")
print("")

#valido el nombre
nom = input("Ingrese su nombre: ")
if type(nom) != str:
    resp = False
while resp == False:
    print("Nombre invalido")
    nom = input("Ingrese su nombre: ")
    
#valido el tipo
tipo = input("Ingrese el tipo de empandas: ")
if type(nom) != str:
    resp = False
while resp == False:
    print("Tipo de Empanadas Invalida")
    tipo = input("Ingrese el tipo de empandas: ")
    
#valido la cantidad
can = int(input("Ingrese la cantidad de empanadas: "))
if type(can) != int or can < 1:
    resp = False
while resp == False:
    print("Cantidad Invalida")
    can = input("Ingrese la cantidad de empandas: ")
    
#valido el precio
cost = int(input("Ingrese el precio de las empanadas: "))
if type(cost) != int or cost < 1:
    resp = False
while resp == False:
    print("Precio Invalido")
    cost = input("Ingrese el precio de las empandas: ")
comanda3 = ComandaEmp(
    nom,
    bul,
    tipo,
    can,
    cost,
    direcc
    )
rta = input("¿Es con envio?s/n ")
if rta == "s" or rta == "S":
    bul = True
    comanda3.precio += 500
if comanda3.cantidad > 12:
    comanda3.precio *= 0.8
if bul == True:
    direcc = input("Ingrese su direccion: ")

print(comanda3.nombre)
print(comanda3.envio)
print(comanda3.tipoE)
print(comanda3.cantidad)
print(comanda3.precio)
print(comanda3.direccion)

total = comanda1.precio + comanda2.precio + comanda3.precio
print("")
print("Ganancia Total: ", total)
