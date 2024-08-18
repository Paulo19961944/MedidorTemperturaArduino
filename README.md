# MEDIDOR DE TEMPERATURA - ARDUINO

Esse é um projeto de Medidor de Temperatura em Arduino. Serve para capturar temperatura de um ambiente ou algo do tipo. O projeto é simples, mas a partir dele podemos nos comunicar com as coisas. Pretendo implementar algo diferente nele, talvez um MQTT no futuro, utilizando o ESP8266 e o Ubidots. Ou seja, podemos fazer até aplicativos que captura esse valor de temperatura de um quarto e acionar o Ar Condicionado automaticamente caso esteja calor no quarto, se comunicando com as coisas. É um projeto inicial de algo muito legal e tem novas coisas vindo por ai, então aguardem :):):)<br></br>

# THERMISTOR

É uma biblioteca que converte os dados do local em Temperatura. Ele utiliza um resistor de pull down de 10k, com isso a biblioteca calcula o 1024 * 10000, cujo resultado dá 10240000, que é utilizado um Double, pois é um numero bem alto. Depois ele pega esse resultado e divide pelo valor gerado nele, e subtrai 10000.<br></br>

Ele também utiliza o Math.h, e ele usa o log para facilitar o calculo do termistor. Depois ele converte isso em Temperatura, porém os dados são em Kelvins, então é necessário converter para celsius, que é o que utilizamos no Brasil.<br></br>

# CÓDIGO

Ele importa a Biblioteca e depois disso, ele captura o valor da temperatura que foi definido na biblioteca e depois exibe a temperatura na Serial, o código é simples, pois a biblioteca facilita muito o nosso trabalho.<br></br>

# CONCLUSÕES

Espero que tenha gostado e que até tenha te auxiliado nesse novo mundo e nessa nova possibilidade. E espero que seja o primeiro de muitos projetos, e continuem estudando. E eu pretendo fazer o mesmo se a vida me permitir, pois é um aprendizado constante e apesar das dificuldades, eu amo o que faço, de verdade mesmo. E vou continuar praticando, e é isso e até a próxima :) :) :)
