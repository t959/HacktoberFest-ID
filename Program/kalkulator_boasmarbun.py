print("===================")
print(" SIMPLE CALCULATOR ")
print("===================")
num1 = int(input("Masukkan angka pertama (integer): "))
num2 = int(input("Masukkan angka kedua (integer): "))
op = input("Masukkan operator (+, -, *, /, atau %): ")

hasil = 0
if(op == "+"):
	hasil = num1 + num2
elif(op == "-"):
	hasil = num1 - num2
elif(op == "*"):
	hasil = num1 * num2
elif(op == "/"):
	hasil = num1 / num2
elif(op == "%"):
	hasil = num1 % num2
if(hasil == 0):
	print("wrong input")
else:
	print("Hasil : " , hasil)