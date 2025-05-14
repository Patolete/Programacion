from Flask import Flask, render_template, redirect, url_for, request
import random
from Cobragochi import Tamagochi

app = Flask(__name__)

cobragochi = Tamagochi(30, 30, 30, 0)
dificultad = 1

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/comer')
def comer():
    global cobragochi, dificultad
    cobragochi.comer(dificultad)
    return redirect(url_for('juego'))

@app.route('/ducharse')
def ducharse():
    global cobragochi, dificultad
    cobragochi.ducharse(dificultad)
    return redirect(url_for('juego'))

@app.route('/stremear')
def stremear():
    global cobragochi, dificultad
    cobragochi.stremear(dificultad)
    return redirect(url_for('juego'))

@app.route('/reiniciar')
def reiniciar():
    global cobragochi
    cobragochi = Tamagochi(30, 30, 30, 0)
    return redirect(url_for('juego'))

@app.route('/normal')
def normal():
    global dificultad
    dificultad = 1
    return redirect(url_for('juego'))

@app.route('/dificil')
def dificil():
    global dificultad
    dificultad = 2
    return redirect(url_for('juego'))
    
@app.route('/juego')
def juego():
    global dificultad, cobragochi
    return render_template(
        'juego.html',
        dificultad=dificultad,
        hambre=cobragochi.hambre,
        plata=cobragochi.plata,
        suciedad=cobragochi.suciedad,
        seguidores=cobragochi.seguidores
    )

@app.route('/origenes')
def origenes():
    global dificultad
    dificultad = 3
    return redirect(url_for('juego'))




if __name__ == '__main__':
    app.run(debug=True)