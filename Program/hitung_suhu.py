print("\nProgram Menghitung Suhu")
print("\n==== Celsius ====\n")

data = float(input("masukan suhu dalam Celsius: "))

celcius = data
print("Celsius =",celcius)

reamur = (4/5) * celcius
print("Reamur =",reamur)

fahrenheit = ((9/5) * celcius) + 32
print("Fahrenheit =",fahrenheit)

kelvin = celcius + 273.15
print("Kelvin =",kelvin)

print("\n==== Reamur ====\n")

data = float(input("masukan suhu dalam Reamur: "))

reamur = data
print("Reamur =",reamur)

celcius = (5/4) * reamur
print("Celsius =",celcius)


fahrenheit = ((9/4) * reamur) + 32
print("Fahrenheit =",fahrenheit)

kelvin = ((5/4) * reamur) + 273.15
print("Kelvin =",kelvin)

print("\n==== Fahrenheit ====\n")

data = float(input("masukan suhu dalam Fahrenheit: "))

fahrenheit = data
print("Fahrenheit =",fahrenheit)

celcius = 5 / 9 * (fahrenheit - 32)
print("Celsius =",celcius)

reamur = 4 / 9 * (fahrenheit - 32)
print("Reamur =",reamur)

kelvin = celcius + 273.15
print("Kelvin =",kelvin)

print("\n==== Kelvin ====\n")

data = float(input("masukan suhu dalam Kelvin: "))

kelvin = data
print("Kelvin =",kelvin)

celcius = kelvin - 273.15
print("Celsius =",celcius)

reamur = 4 / 5 * (kelvin - 273.15)
print("Reamur =",reamur)

fahrenheit = 9 / 5 * (kelvin - 273.15) + 32
print("Fahrenheit =",fahrenheit)

print("\n==== Selesai ====")