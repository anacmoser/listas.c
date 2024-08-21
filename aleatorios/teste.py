n=int(input("digite um numero inteiro"))
sp=0
sim=0
for i in range(1, n):
    if i%2==0:
        p=i
        sp+=p
        print("numero par:", p)

    else:
        im=i
        sim+=im
        print("o numero impar:", i)
    
print("a soma dos pares é", sp)
print("a soma dos numeros impares é", sim)
    