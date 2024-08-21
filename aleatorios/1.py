#Elaborar um algoritmo que capture o saldo para cálculo da tarifa bancária que está associada aos investimentos do cliente no banco. A tarifa é reduzida em 20% se o cliente possui saldo R$1.000,00; é reduzida adicionalmente em 30% se possuir saldo R$5.000,00; caí em mais 25% se possuir R$3.000,00
saldo=int(input("digite o saldo bancario"))
t=int(input("digite a tarifa bancaria"))
if saldo==1000:
    t=t*0.8
    print("a taxa é", t)
elif saldo==3000:
    t=t*0.75
    print("a taxa é", t)
elif saldo==5000:
    t=t*0.5
    print("a taxa é", t)


