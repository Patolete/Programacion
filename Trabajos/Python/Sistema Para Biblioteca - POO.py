class libro:
    def __init__(self,titulo,autor,editorial,genero,año,dispo):
        self.titulo = titulo
        self.autor = autor
        self.editorial = editorial
        self.genero = genero
        self.año = año
        self.dispo = dispo

    def imprimirInfo(self):
        print("El título es")
        print(self.titulo)
        print("El autor del libro es")
        print(self.autor)
        print("La editorial que lo publicó es")
        print(self.editorial)
        print("El año en que se publicó es")
        print(self.año)
        print("El género del libro es")      
        print(self.genero)
        print("El libro ", self.dispo, " esta disponible")
        
    def prestar(self):
        self.dispo = "no"

    def devolver(self):
        self.dispo = "si"
    
    def antiguedad(self):
        print("La antiguedad del libro es de: ",self.año - 2024,"Años")

r = False

existente = False

genera = False

name = ""

publicación = 0

biblioteca = []

atr = ""

mod = ""

rsta = 0

gen = 0

while rsta != 11:
    print("-----MENU-----")
    print("1. Cargar")
    print("2. Modificar Libro")
    print("3. Eliminar Libro")
    print("4. Prestar")
    print("5. Devolver")
    print("6. Todos los Libros")
    print("7. Libros Prestados")
    print("8. Libros Disponibles")
    print("9. Libros de un Genero")
    print("10. Libros Modernos")
    print("11. Salir")
    rsta = int(input (""))

    if rsta == 1:
        r = False
        while r != True:
            publicación = int(input("Cuando se publico? "))
            if publicación >= 0 and publicación <= 2024:
                r = True
            else:
                print("Número inválido, por favor ingrese uno nuevo")
        
        name = input("Cuál es el título ? ")
        if len(biblioteca) == 0:
            libro1 = libro(
                name,
                input ("Quién es el autor ? "),
                input ("Cuál es la editorial ? "),
                input ("De qué género es el libro ? "),
                publicación,
                input ("Disponible ? ")
                )
            biblioteca.append(libro1)
            
        else:
            for i in range(len(biblioteca)):
                if biblioteca[i].titulo.lower() != name.lower():     
                    libro1 = libro(
                        name,
                        input ("Quién es el autor ? "),
                        input ("Cuál es la editorial ? "),
                        input ("De qué género es el libro ? "),
                        publicación,
                        input ("Disponible ? ")
                        )
                    biblioteca.append(libro1)

                else:
                    print("Este libro ya esta cargado")

    elif rsta == 2:
        opc = input("Que libro quiere modificar? ")
        for i in range(len(biblioteca)):
            if biblioteca[i].titulo.lower() == opc.lower():
                existente = True
                print("Cuál es el atributo que quiere cambiar ?")
                atr = input("")
                if atr.lower() == "titulo":
                    biblioteca[i].titulo = input("Cuál es el nuevo titulo? ")
                    
                elif atr.lower() == "autor":
                    biblioteca[i].autor = input("Cuál es el nuevo autor? ")
                    
                elif atr.lower() == "editorial":
                    biblioteca[i].editorial = input("Cuál es el nuevo editorial? ")
                    
                elif atr.lower() == "genero":
                    biblioteca[i].genero = input("Cuál es el nuevo genero? ")

                elif atr.lower() == "año":
                    biblioteca[i].añoo = input("Cuál es el nuevo año de publicacion? ")

                elif atr.lower() == "disponibilidad":
                    print("Si desea editar el atributo de disponibilidad utilize otra funcion del menu")

                else:
                    print("Ese atributo no existe")
        if existente == False:
            print("Libro no encontrado!!!")

        existente = False
        
    elif rsta == 3:
        opc = input("Que libro quiere eliminar? ")
        for i in range(len(biblioteca)):
            i -= 1
            if biblioteca[i].titulo.lower() == opc.lower():
                existente = True
                biblioteca.remove(biblioteca[i])
                
        if existente == False:
            print("Libro no encontrado!!!")

        existente = False
        
    elif rsta == 4:
        opc = input("Que libro quiere que le prestemos? ")
        for i in range(len(biblioteca)):
            if biblioteca[i].titulo.lower() == opc.lower() and biblioteca[i].dispo.lower() == "si":
                existente = True
                biblioteca[i].prestar()
            else:
                print("El libro que eligio no lo tenemos o no esta disponible")

                
        if existente == False:
            print("Libro no encontrado!!!")

        existente = False
        
    elif rsta == 5:
        opc = input("Que libro quiere devolver? ")
        for i in range(len(biblioteca)):
            if biblioteca[i].titulo.lower() == opc.lower() and biblioteca[i].dispo.lower() == "no":
                existente = False
                biblioteca[i].devolver()
            else:
                print("El libro que quiere devolver ya lo tenemos")
                
        if existente == True:
            print("Libro no encontrado!!!")

        existente = True
            
    elif rsta == 6:
        for i in range(len(biblioteca)):
            print("")
            print("--------------------")
            biblioteca[i].imprimirInfo()
            print("--------------------")
            print("")
            
    elif rsta == 7:
        for i in range(len(biblioteca)):
            if biblioteca[i].dispo.lower() == "no":
                print("")
                print("--------------------")
                biblioteca[i].imprimirInfo()
                print("--------------------")
                print("")

    elif rsta == 8:
        for i in range(len(biblioteca)):
            if biblioteca[i].dispo.lower() == "si":
                print("")
                print("--------------------")
                biblioteca[i].imprimirInfo()
                print("--------------------")
                print("")

    elif rsta == 9:
        gen = input("Genero de los libros que quiere buscar? ")
        for i in range(len(biblioteca)):
            if biblioteca[i].genero.lower() == gen.lower():
                genera = True
                print("")
                print("--------------------")
                biblioteca[i].imprimirInfo()
                print("--------------------")
                print("")

        if genera == False:
            print("No hay ningun libro con ese genero")

    elif rsta == 10:
        for i in range(len(biblioteca)):
            if 2024 - biblioteca[i].año <= 20:
                print("")
                print("--------------------")
                biblioteca[i].imprimirInfo()
                print("--------------------")
                print("")
