from math import sin,cos, pi

def rad(angle):
    return (angle/180)*pi

def main():
    T2 = 0
    T1 = 2.934

    for i in range(1, 40):
        angleT2 = rad(i)
        angleT1 = rad(140)

        T2 = (T1*sin(angleT1)-3.4335)/sin(angleT2)

        if(T1*sin(angleT1)-3.4335+T2*sin(angleT2) == 0):
            print(f'\nEl valor de T2 es: {T2} en el angulo {angleT2}')
            print(f'La sumatoria en X es: {T1*cos(angleT1)+T2*cos(angleT2)}')
            print(f'La sumatoria en Y es: {T1*sin(angleT1)-3.4335+T2*sin(angleT2)}')
    
        

main()