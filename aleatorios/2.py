while (True):
    n=(input("digite um numero (de 1 a 4) e E para sair"))
    if n in ['1', '2', '3', '4', 'E']:
        if n=='1':
           print("operação de depósito")
        elif n=='2':
           print("operação de saque")
        elif n=='3':
          print("operação de extrato")
        elif n=='4':
          print("operação de transferencia")
        elif n=='E':
          break
    else:
        print("operação inválida")