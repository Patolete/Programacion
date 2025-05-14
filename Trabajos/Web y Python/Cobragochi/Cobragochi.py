from flask import * 
import random
gasto = 0

class Tamagochi:
    def __init__(self,hambre,suciedad,plata,seguidores) -> None:
        self.hambre = hambre
        self.plata = plata
        self.suciedad = suciedad
        self.seguidores = seguidores

    def comer(self,dificultad):
        gasto = random.randint(2000, 10000)

        if dificultad == 1:
            if gasto < self.plata:
                self.hambre -= random.randint(30,70)
                self.suciedad += random.randint(1,10)
                self.plata -= gasto
        elif dificultad == 2:
            if gasto < self.plata:
                self.hambre -= random.randint(20,65)
                self.suciedad += random.randint(1,15)
                self.plata -= gasto
        else:
            if gasto < self.plata:
                self.hambre -= random.randint(30,70)
                self.suciedad += random.randint(1,10)
                self.plata -= gasto
            
        if  self.hambre < 0:
            self.hambre = 0
        if  self.plata < 0:
            self.plata = 0 

    def stremear(self,dificultad):
        if dificultad == 1:
            self.hambre += random.randint(1,45)
            self.suciedad += random.randint(1,25)
            self.plata += random.randint(5000, 20000)
            self.seguidores += random.randint(0,15000)
        elif dificultad == 2:
            self.hambre += random.randint(1,65)
            self.suciedad += random.randint(1,40)
            self.plata += random.randint(5000, 10000)
            self.seguidores += random.randint(0,10000)
        else:
            self.hambre += random.randint(1,45)
            self.suciedad += random.randint(1,25)
            self.plata += random.randint(5000, 20000)


    def ducharse(self,dificultad):
        if dificultad == 1:
            self.hambre += random.randint(1,17)
            self.suciedad -= random.randint(70,100)
            self.plata -= random.randint(300,500)
        elif dificultad == 2:
            self.hambre += random.randint(1,25)
            self.suciedad -= random.randint(65,100)
            self.plata -= random.randint(300,600)
        else:
            self.hambre += random.randint(1,17)
            self.suciedad -= random.randint(70,100)
            self.plata -= random.randint(300,500)

        if random.randint(0,2) == 1:
            if random.randint(0,2) == 1:
                if random.randint(0,2) == 1:
                    self.seguidores += 50000


        if  self.suciedad < 0:
            self.suciedad = 0
        if  self.plata < 0:
            self.plata = 0






































































































